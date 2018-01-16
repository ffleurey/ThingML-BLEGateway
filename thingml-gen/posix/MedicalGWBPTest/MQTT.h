#ifndef MQTT_PosixMQTT_Client_h
#define  MQTT_PosixMQTT_Client_h

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <mosquitto.h>

#include "Main.h"
#include "ExitHandler.h"
#include "HCISocketProxyImpl.h"
#include "BLEInitialiserImpl.h"
#include "BLEConnecterImpl.h"
#include "BLEScannerImpl.h"


struct MQTT_Instance {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
};

void MQTT_setup(struct MQTT_Instance *_instance);

void MQTT_start_receiver_thread();
void MQTT_loop_poll();

// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_disconnected
void forward_MQTT_Main_send_tryggi3d_bpsensor_disconnected(struct Main_Instance *_instance);
// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_connected
void forward_MQTT_Main_send_tryggi3d_bpsensor_connected(struct Main_Instance *_instance);
// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_error
void forward_MQTT_Main_send_tryggi3d_bpsensor_error(struct Main_Instance *_instance);
// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_gw_exit
void forward_MQTT_Main_send_tryggi3d_bpsensor_gw_exit(struct Main_Instance *_instance);
// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_measurement
void forward_MQTT_Main_send_tryggi3d_bpsensor_measurement(struct Main_Instance *_instance, int16_t PressureSystolic, int16_t PressureDiastolic, int16_t PressureMean, int16_t PulseRate, uint8_t IrregularPulse);
// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_gw_ready
void forward_MQTT_Main_send_tryggi3d_bpsensor_gw_ready(struct Main_Instance *_instance);
// Forwarding of messages MQTT::Main::tryggi3d::bpsensor_batterylevel
void forward_MQTT_Main_send_tryggi3d_bpsensor_batterylevel(struct Main_Instance *_instance, int16_t percent);


#endif
