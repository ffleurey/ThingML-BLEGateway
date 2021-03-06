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


// BEGIN: Code from the c_header annotation for type BLERandomNumber
#ifndef BLE_RANDOM_NUMBER_T_H
#define BLE_RANDOM_NUMBER_T_H
typedef struct { uint8_t bytes[16]; } ble_random_number_t;
#endif
// END: Code from the c_header annotation for type BLERandomNumber


// BEGIN: Code from the c_header annotation for type UUID
#ifndef BLE_UUID_T_H
#define BLE_UUID_T_H
typedef struct { uint8_t bytes[16]; } ble_uuid_t;
#endif
// END: Code from the c_header annotation for type UUID


// BEGIN: Code from the c_header annotation for type GATTData
#ifndef BLE_GATT_DATA_T_H
#define BLE_GATT_DATA_T_H
typedef struct { uint8_t length; uint8_t bytes[23]; } ble_gatt_data_t;
#endif
// END: Code from the c_header annotation for type GATTData


// BEGIN: Code from the c_header annotation for type SMPPublicKey
#ifndef SMP_PUBLIC_KEY_T_H
#define SMP_PUBLIC_KEY_T_H
typedef struct { uint8_t bytes[32]; } smp_public_key_t;
#endif
// END: Code from the c_header annotation for type SMPPublicKey


// BEGIN: Code from the c_header annotation for type HCIEventMask
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type HCIEventMask


// BEGIN: Code from the c_header annotation for type BLEAdvertiseData
#ifndef BLE_ADV_DATA_T_H
#define BLE_ADV_DATA_T_H
typedef struct { uint8_t bytes[31]; } ble_adv_data_t;
#endif
// END: Code from the c_header annotation for type BLEAdvertiseData


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


// BEGIN: Code from the c_header annotation for type BLERandomPart
#ifndef BLE_RANDOM_PART_T_H
#define BLE_RANDOM_PART_T_H
typedef struct { uint8_t bytes[8]; } ble_random_part_t;
#endif
// END: Code from the c_header annotation for type BLERandomPart


// BEGIN: Code from the c_header annotation for type BTLocalName
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type BTLocalName

// Definition of the instance struct:
struct Main_Instance {
bool debug;
char * name;

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_Signals;
uint16_t id_Initialiser;
uint16_t id_Connecter;
uint16_t id_Encrypter;
uint16_t id_Socket;
uint16_t id_HCICommands;
uint16_t id_HCIEvents;
uint16_t id_SMP;
uint16_t id_ATT;
// Variables for the current instance state
int Main_States_State;
int Main_States_Pairing_State;
int Main_States_Pairing_Confirm_State;
int Main_States_Pairing_ExchangeKeys_State;
int Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State;
// Variables for the properties of the instance
ble_random_part_t Main_OwnRandom_var;
uint8_t Main_HavePeerIdentityAddress_var;
uint16_t Main_PeerEDIV_var;
ble_random_number_t Main_OwnIRK_var;
uint8_t Main_ConnectedAddressType_var;
ble_random_number_t Main_PeerLTK_var;
uint8_t Main_HasPairedSuccessfully_var;
ble_random_number_t Main_Mrand_var;
bdaddr_t Main_PeerIdentityAddress_var;
uint8_t Main_HavePeerIdentification_var;
uint8_t Main_DeviceAddressType_var;
ble_random_part_t Main_PeerRandom_var;
ble_random_number_t Main_Mconfirm_var;
uint8_t Main_PeerIdentityAddressType_var;
ble_random_number_t Main_OwnLTK_var;
bdaddr_t Main_OwnIdentityAddress_var;
bdaddr_t Main_ConnectedAddress_var;
bdaddr_t Main_DeviceAddress_var;
uint8_t Main_HavePeerLTK_var;
uint16_t Main_OwnEDIV_var;
ble_random_number_t Main_Sconfirm_var;
uint8_t Main_HavePeerIdentity_var;
ble_random_number_t Main_Srand_var;
uint8_t Main_OwnIdentityAddressType_var;
uint16_t Main_ConnectedHandle_var;
ble_random_number_t Main_PeerIRK_var;

};
// Declaration of prototypes outgoing messages :
void Main_States_OnEntry(int state, struct Main_Instance *_instance);
void Main_handle_HCIEvents_LEStartEncryptionStatus(struct Main_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void Main_handle_HCIEvents_EncryptionChanged(struct Main_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled);
void Main_handle_Connecter_Failure(struct Main_Instance *_instance);
void Main_handle_Connecter_Connected(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void Main_handle_Connecter_Stopped(struct Main_Instance *_instance);
void Main_handle_Signals_Interrupt(struct Main_Instance *_instance);
void Main_handle_Encrypter_CheckConfirmCompleted(struct Main_Instance *_instance, uint8_t Correct);
void Main_handle_Encrypter_GenerateConfirmCompleted(struct Main_Instance *_instance, ble_random_number_t Confirm);
void Main_handle_Encrypter_GenerateSTKCompleted(struct Main_Instance *_instance, ble_random_number_t STK);
void Main_handle_Encrypter_GenerateRandomNumberCompleted(struct Main_Instance *_instance, ble_random_number_t Random);
void Main_handle_Initialiser_DeviceInitialised(struct Main_Instance *_instance, bdaddr_t Address);
void Main_handle_Initialiser_Failure(struct Main_Instance *_instance);
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance);
void Main_handle_SMP_SMPPairingConfirm(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void Main_handle_SMP_SMPEncryptionInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void Main_handle_SMP_SMPMasterIdentification(struct Main_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void Main_handle_SMP_SMPSecurityRequest(struct Main_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void Main_handle_SMP_SMPIdentityAddressInformation(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void Main_handle_SMP_SMPPairingFailed(struct Main_Instance *_instance, uint16_t Handle, uint8_t Reason);
void Main_handle_SMP_SMPIdentityInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void Main_handle_SMP_SMPPairingResponse(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void Main_handle_SMP_SMPPairingRandom(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
// Declaration of callbacks for incoming messages:
void register_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_external_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
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
void register_Main_send_Encrypter_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Encrypter_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Encrypter_GenerateRandomNumber_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Encrypter_GenerateRandomNumber_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Encrypter_GenerateConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t));
void register_external_Main_send_Encrypter_GenerateConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t));
void register_Main_send_Encrypter_CheckConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_external_Main_send_Encrypter_CheckConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_Main_send_Encrypter_GenerateSTK_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_external_Main_send_Encrypter_GenerateSTK_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_Main_send_Socket_Open_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Socket_Open_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Socket_Close_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Socket_Close_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_Reset_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_Reset_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_external_Main_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_Main_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Main_Instance *, change_local_name_cp));
void register_external_Main_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Main_Instance *, change_local_name_cp));
void register_Main_send_HCICommands_Disconnect_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_external_Main_send_HCICommands_Disconnect_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_Main_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_external_Main_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_Main_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t));
void register_external_Main_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t));
void register_Main_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t));
void register_external_Main_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t));
void register_Main_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_external_Main_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_Main_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_external_Main_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_Main_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t));
void register_external_Main_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t));
void register_Main_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint8_t));
void register_external_Main_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint8_t));
void register_Main_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t));
void register_external_Main_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t));
void register_Main_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_LERand_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_LERand_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_external_Main_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_Main_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t));
void register_external_Main_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_Main_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_Main_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_Main_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_Main_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_external_Main_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_Main_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_external_Main_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_Main_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_external_Main_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_Main_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_external_Main_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_Main_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_external_Main_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_Main_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_Main_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
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
#define MAIN_STATES_STATE 0
#define MAIN_STATES_CONNECT_STATE 1
#define MAIN_STATES_PAIRING_DONOTHING_STATE 2
#define MAIN_STATES_PAIRING_ENCRYPT_STATE 3
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE 4
#define MAIN_STATES_QUIT_STATE 5
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_SENDALL_STATE 6
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE 7
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE 8
#define MAIN_STATES_UNINITIALISE_STATE 9
#define MAIN_STATES_PAIRING_REQUEST_STATE 10
#define MAIN_STATES_PAIRING_REQUESTSENT2_STATE 11
#define MAIN_STATES_PAIRING_PAIRFAILED_STATE 12
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE 13
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE 14
#define MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE 15
#define MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE 16
#define MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE 17
#define MAIN_STATES_FAILED_STATE 18
#define MAIN_STATES_PAIRING_CONFIRM_STATE 19
#define MAIN_STATES_PAIRING_STATE 20
#define MAIN_STATES_PAIRING_REQUESTSENT_STATE 21
#define MAIN_STATES_INITIALISE_STATE 22
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE 23



#ifdef __cplusplus
}
#endif

#endif //Main_H_
