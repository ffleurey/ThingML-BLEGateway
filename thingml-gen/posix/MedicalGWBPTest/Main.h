/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing Main
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef Main_H_
#define Main_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"

/*****************************************************************************
 * Headers for type : Main
 *****************************************************************************/


// BEGIN: Code from the c_header annotation Main

  #include <time.h>
  #include <math.h>
  #include <bluetooth/bluetooth.h>

// END: Code from the c_header annotation Main


// BEGIN: Code from the c_header annotation for type GATTData
#ifndef BLE_GATT_DATA_T_H
#define BLE_GATT_DATA_T_H
typedef struct { uint8_t length; uint8_t bytes[23]; } ble_gatt_data_t;
#endif
// END: Code from the c_header annotation for type GATTData


// BEGIN: Code from the c_header annotation for type BLERandomPart
#ifndef BLE_RANDOM_PART_T_H
#define BLE_RANDOM_PART_T_H
typedef struct { uint8_t bytes[8]; } ble_random_part_t;
#endif
// END: Code from the c_header annotation for type BLERandomPart


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


// BEGIN: Code from the c_header annotation for type UUID
#ifndef BLE_UUID_T_H
#define BLE_UUID_T_H
typedef struct { uint8_t bytes[16]; } ble_uuid_t;
#endif
// END: Code from the c_header annotation for type UUID


// BEGIN: Code from the c_header annotation for type BLERandomNumber
#ifndef BLE_RANDOM_NUMBER_T_H
#define BLE_RANDOM_NUMBER_T_H
typedef struct { uint8_t bytes[16]; } ble_random_number_t;
#endif
// END: Code from the c_header annotation for type BLERandomNumber

// Definition of the instance struct:
struct Main_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_tryggi3d;
uint16_t id_Signals;
uint16_t id_Initialiser;
uint16_t id_Scanner;
uint16_t id_Connecter;
uint16_t id_ATT;
// Variables for the current instance state
int Main_States_State;
int Main_States_Standby_State;
int Main_States_Standby_Sync_State;
// Variables for the properties of the instance
uint16_t Main_ConnectedHandle_var;
uint16_t Main_BloodPressureValueHandle_var;
const char * Main_BPAddress_var;
uint16_t Main_BloodPressureConfigurationHandle_var;
uint16_t Main_BatteryValueHandle_var;
bdaddr_t Main_BPAddressBT_var;

};
// Declaration of prototypes outgoing messages :
void Main_States_OnEntry(int state, struct Main_Instance *_instance);
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance);
void Main_handle_Initialiser_DeviceInitialised(struct Main_Instance *_instance, bdaddr_t Address);
void Main_handle_Initialiser_Failure(struct Main_Instance *_instance);
void Main_handle_Connecter_Stopped(struct Main_Instance *_instance);
void Main_handle_Connecter_Encrypted(struct Main_Instance *_instance);
void Main_handle_Connecter_Connected(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void Main_handle_Connecter_Failure(struct Main_Instance *_instance);
void Main_handle_ATT_ATTReadResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void Main_handle_ATT_ATTReadError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Main_handle_ATT_ATTWriteResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle);
void Main_handle_ATT_ATTHandleValueIndication(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Main_handle_ATT_ATTWriteError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Main_handle_Signals_Interrupt(struct Main_Instance *_instance);
void Main_handle_Scanner_Stopped(struct Main_Instance *_instance);
void Main_handle_Scanner_ConnectableAdvertisement(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void Main_handle_Scanner_Failure(struct Main_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_Main_send_tryggi3d_bpsensor_connected_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_tryggi3d_bpsensor_connected_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_tryggi3d_bpsensor_disconnected_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_tryggi3d_bpsensor_disconnected_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_tryggi3d_bpsensor_error_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_tryggi3d_bpsensor_error_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_tryggi3d_bpsensor_measurement_listener(void (*_listener)(struct Main_Instance *, int16_t, int16_t, int16_t, int16_t, uint8_t));
void register_external_Main_send_tryggi3d_bpsensor_measurement_listener(void (*_listener)(struct Main_Instance *, int16_t, int16_t, int16_t, int16_t, uint8_t));
void register_Main_send_tryggi3d_bpsensor_gw_ready_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_tryggi3d_bpsensor_gw_ready_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_tryggi3d_bpsensor_gw_exit_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_tryggi3d_bpsensor_gw_exit_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_tryggi3d_bpsensor_batterylevel_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_external_Main_send_tryggi3d_bpsensor_batterylevel_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_external_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Connecter_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Connecter_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_external_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_Main_send_Connecter_ConnectToU_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t));
void register_external_Main_send_Connecter_ConnectToU_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t));
void register_Main_send_Connecter_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Connecter_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Connecter_Encrypt_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Connecter_Encrypt_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_Main_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t));
void register_Main_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_Main_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_Main_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t));
void register_external_Main_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t));
void register_Main_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTReadError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTReadError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_Main_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_Main_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t));
void register_external_Main_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t));
void register_Main_send_ATT_ATTWriteError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTWriteError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Main_Instance *, uint16_t));
void register_external_Main_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Main_Instance *, uint16_t));

// Definition of the states:
#define MAIN_STATES_STANDBY_CONNECT_STATE 0
#define MAIN_STATES_STANDBY_STATE 1
#define MAIN_STATES_QUIT_STATE 2
#define MAIN_STATES_INITIALISE_STATE 3
#define MAIN_STATES_STANDBY_SYNC_STATE 4
#define MAIN_STATES_DEINITIALISE_STATE 5
#define MAIN_STATES_STANDBY_SYNC_GETVALUES_STATE 6
#define MAIN_STATES_STANDBY_CONNECTED_STATE 7
#define MAIN_STATES_FAILED_STATE 8
#define MAIN_STATES_STANDBY_ENCRYPTED_STATE 9
#define MAIN_STATES_STANDBY_SYNC_READBATTERY_STATE 10
#define MAIN_STATES_STANDBY_SYNC_TIMESYNC_STATE 11
#define MAIN_STATES_STANDBY_SCAN_STATE 12
#define MAIN_STATES_STANDBY_DISCONNECTED_STATE 13
#define MAIN_STATES_STATE 14



#ifdef __cplusplus
}
#endif

#endif //Main_H_
