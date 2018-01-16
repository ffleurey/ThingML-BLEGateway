#include "MQTT.h"

const char *MQTT_topics[2] = {
    "ThingML",
    "tryggi3d/speech"
};
int MQTT_topics_subscribed[2];

const int MQTT_qos = 1;

struct mosquitto *MQTT_mosq = NULL;

// Callback declarations
void MQTT_log_callback(struct mosquitto *, void *, int , const char *);
void MQTT_connect_callback(struct mosquitto *, void *, int);
void MQTT_subscribe_callback(struct mosquitto *, void *, int , int , const int *);
void MQTT_message_callback(struct mosquitto *, void *, const struct mosquitto_message *);

// Setup
void MQTT_setup(struct MQTT_Instance *_instance)
{
    const char *host = "tryggi3d";
    int port = 1883;
    const char *client_id = NULL;
    const char *username = NULL;
    const char *password = NULL;
    const char *will_topic = NULL;
    const char *will_string = NULL;

    // Initialise
    printf("[MQTT] Initialising MQTT at %s:%i\n", host, port);
    mosquitto_lib_init();
    MQTT_mosq = mosquitto_new(client_id, true, _instance);
    if (!MQTT_mosq) {
        perror("[MQTT] mosquitto_new failed ");
        return;
    }

    // Set username and password
    if (password && !username) fprintf(stderr, "[MQTT] Warning: Not using password since username is not set.\n");
    if (username && !password) fprintf(stderr, "[MQTT] Warning: Not using username since password is not set.\n");
    if (username && password && mosquitto_username_pw_set(MQTT_mosq, username, password)) {
        fprintf(stderr, "[MQTT] mosquitto_username_pw_set failed\n");
        return;
    }

    // Set callbacks
    mosquitto_log_callback_set(MQTT_mosq, MQTT_log_callback);
    mosquitto_connect_callback_set(MQTT_mosq, MQTT_connect_callback);
    mosquitto_subscribe_callback_set(MQTT_mosq, MQTT_subscribe_callback);
    mosquitto_message_callback_set(MQTT_mosq, MQTT_message_callback);

    // Set will
    if (will_string && !will_topic) fprintf(stderr, "[MQTT] Warning: Not setting will since will_topic is not set.\n");
    if (will_string && will_topic && mosquitto_will_set(MQTT_mosq, will_topic, strlen(will_string), will_string, MQTT_qos, false)) {
        fprintf(stderr, "[MQTT] mosquitto_will_set failed\n");
        return;
    }

    // Connect to broker
    int result = mosquitto_connect(MQTT_mosq, host, port, 10);
    if (result == MOSQ_ERR_ERRNO) perror("[MQTT] mosquitto_connect failed ");
    else if (result) fprintf(stderr, "[MQTT] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

    if (result) MQTT_mosq = NULL;
}

// Threaded execution and polling functions
void MQTT_start_receiver_thread() {
    int result = mosquitto_loop_forever(MQTT_mosq, -1, 1);

    if (result == MOSQ_ERR_ERRNO) perror("[MQTT] mosquitto_loop_forever_failed ");
    else if (result) fprintf(stderr, "[MQTT] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

	mosquitto_destroy(MQTT_mosq);
	MQTT_mosq = NULL;
	mosquitto_lib_cleanup();
}
void MQTT_loop_poll() {
	if (MQTT_mosq) {
        int result = mosquitto_loop(MQTT_mosq, 0, 1);

        if (result == MOSQ_ERR_ERRNO) perror("[MQTT] mosquitto_loop_forever_failed ");
        else if (result) fprintf(stderr, "[MQTT] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

        if (result) {
            mosquitto_destroy(MQTT_mosq);
            MQTT_mosq = NULL;
            mosquitto_lib_cleanup();
        }
    }
}

// Logging
void MQTT_log_callback(struct mosquitto *mosq, void *_instance, int level, const char *str)
{
    //printf("[MQTT] %s\n", str);
}

// On connected
void MQTT_connect_callback(struct mosquitto *mosq, void *_instance, int result)
{
    int ret, i;
    switch (result) {
        case 0:
            for (i = 0; i < 2; i++) {
                ret = mosquitto_subscribe(mosq, &MQTT_topics_subscribed[i], MQTT_topics[i], MQTT_qos);
                if (ret) fprintf(stderr, "[MQTT] mosquitto_subscribe failed for %s : %s\n", MQTT_topics[i], mosquitto_strerror(result));
            }
            break;
        case 1:
            fprintf(stderr, "[MQTT] Connection error : unacceptable protocol version\n");
            break;
        case 2:
            fprintf(stderr, "[MQTT] Connection error : identifier rejected\n");
            break;
        case 3:
            fprintf(stderr, "[MQTT] Connection error : broker unavailable\n");
            break;
        default:
            fprintf(stderr, "[MQTT] Connection error : unknown reason\n");
            break;
    }
}

// On subscribed
void MQTT_subscribe_callback(struct mosquitto *mosq, void *_instance, int mid, int qos_count, const int *granted_qos)
{
    int print = false, i;
    //print = true;
    if (print) {
        // Find subscribed topic
        for (i = 0; i < 2; i++) {
            if (MQTT_topics_subscribed[i] == mid) break;
        }
        printf("[MQTT] Subscribed to topic '%s' - QoS levels ", MQTT_topics[i]);
        for (i = 0; i < qos_count; i++) printf("%i ",granted_qos[i]);
        printf("\n");
    }
    for (i = 0; i < qos_count; i++)
        if (granted_qos[i] == MQTT_qos) return;

    for (i = 0; i < 2; i++) {
        if (MQTT_topics_subscribed[i] == mid) break;
    }
    fprintf(stderr, "[MQTT] Topic '%s' was not granted the specified QoS level\n", MQTT_topics[i]);
}

/* ---------- INCOMMING MESSAGES ----------*/
static uint8_t *jump_to(uint8_t *msg, int len, uint8_t *ptr, uint8_t a, uint8_t b)
{
    if (!ptr) return NULL;
    while (ptr-msg <= len) {
        if(*ptr == a || *ptr == b) return ptr;
        ptr++;
    }
    return NULL;
}

static uint8_t *jump_space(uint8_t *msg, int len, uint8_t *ptr)
{
    if (!ptr) return NULL;
    while (ptr-msg <= len) {
        if (!isspace(*ptr)) return ptr;
        ptr++;
    }
    return NULL;
}

void MQTT_parser(uint8_t *msg, int size, struct MQTT_Instance *_instance) {

}

void MQTT_message_callback(struct mosquitto *mosq, void *_instance, const struct mosquitto_message *msg)
{
    //printf("[MQTT] Received message (%i bytes) on topic %s\n", msg->payloadlen, msg->topic);
    // Find the topic index of the message
    int i;
    for (i = 0; i < 2; i++)
        if (strcmp(msg->topic, MQTT_topics[i]) == 0) break;

    // Only parse and enqueue the message if we are listening for it on this topic
    if (i < 2 && (i == 1)) {
        MQTT_parser(msg->payload, msg->payloadlen, (struct MQTT_Instance*)_instance);
    }
}


/* ---------- FORWARDERS ----------*/
void MQTT_send_message(uint8_t *msg, int msglen, int topic)
{
    int ret;
    if (topic < 2) {
        //printf("[MQTT] Sending message (%i bytes) on topic %s\n", msglen, MQTT_topics[topic]);
        ret = mosquitto_publish(MQTT_mosq, NULL, MQTT_topics[topic], msglen, msg, MQTT_qos, false);
        if (ret) fprintf(stderr, "[MQTT] mosquitto_publish failed for %s : %s\n", MQTT_topics[topic], mosquitto_strerror(ret));
    }
}

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_disconnected
void forward_MQTT_Main_send_tryggi3d_bpsensor_disconnected(struct Main_Instance *_instance){
    uint8_t buffer[29];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 29-index, "{\"bpsensor_disconnected\":{");
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 29-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index, 1);
}

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_connected
void forward_MQTT_Main_send_tryggi3d_bpsensor_connected(struct Main_Instance *_instance){
    uint8_t buffer[26];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 26-index, "{\"bpsensor_connected\":{");
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 26-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index, 1);
}

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_error
void forward_MQTT_Main_send_tryggi3d_bpsensor_error(struct Main_Instance *_instance){
    uint8_t buffer[22];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 22-index, "{\"bpsensor_error\":{");
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 22-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index, 1);
}

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_gw_exit
void forward_MQTT_Main_send_tryggi3d_bpsensor_gw_exit(struct Main_Instance *_instance){
    uint8_t buffer[24];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 24-index, "{\"bpsensor_gw_exit\":{");
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 24-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index, 1);
}

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_measurement
void forward_MQTT_Main_send_tryggi3d_bpsensor_measurement(struct Main_Instance *_instance, int16_t PressureSystolic, int16_t PressureDiastolic, int16_t PressureMean, int16_t PulseRate, uint8_t IrregularPulse){
    uint8_t buffer[143];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 143-index, "{\"bpsensor_measurement\":{");
    if (result >= 0) { index += result; } else { return; }
    // Parameter PressureSystolic
    result = sprintf(&buffer[index], "%.*s", 143-index, "\"PressureSystolic\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%d", PressureSystolic);
    if (result >= 0) { index += result; } else { return; }
    // Parameter PressureDiastolic
    result = sprintf(&buffer[index], "%.*s", 143-index, ",\"PressureDiastolic\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%d", PressureDiastolic);
    if (result >= 0) { index += result; } else { return; }
    // Parameter PressureMean
    result = sprintf(&buffer[index], "%.*s", 143-index, ",\"PressureMean\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%d", PressureMean);
    if (result >= 0) { index += result; } else { return; }
    // Parameter PulseRate
    result = sprintf(&buffer[index], "%.*s", 143-index, ",\"PulseRate\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%d", PulseRate);
    if (result >= 0) { index += result; } else { return; }
    // Parameter IrregularPulse
    result = sprintf(&buffer[index], "%.*s", 143-index, ",\"IrregularPulse\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", IrregularPulse);
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 143-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index, 1);
}

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_gw_ready
void forward_MQTT_Main_send_tryggi3d_bpsensor_gw_ready(struct Main_Instance *_instance){
    uint8_t buffer[25];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 25-index, "{\"bpsensor_gw_ready\":{");
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 25-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index, 1);
}

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_batterylevel
void forward_MQTT_Main_send_tryggi3d_bpsensor_batterylevel(struct Main_Instance *_instance, int16_t percent){
    uint8_t buffer[46];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 46-index, "{\"bpsensor_batterylevel\":{");
    if (result >= 0) { index += result; } else { return; }
    // Parameter percent
    result = sprintf(&buffer[index], "%.*s", 46-index, "\"percent\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%d", percent);
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 46-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index, 1);
}

