/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing Main
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "Main.h"

/*****************************************************************************
 * Implementation for type : Main
 *****************************************************************************/


// BEGIN: Code from the c_global annotation Main

  float sfloat_to_float(uint8_t *bytes) {
    if (bytes[1] == 0x07 && bytes[0] == 0xFE) return INFINITY;
    else if (bytes[1] == 0x07 && bytes[0] == 0xFF) return NAN;
    else if (bytes[1] == 0x08 && bytes[0] == 0x00) return NAN;
    else if (bytes[1] == 0x08 && bytes[0] == 0x01) return NAN;
    else if (bytes[1] == 0x08 && bytes[0] == 0x02) return -INFINITY;
    else {
      int8_t exponent = ((int8_t)bytes[1]) >> 4;
      int16_t mantissa = ((int16_t)(((uint16_t)bytes[1]) << 12) >> 4) | ((uint16_t)bytes[0]);
      float f_exp = (float)exponent;
      float f_man = (float)mantissa;
      return pow(10,f_exp)*f_man;
    }
  }

// END: Code from the c_global annotation Main

// Declaration of prototypes:
//Prototypes: State Machine
void Main_States_OnExit(int state, struct Main_Instance *_instance);
//Prototypes: Message Sending
void Main_send_tryggi3d_bpsensor_connected(struct Main_Instance *_instance);
void Main_send_tryggi3d_bpsensor_disconnected(struct Main_Instance *_instance);
void Main_send_tryggi3d_bpsensor_error(struct Main_Instance *_instance);
void Main_send_tryggi3d_bpsensor_measurement(struct Main_Instance *_instance, int16_t PressureSystolic, int16_t PressureDiastolic, int16_t PressureMean, int16_t PulseRate, uint8_t IrregularPulse);
void Main_send_tryggi3d_bpsensor_gw_ready(struct Main_Instance *_instance);
void Main_send_tryggi3d_bpsensor_gw_exit(struct Main_Instance *_instance);
void Main_send_tryggi3d_bpsensor_batterylevel(struct Main_Instance *_instance, int16_t percent);
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code);
void Main_send_Initialiser_Start(struct Main_Instance *_instance);
void Main_send_Initialiser_Stop(struct Main_Instance *_instance);
void Main_send_Scanner_Start(struct Main_Instance *_instance);
void Main_send_Scanner_Stop(struct Main_Instance *_instance);
void Main_send_Connecter_Connect(struct Main_Instance *_instance);
void Main_send_Connecter_ConnectTo(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber);
void Main_send_Connecter_ConnectToU(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void Main_send_Connecter_Stop(struct Main_Instance *_instance);
void Main_send_Connecter_Encrypt(struct Main_Instance *_instance);
void Main_send_ATT_ATTFindInformationRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void Main_send_ATT_ATTFindInformationResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void Main_send_ATT_ATTFindInformationError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Main_send_ATT_ATTReadByTypeRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void Main_send_ATT_ATTReadByTypeResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void Main_send_ATT_ATTReadByTypeError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Main_send_ATT_ATTReadRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void Main_send_ATT_ATTReadResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void Main_send_ATT_ATTReadError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Main_send_ATT_ATTReadByGroupTypeRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void Main_send_ATT_ATTReadByGroupTypeResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void Main_send_ATT_ATTReadByGroupTypeError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Main_send_ATT_ATTWriteRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Main_send_ATT_ATTWriteResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle);
void Main_send_ATT_ATTWriteError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Main_send_ATT_ATTWriteCommand(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Main_send_ATT_ATTHandleValueNotification(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Main_send_ATT_ATTHandleValueIndication(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Main_send_ATT_ATTHandleValueConfirmation(struct Main_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
void f_Main_initialize_bt_addr(struct Main_Instance *_instance);
ble_uuid_t f_Main_ReadUUID(struct Main_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_Main_MakeUUID(struct Main_Instance *_instance, const char * Text);
void f_Main_PrintUUID(struct Main_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function initialize_bt_addr
void f_Main_initialize_bt_addr(struct Main_Instance *_instance) {
str2ba(_instance->Main_BPAddress_var, &_instance->Main_BPAddressBT_var);
}
// Definition of function ReadUUID
ble_uuid_t f_Main_ReadUUID(struct Main_Instance *_instance, uint16_t Length, uint8_t * Data) {
;ble_uuid_t Value = { 0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00/*-*/, 0x00, 0x80/*-*/, 0x00, 0x10/*-*/, 0x00, 0x00/*-*/, 0x00, 0x00, 0x00, 0x00 };
if(Length == 16) {
memcpy(&Value, Data, 16);

} else {
if(Length == 2 || Length == 4) {
memcpy(&(((uint8_t*)&Value)[12]), Data, Length);

} else {
fprintf(stdout, "[ERROR]: Trying to decode a UUID that was not 16, 32 or 128 bits long!\n");

}

}
return Value;
}
// Definition of function MakeUUID
ble_uuid_t f_Main_MakeUUID(struct Main_Instance *_instance, const char * Text) {
;ble_uuid_t Value = { 0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00/*-*/, 0x00, 0x80/*-*/, 0x00, 0x10/*-*/, 0x00, 0x00/*-*/, 0x00, 0x00, 0x00, 0x00 };

      uint8_t *val = (uint8_t*)&Value;
      const char *str = Text;
      size_t length = strlen(str);
      if (length == 36 && str[8] == '-' && str[13] == '-' && str[18] == '-' && str[23] == '-') {
        // 128-bit UUID
        if (sscanf(str, "%02hhx%02hhx%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx"
                      , &val[15], &val[14], &val[13], &val[12], &val[11], &val[10], &val[9], &val[8], &val[7], &val[6], &val[5], &val[4], &val[3], &val[2], &val[1], &val[0] ) == 16 ) {
            // Should be valid, and have stored the values in the Value-memory
        } else {
          printf("[ERROR]: String is not a valid UUID!\n");
        }

      } else if (length == 4 || length == 6 || length == 8 || length == 10) {
        // 16-bit or 32-bit UUID
        uint32_t id;
        char *end = NULL;
        id = strtol(str, &end, 16);

        if (id && end && *end == '\0') {
          // Should be valid
          *(uint32_t*)&val[12] = id;
        } else {
          printf("[ERROR]: String is not a valid UUID!\n");
        }
      } else {
        printf("[ERROR]: String is not a valid UUID!\n");
      }
    
return Value;
}
// Definition of function PrintUUID
void f_Main_PrintUUID(struct Main_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// Sessions functionss:


// On Entry Actions:
void Main_States_OnEntry(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STANDBY_STATE:{
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_State, _instance);
break;
}
case MAIN_STATES_STATE:{
_instance->Main_States_State = MAIN_STATES_INITIALISE_STATE;
f_Main_initialize_bt_addr(_instance);
Main_States_OnEntry(_instance->Main_States_State, _instance);
break;
}
case MAIN_STATES_STANDBY_SYNC_STATE:{
_instance->Main_States_Standby_Sync_State = MAIN_STATES_STANDBY_SYNC_READBATTERY_STATE;
fprintf(stdout, "[INFO]: Syncing with A&D UA-651BLE...\n");
Main_States_OnEntry(_instance->Main_States_Standby_Sync_State, _instance);
break;
}
case MAIN_STATES_STANDBY_CONNECT_STATE:{
fprintf(stdout, "Connecting to Blood Presure Sensor...\n");
Main_send_Connecter_ConnectToU(_instance, BLEADDRESSTYPE_PUBLIC, _instance->Main_BPAddressBT_var);
break;
}
case MAIN_STATES_DEINITIALISE_STATE:{
fprintf(stdout, "[INFO]: Stopping...\n");
Main_send_Scanner_Stop(_instance);
break;
}
case MAIN_STATES_STANDBY_DISCONNECTED_STATE:{
Main_send_tryggi3d_bpsensor_disconnected(_instance);
fprintf(stdout, "Disconnected from Blood Pressure Sensor.\n");
break;
}
case MAIN_STATES_STANDBY_SYNC_READBATTERY_STATE:{
fprintf(stdout, "[INFO]: Reading battery percentage...\n");
Main_send_ATT_ATTReadRequest(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_BatteryValueHandle_var);
break;
}
case MAIN_STATES_STANDBY_CONNECTED_STATE:{
fprintf(stdout, "Connected to Blood Pressure Sensor.\n");
break;
}
case MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE:{
fprintf(stdout, "[INFO]: Synchronizing the time...\n");
;ble_gatt_data_t AttributeValue;

            time_t utc = time(NULL);
            struct tm *ptm = gmtime(&utc);
          

            AttributeValue.length = 7;
            *((uint16_t*)&AttributeValue.bytes[0]) = ptm->tm_year+1900;
            *((uint8_t*)&AttributeValue.bytes[2]) = ptm->tm_mon+1;
            *((uint8_t*)&AttributeValue.bytes[3]) = ptm->tm_mday;
            *((uint8_t*)&AttributeValue.bytes[4]) = ptm->tm_hour;
            *((uint8_t*)&AttributeValue.bytes[5]) = ptm->tm_min;
            *((uint8_t*)&AttributeValue.bytes[6]) = ptm->tm_sec;
          
Main_send_ATT_ATTWriteRequest(_instance, _instance->Main_ConnectedHandle_var, 0x0017, AttributeValue);
break;
}
case MAIN_STATES_STANDBY_SYNC_GETVALUES_STATE:{
fprintf(stdout, "[INFO]: Requesting indications of Blood Pressure Measurement...\n");
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 2;
AttributeValue.bytes[0] = 0x02;
AttributeValue.bytes[1] = 0x00;
Main_send_ATT_ATTWriteRequest(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_BloodPressureConfigurationHandle_var, AttributeValue);
break;
}
case MAIN_STATES_FAILED_STATE:{
Main_send_tryggi3d_bpsensor_error(_instance);
Main_send_tryggi3d_bpsensor_gw_exit(_instance);
fprintf(stdout, "[ERROR]: Failed, quitting... !!!\n");
Main_send_Signals_Quit(_instance, 1);
break;
}
case MAIN_STATES_QUIT_STATE:{
fprintf(stdout, "[INFO]: Finished, quitting...\n");
Main_send_tryggi3d_bpsensor_gw_exit(_instance);
Main_send_Signals_Quit(_instance, 0);
break;
}
case MAIN_STATES_INITIALISE_STATE:{
Main_send_Initialiser_Start(_instance);
break;
}
case MAIN_STATES_STANDBY_SCAN_STATE:{
Main_send_Scanner_Start(_instance);
Main_send_tryggi3d_bpsensor_gw_ready(_instance);
break;
}
case MAIN_STATES_STANDBY_ENCRYPTED_STATE:{
fprintf(stdout, "Encrypted Connection to Blood Pressure Sensor.\n");
break;
}
default: break;
}
}

// On Exit Actions:
void Main_States_OnExit(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STANDBY_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_State, _instance);
break;}
case MAIN_STATES_STATE:{
Main_States_OnExit(_instance->Main_States_State, _instance);
break;}
case MAIN_STATES_STANDBY_SYNC_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_Sync_State, _instance);
break;}
case MAIN_STATES_STANDBY_CONNECT_STATE:{
break;}
case MAIN_STATES_DEINITIALISE_STATE:{
break;}
case MAIN_STATES_STANDBY_DISCONNECTED_STATE:{
break;}
case MAIN_STATES_STANDBY_SYNC_READBATTERY_STATE:{
break;}
case MAIN_STATES_STANDBY_CONNECTED_STATE:{
break;}
case MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE:{
break;}
case MAIN_STATES_STANDBY_SYNC_GETVALUES_STATE:{
break;}
case MAIN_STATES_FAILED_STATE:{
break;}
case MAIN_STATES_QUIT_STATE:{
break;}
case MAIN_STATES_INITIALISE_STATE:{
break;}
case MAIN_STATES_STANDBY_SCAN_STATE:{
break;}
case MAIN_STATES_STANDBY_ENCRYPTED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Main_handle_Signals_Interrupt(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_DEINITIALISE_STATE;
Main_States_OnEntry(MAIN_STATES_DEINITIALISE_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_ATT_ATTReadResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
//Region Sync
uint8_t Main_States_Standby_Sync_State_event_consumed = 0;
if (_instance->Main_States_Standby_Sync_State == MAIN_STATES_STANDBY_SYNC_READBATTERY_STATE) {
if (Main_States_Standby_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->Main_ConnectedHandle_var)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNC_READBATTERY_STATE, _instance);
_instance->Main_States_Standby_Sync_State = MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE;
;uint8_t Percent = AttributeValue.bytes[0];
printf("[INFO]: Got battery percentage - %u%%\n", Percent);
Main_send_tryggi3d_bpsensor_batterylevel(_instance, Percent);
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE, _instance);
Main_States_Standby_Sync_State_event_consumed = 1;
}
}
//End Region Sync
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_Sync_State_event_consumed ;
//End dsregion Sync
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_ATT_ATTHandleValueIndication(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
//Region Sync
uint8_t Main_States_Standby_Sync_State_event_consumed = 0;
if (_instance->Main_States_Standby_Sync_State == MAIN_STATES_STANDBY_SYNC_GETVALUES_STATE) {
if (Main_States_Standby_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->Main_ConnectedHandle_var && AttributeHandle == _instance->Main_BloodPressureValueHandle_var)) {

            uint8_t length = AttributeValue.length;
            uint8_t *data  = AttributeValue.bytes;
            uint8_t index = 7;
          
;uint8_t UnitsKPA = data[0] & 0x01;
;uint8_t HasTimestamp = (data[0] & 0x02) >> 1;
;uint8_t HasPulseRate = (data[0] & 0x04) >> 2;
;uint8_t HasUserID = (data[0] & 0x08) >> 3;
;uint8_t HasMeasurementStatus = (data[0] & 0x10) >> 4;
;float Systolic = sfloat_to_float(&data[1]);
;float Diastolic = sfloat_to_float(&data[3]);
;float MeanArterial = sfloat_to_float(&data[5]);
;uint16_t Year = 0;
;uint8_t Month = 0;
;uint8_t Day = 0;
;uint8_t Hour = 0;
;uint8_t Minute = 0;
;uint8_t Second = 0;
if(HasTimestamp) {
Year = *(uint16_t*)&data[index+0];
Month = data[index+2];
Day = data[index+3];
Hour = data[index+4];
Minute = data[index+5];
Second = data[index+6];
index = index+7;

}
;float Pulse = 0;
if(HasPulseRate) {
Pulse = sfloat_to_float(&data[index]);
index = index+2;

}
;uint8_t UserID = 0;
if(HasUserID) {
UserID = data[index];
index = index+1;

}
;uint8_t BodyMovement = 0;
;uint8_t CuffFit = 0;
;uint8_t IrregularPulse = 0;
;uint8_t PulseRate = 0;
;uint8_t MeasurementPosition = 0;
if(HasMeasurementStatus) {
BodyMovement = data[index] & 0x01;
CuffFit = (data[index] & 0x02) >> 1;
IrregularPulse = (data[index] & 0x04) >> 2;
PulseRate = (data[index] & 0x18) >> 3;
MeasurementPosition = (data[index] & 0x20) >> 5;

}
fprintf(stdout, "[INFO]: Got Blood Pressure measurement - ");
printf("%.0f/%.0f (%.0f) ",Systolic, Diastolic, MeanArterial);
if(UnitsKPA) {
fprintf(stdout, "kPa ");

} else {
fprintf(stdout, "mmHg ");

}
if(HasPulseRate) {
printf("%.0fBPM ",Pulse);

}
if(HasTimestamp) {
printf("%u.%u.%u %u:%u:%u ",Day, Month, Year, Hour, Minute, Second);

}
if(HasMeasurementStatus) {
fprintf(stdout, "- ");
if(IrregularPulse) {
fprintf(stdout, "Irregular pulse detected ");

} else {
fprintf(stdout, "Normal pulse detected ");

}

}
fprintf(stdout, "\n");
Main_send_ATT_ATTHandleValueConfirmation(_instance, ConnectionHandle);
if(HasTimestamp && !isnan(Systolic)) {
;time_t ObservationTime = 0;

              struct tm timebuf;
              timebuf.tm_year = Year-1900;
              timebuf.tm_mon = Month-1;
              timebuf.tm_mday = Day;
              timebuf.tm_hour = Hour;
              timebuf.tm_min = Minute;
              timebuf.tm_sec = Second;
            
ObservationTime = timegm(&timebuf);
;int16_t HealthPressureDiastolic = Diastolic;
;int16_t HealthPressureMean = MeanArterial;
;int16_t HealthPressureSystolic = Systolic;
;int16_t HealthPulseRate = Pulse;
Main_send_tryggi3d_bpsensor_measurement(_instance, HealthPressureSystolic, HealthPressureDiastolic, HealthPressureMean, HealthPulseRate, IrregularPulse);

}
Main_States_Standby_Sync_State_event_consumed = 1;
}
}
//End Region Sync
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_Sync_State_event_consumed ;
//End dsregion Sync
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_ATT_ATTWriteResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
//Region Sync
uint8_t Main_States_Standby_Sync_State_event_consumed = 0;
if (_instance->Main_States_Standby_Sync_State == MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE) {
if (Main_States_Standby_Sync_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE, _instance);
_instance->Main_States_Standby_Sync_State = MAIN_STATES_STANDBY_SYNC_GETVALUES_STATE;
fprintf(stdout, "[INFO]: Time synchronization successfull!\n");
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNC_GETVALUES_STATE, _instance);
Main_States_Standby_Sync_State_event_consumed = 1;
}
}
//End Region Sync
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_Sync_State_event_consumed ;
//End dsregion Sync
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_ATT_ATTWriteError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
//Region Sync
uint8_t Main_States_Standby_Sync_State_event_consumed = 0;
if (_instance->Main_States_Standby_Sync_State == MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE) {
if (Main_States_Standby_Sync_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Time synchronization failed. Error code: ");
printf("%2.2X", Error);
fprintf(stdout, "!!\n");
Main_send_Connecter_Stop(_instance);
Main_States_Standby_Sync_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Standby_Sync_State == MAIN_STATES_STANDBY_SYNC_GETVALUES_STATE) {
if (Main_States_Standby_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->Main_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not set indications of Blood Pressure Measurement!\n");
Main_send_Connecter_Stop(_instance);
Main_States_Standby_Sync_State_event_consumed = 1;
}
}
//End Region Sync
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_Sync_State_event_consumed ;
//End dsregion Sync
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_ATT_ATTReadError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
//Region Sync
uint8_t Main_States_Standby_Sync_State_event_consumed = 0;
if (_instance->Main_States_Standby_Sync_State == MAIN_STATES_STANDBY_SYNC_READBATTERY_STATE) {
if (Main_States_Standby_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->Main_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not read battery percentage!\n");
Main_send_Connecter_Stop(_instance);
Main_States_Standby_Sync_State_event_consumed = 1;
}
}
//End Region Sync
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_Sync_State_event_consumed ;
//End dsregion Sync
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_DeviceInitialised(struct Main_Instance *_instance, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_STANDBY_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_Failure(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Scanner_Stopped(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_send_Initialiser_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Scanner_ConnectableAdvertisement(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SCAN_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (AddressType == BLEADDRESSTYPE_PUBLIC && bacmp(&Address, &_instance->Main_BPAddressBT_var) == 0)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_CONNECT_STATE;
Main_send_Scanner_Stop(_instance);
printf("Blood Pressure Sensor wants to connect (%2.2X:%2.2X:%2.2X:%2.2X:%2.2X:%2.2X)\n", Address.b[5],Address.b[4],Address.b[3],Address.b[2],Address.b[1],Address.b[0]);
Main_States_OnEntry(MAIN_STATES_STANDBY_CONNECT_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Scanner_Failure(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Encrypted(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_CONNECTED_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_CONNECTED_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_ENCRYPTED_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_ENCRYPTED_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Stopped(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_CONNECTED_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_CONNECTED_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_DISCONNECTED_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_DISCONNECTED_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
//Region Sync
uint8_t Main_States_Standby_Sync_State_event_consumed = 0;
//End Region Sync
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_Sync_State_event_consumed ;
//End dsregion Sync
if (Main_States_Standby_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_DISCONNECTED_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_DISCONNECTED_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Failure(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Connected(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_CONNECT_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_CONNECT_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_CONNECTED_STATE;
_instance->Main_ConnectedHandle_var = Handle;
Main_send_tryggi3d_bpsensor_connected(_instance);
fprintf(stdout, "Blood Pressure Sensor Connected\n");
Main_States_OnEntry(MAIN_STATES_STANDBY_CONNECTED_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
int Main_handle_empty_event(struct Main_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region States
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_ENCRYPTED_STATE) {
if (1) {
Main_States_OnExit(MAIN_STATES_STANDBY_ENCRYPTED_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNC_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
return 1;
}
}
else if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_DISCONNECTED_STATE) {
if (1) {
Main_States_OnExit(MAIN_STATES_STANDBY_DISCONNECTED_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
return 1;
}
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
void (*external_Main_send_tryggi3d_bpsensor_connected_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_tryggi3d_bpsensor_connected_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_tryggi3d_bpsensor_connected_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_tryggi3d_bpsensor_connected_listener = _listener;
}
void register_Main_send_tryggi3d_bpsensor_connected_listener(void (*_listener)(struct Main_Instance *)){
Main_send_tryggi3d_bpsensor_connected_listener = _listener;
}
void Main_send_tryggi3d_bpsensor_connected(struct Main_Instance *_instance){
if (Main_send_tryggi3d_bpsensor_connected_listener != 0x0) Main_send_tryggi3d_bpsensor_connected_listener(_instance);
if (external_Main_send_tryggi3d_bpsensor_connected_listener != 0x0) external_Main_send_tryggi3d_bpsensor_connected_listener(_instance);
;
}
void (*external_Main_send_tryggi3d_bpsensor_disconnected_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_tryggi3d_bpsensor_disconnected_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_tryggi3d_bpsensor_disconnected_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_tryggi3d_bpsensor_disconnected_listener = _listener;
}
void register_Main_send_tryggi3d_bpsensor_disconnected_listener(void (*_listener)(struct Main_Instance *)){
Main_send_tryggi3d_bpsensor_disconnected_listener = _listener;
}
void Main_send_tryggi3d_bpsensor_disconnected(struct Main_Instance *_instance){
if (Main_send_tryggi3d_bpsensor_disconnected_listener != 0x0) Main_send_tryggi3d_bpsensor_disconnected_listener(_instance);
if (external_Main_send_tryggi3d_bpsensor_disconnected_listener != 0x0) external_Main_send_tryggi3d_bpsensor_disconnected_listener(_instance);
;
}
void (*external_Main_send_tryggi3d_bpsensor_error_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_tryggi3d_bpsensor_error_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_tryggi3d_bpsensor_error_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_tryggi3d_bpsensor_error_listener = _listener;
}
void register_Main_send_tryggi3d_bpsensor_error_listener(void (*_listener)(struct Main_Instance *)){
Main_send_tryggi3d_bpsensor_error_listener = _listener;
}
void Main_send_tryggi3d_bpsensor_error(struct Main_Instance *_instance){
if (Main_send_tryggi3d_bpsensor_error_listener != 0x0) Main_send_tryggi3d_bpsensor_error_listener(_instance);
if (external_Main_send_tryggi3d_bpsensor_error_listener != 0x0) external_Main_send_tryggi3d_bpsensor_error_listener(_instance);
;
}
void (*external_Main_send_tryggi3d_bpsensor_measurement_listener)(struct Main_Instance *, int16_t, int16_t, int16_t, int16_t, uint8_t)= 0x0;
void (*Main_send_tryggi3d_bpsensor_measurement_listener)(struct Main_Instance *, int16_t, int16_t, int16_t, int16_t, uint8_t)= 0x0;
void register_external_Main_send_tryggi3d_bpsensor_measurement_listener(void (*_listener)(struct Main_Instance *, int16_t, int16_t, int16_t, int16_t, uint8_t)){
external_Main_send_tryggi3d_bpsensor_measurement_listener = _listener;
}
void register_Main_send_tryggi3d_bpsensor_measurement_listener(void (*_listener)(struct Main_Instance *, int16_t, int16_t, int16_t, int16_t, uint8_t)){
Main_send_tryggi3d_bpsensor_measurement_listener = _listener;
}
void Main_send_tryggi3d_bpsensor_measurement(struct Main_Instance *_instance, int16_t PressureSystolic, int16_t PressureDiastolic, int16_t PressureMean, int16_t PulseRate, uint8_t IrregularPulse){
if (Main_send_tryggi3d_bpsensor_measurement_listener != 0x0) Main_send_tryggi3d_bpsensor_measurement_listener(_instance, PressureSystolic, PressureDiastolic, PressureMean, PulseRate, IrregularPulse);
if (external_Main_send_tryggi3d_bpsensor_measurement_listener != 0x0) external_Main_send_tryggi3d_bpsensor_measurement_listener(_instance, PressureSystolic, PressureDiastolic, PressureMean, PulseRate, IrregularPulse);
;
}
void (*external_Main_send_tryggi3d_bpsensor_gw_ready_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_tryggi3d_bpsensor_gw_ready_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_tryggi3d_bpsensor_gw_ready_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_tryggi3d_bpsensor_gw_ready_listener = _listener;
}
void register_Main_send_tryggi3d_bpsensor_gw_ready_listener(void (*_listener)(struct Main_Instance *)){
Main_send_tryggi3d_bpsensor_gw_ready_listener = _listener;
}
void Main_send_tryggi3d_bpsensor_gw_ready(struct Main_Instance *_instance){
if (Main_send_tryggi3d_bpsensor_gw_ready_listener != 0x0) Main_send_tryggi3d_bpsensor_gw_ready_listener(_instance);
if (external_Main_send_tryggi3d_bpsensor_gw_ready_listener != 0x0) external_Main_send_tryggi3d_bpsensor_gw_ready_listener(_instance);
;
}
void (*external_Main_send_tryggi3d_bpsensor_gw_exit_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_tryggi3d_bpsensor_gw_exit_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_tryggi3d_bpsensor_gw_exit_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_tryggi3d_bpsensor_gw_exit_listener = _listener;
}
void register_Main_send_tryggi3d_bpsensor_gw_exit_listener(void (*_listener)(struct Main_Instance *)){
Main_send_tryggi3d_bpsensor_gw_exit_listener = _listener;
}
void Main_send_tryggi3d_bpsensor_gw_exit(struct Main_Instance *_instance){
if (Main_send_tryggi3d_bpsensor_gw_exit_listener != 0x0) Main_send_tryggi3d_bpsensor_gw_exit_listener(_instance);
if (external_Main_send_tryggi3d_bpsensor_gw_exit_listener != 0x0) external_Main_send_tryggi3d_bpsensor_gw_exit_listener(_instance);
;
}
void (*external_Main_send_tryggi3d_bpsensor_batterylevel_listener)(struct Main_Instance *, int16_t)= 0x0;
void (*Main_send_tryggi3d_bpsensor_batterylevel_listener)(struct Main_Instance *, int16_t)= 0x0;
void register_external_Main_send_tryggi3d_bpsensor_batterylevel_listener(void (*_listener)(struct Main_Instance *, int16_t)){
external_Main_send_tryggi3d_bpsensor_batterylevel_listener = _listener;
}
void register_Main_send_tryggi3d_bpsensor_batterylevel_listener(void (*_listener)(struct Main_Instance *, int16_t)){
Main_send_tryggi3d_bpsensor_batterylevel_listener = _listener;
}
void Main_send_tryggi3d_bpsensor_batterylevel(struct Main_Instance *_instance, int16_t percent){
if (Main_send_tryggi3d_bpsensor_batterylevel_listener != 0x0) Main_send_tryggi3d_bpsensor_batterylevel_listener(_instance, percent);
if (external_Main_send_tryggi3d_bpsensor_batterylevel_listener != 0x0) external_Main_send_tryggi3d_bpsensor_batterylevel_listener(_instance, percent);
;
}
void (*external_Main_send_Signals_Quit_listener)(struct Main_Instance *, int16_t)= 0x0;
void (*Main_send_Signals_Quit_listener)(struct Main_Instance *, int16_t)= 0x0;
void register_external_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t)){
external_Main_send_Signals_Quit_listener = _listener;
}
void register_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t)){
Main_send_Signals_Quit_listener = _listener;
}
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code){
if (Main_send_Signals_Quit_listener != 0x0) Main_send_Signals_Quit_listener(_instance, code);
if (external_Main_send_Signals_Quit_listener != 0x0) external_Main_send_Signals_Quit_listener(_instance, code);
;
}
void (*external_Main_send_Initialiser_Start_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Initialiser_Start_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Initialiser_Start_listener = _listener;
}
void register_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Initialiser_Start_listener = _listener;
}
void Main_send_Initialiser_Start(struct Main_Instance *_instance){
if (Main_send_Initialiser_Start_listener != 0x0) Main_send_Initialiser_Start_listener(_instance);
if (external_Main_send_Initialiser_Start_listener != 0x0) external_Main_send_Initialiser_Start_listener(_instance);
;
}
void (*external_Main_send_Initialiser_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Initialiser_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Initialiser_Stop_listener = _listener;
}
void register_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Initialiser_Stop_listener = _listener;
}
void Main_send_Initialiser_Stop(struct Main_Instance *_instance){
if (Main_send_Initialiser_Stop_listener != 0x0) Main_send_Initialiser_Stop_listener(_instance);
if (external_Main_send_Initialiser_Stop_listener != 0x0) external_Main_send_Initialiser_Stop_listener(_instance);
;
}
void (*external_Main_send_Scanner_Start_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Scanner_Start_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Scanner_Start_listener = _listener;
}
void register_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Scanner_Start_listener = _listener;
}
void Main_send_Scanner_Start(struct Main_Instance *_instance){
if (Main_send_Scanner_Start_listener != 0x0) Main_send_Scanner_Start_listener(_instance);
if (external_Main_send_Scanner_Start_listener != 0x0) external_Main_send_Scanner_Start_listener(_instance);
;
}
void (*external_Main_send_Scanner_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Scanner_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Scanner_Stop_listener = _listener;
}
void register_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Scanner_Stop_listener = _listener;
}
void Main_send_Scanner_Stop(struct Main_Instance *_instance){
if (Main_send_Scanner_Stop_listener != 0x0) Main_send_Scanner_Stop_listener(_instance);
if (external_Main_send_Scanner_Stop_listener != 0x0) external_Main_send_Scanner_Stop_listener(_instance);
;
}
void (*external_Main_send_Connecter_Connect_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Connecter_Connect_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Connecter_Connect_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Connecter_Connect_listener = _listener;
}
void register_Main_send_Connecter_Connect_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Connecter_Connect_listener = _listener;
}
void Main_send_Connecter_Connect(struct Main_Instance *_instance){
if (Main_send_Connecter_Connect_listener != 0x0) Main_send_Connecter_Connect_listener(_instance);
if (external_Main_send_Connecter_Connect_listener != 0x0) external_Main_send_Connecter_Connect_listener(_instance);
;
}
void (*external_Main_send_Connecter_ConnectTo_listener)(struct Main_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void (*Main_send_Connecter_ConnectTo_listener)(struct Main_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
external_Main_send_Connecter_ConnectTo_listener = _listener;
}
void register_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
Main_send_Connecter_ConnectTo_listener = _listener;
}
void Main_send_Connecter_ConnectTo(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber){
if (Main_send_Connecter_ConnectTo_listener != 0x0) Main_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
if (external_Main_send_Connecter_ConnectTo_listener != 0x0) external_Main_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
;
}
void (*external_Main_send_Connecter_ConnectToU_listener)(struct Main_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*Main_send_Connecter_ConnectToU_listener)(struct Main_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_Main_send_Connecter_ConnectToU_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t)){
external_Main_send_Connecter_ConnectToU_listener = _listener;
}
void register_Main_send_Connecter_ConnectToU_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t)){
Main_send_Connecter_ConnectToU_listener = _listener;
}
void Main_send_Connecter_ConnectToU(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (Main_send_Connecter_ConnectToU_listener != 0x0) Main_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
if (external_Main_send_Connecter_ConnectToU_listener != 0x0) external_Main_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
;
}
void (*external_Main_send_Connecter_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Connecter_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Connecter_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Connecter_Stop_listener = _listener;
}
void register_Main_send_Connecter_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Connecter_Stop_listener = _listener;
}
void Main_send_Connecter_Stop(struct Main_Instance *_instance){
if (Main_send_Connecter_Stop_listener != 0x0) Main_send_Connecter_Stop_listener(_instance);
if (external_Main_send_Connecter_Stop_listener != 0x0) external_Main_send_Connecter_Stop_listener(_instance);
;
}
void (*external_Main_send_Connecter_Encrypt_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Connecter_Encrypt_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Connecter_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Connecter_Encrypt_listener = _listener;
}
void register_Main_send_Connecter_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Connecter_Encrypt_listener = _listener;
}
void Main_send_Connecter_Encrypt(struct Main_Instance *_instance){
if (Main_send_Connecter_Encrypt_listener != 0x0) Main_send_Connecter_Encrypt_listener(_instance);
if (external_Main_send_Connecter_Encrypt_listener != 0x0) external_Main_send_Connecter_Encrypt_listener(_instance);
;
}
void (*external_Main_send_ATT_ATTFindInformationRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*Main_send_ATT_ATTFindInformationRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_Main_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t)){
external_Main_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_Main_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t)){
Main_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void Main_send_ATT_ATTFindInformationRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (Main_send_ATT_ATTFindInformationRequest_listener != 0x0) Main_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_Main_send_ATT_ATTFindInformationRequest_listener != 0x0) external_Main_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_Main_send_ATT_ATTFindInformationResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTFindInformationResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_Main_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
Main_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void Main_send_ATT_ATTFindInformationResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (Main_send_ATT_ATTFindInformationResponse_listener != 0x0) Main_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_Main_send_ATT_ATTFindInformationResponse_listener != 0x0) external_Main_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_Main_send_ATT_ATTFindInformationError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Main_send_ATT_ATTFindInformationError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
external_Main_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_Main_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
Main_send_ATT_ATTFindInformationError_listener = _listener;
}
void Main_send_ATT_ATTFindInformationError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Main_send_ATT_ATTFindInformationError_listener != 0x0) Main_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Main_send_ATT_ATTFindInformationError_listener != 0x0) external_Main_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Main_send_ATT_ATTReadByTypeRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*Main_send_ATT_ATTReadByTypeRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_Main_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_Main_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_Main_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
Main_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void Main_send_ATT_ATTReadByTypeRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (Main_send_ATT_ATTReadByTypeRequest_listener != 0x0) Main_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_Main_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_Main_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_Main_send_ATT_ATTReadByTypeResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTReadByTypeResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_Main_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
Main_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void Main_send_ATT_ATTReadByTypeResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (Main_send_ATT_ATTReadByTypeResponse_listener != 0x0) Main_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_Main_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_Main_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_Main_send_ATT_ATTReadByTypeError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Main_send_ATT_ATTReadByTypeError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
external_Main_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_Main_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
Main_send_ATT_ATTReadByTypeError_listener = _listener;
}
void Main_send_ATT_ATTReadByTypeError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Main_send_ATT_ATTReadByTypeError_listener != 0x0) Main_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Main_send_ATT_ATTReadByTypeError_listener != 0x0) external_Main_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Main_send_ATT_ATTReadRequest_listener)(struct Main_Instance *, uint16_t, uint16_t)= 0x0;
void (*Main_send_ATT_ATTReadRequest_listener)(struct Main_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_Main_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t)){
external_Main_send_ATT_ATTReadRequest_listener = _listener;
}
void register_Main_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t)){
Main_send_ATT_ATTReadRequest_listener = _listener;
}
void Main_send_ATT_ATTReadRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (Main_send_ATT_ATTReadRequest_listener != 0x0) Main_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_Main_send_ATT_ATTReadRequest_listener != 0x0) external_Main_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_Main_send_ATT_ATTReadResponse_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTReadResponse_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTReadResponse_listener = _listener;
}
void register_Main_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t)){
Main_send_ATT_ATTReadResponse_listener = _listener;
}
void Main_send_ATT_ATTReadResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (Main_send_ATT_ATTReadResponse_listener != 0x0) Main_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_Main_send_ATT_ATTReadResponse_listener != 0x0) external_Main_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_Main_send_ATT_ATTReadError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Main_send_ATT_ATTReadError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_ATT_ATTReadError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
external_Main_send_ATT_ATTReadError_listener = _listener;
}
void register_Main_send_ATT_ATTReadError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
Main_send_ATT_ATTReadError_listener = _listener;
}
void Main_send_ATT_ATTReadError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Main_send_ATT_ATTReadError_listener != 0x0) Main_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Main_send_ATT_ATTReadError_listener != 0x0) external_Main_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Main_send_ATT_ATTReadByGroupTypeRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*Main_send_ATT_ATTReadByGroupTypeRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_Main_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_Main_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_Main_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
Main_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void Main_send_ATT_ATTReadByGroupTypeRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (Main_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) Main_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_Main_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_Main_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_Main_send_ATT_ATTReadByGroupTypeResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTReadByGroupTypeResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_Main_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
Main_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void Main_send_ATT_ATTReadByGroupTypeResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (Main_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) Main_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_Main_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_Main_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_Main_send_ATT_ATTReadByGroupTypeError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Main_send_ATT_ATTReadByGroupTypeError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
external_Main_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_Main_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
Main_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void Main_send_ATT_ATTReadByGroupTypeError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Main_send_ATT_ATTReadByGroupTypeError_listener != 0x0) Main_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Main_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_Main_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Main_send_ATT_ATTWriteRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTWriteRequest_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_Main_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Main_send_ATT_ATTWriteRequest_listener = _listener;
}
void Main_send_ATT_ATTWriteRequest(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Main_send_ATT_ATTWriteRequest_listener != 0x0) Main_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Main_send_ATT_ATTWriteRequest_listener != 0x0) external_Main_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Main_send_ATT_ATTWriteResponse_listener)(struct Main_Instance *, uint16_t)= 0x0;
void (*Main_send_ATT_ATTWriteResponse_listener)(struct Main_Instance *, uint16_t)= 0x0;
void register_external_Main_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t)){
external_Main_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_Main_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t)){
Main_send_ATT_ATTWriteResponse_listener = _listener;
}
void Main_send_ATT_ATTWriteResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle){
if (Main_send_ATT_ATTWriteResponse_listener != 0x0) Main_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_Main_send_ATT_ATTWriteResponse_listener != 0x0) external_Main_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_Main_send_ATT_ATTWriteError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Main_send_ATT_ATTWriteError_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_ATT_ATTWriteError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
external_Main_send_ATT_ATTWriteError_listener = _listener;
}
void register_Main_send_ATT_ATTWriteError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t)){
Main_send_ATT_ATTWriteError_listener = _listener;
}
void Main_send_ATT_ATTWriteError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Main_send_ATT_ATTWriteError_listener != 0x0) Main_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Main_send_ATT_ATTWriteError_listener != 0x0) external_Main_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Main_send_ATT_ATTWriteCommand_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTWriteCommand_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_Main_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Main_send_ATT_ATTWriteCommand_listener = _listener;
}
void Main_send_ATT_ATTWriteCommand(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Main_send_ATT_ATTWriteCommand_listener != 0x0) Main_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Main_send_ATT_ATTWriteCommand_listener != 0x0) external_Main_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Main_send_ATT_ATTHandleValueNotification_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTHandleValueNotification_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_Main_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Main_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void Main_send_ATT_ATTHandleValueNotification(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Main_send_ATT_ATTHandleValueNotification_listener != 0x0) Main_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Main_send_ATT_ATTHandleValueNotification_listener != 0x0) external_Main_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Main_send_ATT_ATTHandleValueIndication_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Main_send_ATT_ATTHandleValueIndication_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Main_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Main_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_Main_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Main_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void Main_send_ATT_ATTHandleValueIndication(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Main_send_ATT_ATTHandleValueIndication_listener != 0x0) Main_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Main_send_ATT_ATTHandleValueIndication_listener != 0x0) external_Main_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Main_send_ATT_ATTHandleValueConfirmation_listener)(struct Main_Instance *, uint16_t)= 0x0;
void (*Main_send_ATT_ATTHandleValueConfirmation_listener)(struct Main_Instance *, uint16_t)= 0x0;
void register_external_Main_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Main_Instance *, uint16_t)){
external_Main_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_Main_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Main_Instance *, uint16_t)){
Main_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void Main_send_ATT_ATTHandleValueConfirmation(struct Main_Instance *_instance, uint16_t ConnectionHandle){
if (Main_send_ATT_ATTHandleValueConfirmation_listener != 0x0) Main_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_Main_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_Main_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



