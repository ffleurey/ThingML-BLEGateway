/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing BLEInitialiserImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "BLEInitialiserImpl.h"

/*****************************************************************************
 * Implementation for type : BLEInitialiserImpl
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLEInitialiserImpl_States_OnExit(int state, struct BLEInitialiserImpl_Instance *_instance);
//Prototypes: Message Sending
void BLEInitialiserImpl_send_Initialiser_Started(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_Initialiser_Stopped(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_Initialiser_Failure(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_Initialiser_DeviceInitialised(struct BLEInitialiserImpl_Instance *_instance, bdaddr_t Address);
void BLEInitialiserImpl_send_Socket_Open(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_Socket_Close(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_HCICommands_Reset(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_HCICommands_SetEventMask(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEInitialiserImpl_send_HCICommands_SetEventMaskAll(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_HCICommands_SetLocalName(struct BLEInitialiserImpl_Instance *_instance, change_local_name_cp Name);
void BLEInitialiserImpl_send_HCICommands_Disconnect(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason);
void BLEInitialiserImpl_send_HCICommands_SetLEEventMask(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEInitialiserImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy);
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable);
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEInitialiserImpl_send_HCICommands_SetLEScanParameters(struct BLEInitialiserImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy);
void BLEInitialiserImpl_send_HCICommands_SetLEScanEnable(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates);
void BLEInitialiserImpl_send_HCICommands_LECreateConnection(struct BLEInitialiserImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax);
void BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_HCICommands_LERand(struct BLEInitialiserImpl_Instance *_instance);
void BLEInitialiserImpl_send_HCICommands_LEEncrypt(struct BLEInitialiserImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext);
void BLEInitialiserImpl_send_HCICommands_LEStartEncryption(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK);
void BLEInitialiserImpl_send_SMP_SMPPairingRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEInitialiserImpl_send_SMP_SMPPairingResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEInitialiserImpl_send_SMP_SMPPairingConfirm(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void BLEInitialiserImpl_send_SMP_SMPPairingRandom(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void BLEInitialiserImpl_send_SMP_SMPPairingFailed(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Reason);
void BLEInitialiserImpl_send_SMP_SMPPairingPublicKey(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void BLEInitialiserImpl_send_SMP_SMPKeypressNotification(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Type);
void BLEInitialiserImpl_send_SMP_SMPEncryptionInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void BLEInitialiserImpl_send_SMP_SMPMasterIdentification(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void BLEInitialiserImpl_send_SMP_SMPIdentityInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void BLEInitialiserImpl_send_SMP_SMPSigningInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
void BLEInitialiserImpl_send_SMP_SMPSecurityRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void BLEInitialiserImpl_send_ATT_ATTFindInformationRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void BLEInitialiserImpl_send_ATT_ATTFindInformationResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void BLEInitialiserImpl_send_ATT_ATTFindInformationError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEInitialiserImpl_send_ATT_ATTReadByTypeError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEInitialiserImpl_send_ATT_ATTReadRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void BLEInitialiserImpl_send_ATT_ATTReadResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void BLEInitialiserImpl_send_ATT_ATTReadError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEInitialiserImpl_send_ATT_ATTWriteRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEInitialiserImpl_send_ATT_ATTWriteResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle);
void BLEInitialiserImpl_send_ATT_ATTWriteError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEInitialiserImpl_send_ATT_ATTWriteCommand(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEInitialiserImpl_send_ATT_ATTHandleValueNotification(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEInitialiserImpl_send_ATT_ATTHandleValueIndication(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_uuid_t f_BLEInitialiserImpl_ReadUUID(struct BLEInitialiserImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_BLEInitialiserImpl_MakeUUID(struct BLEInitialiserImpl_Instance *_instance, const char * Text);
void f_BLEInitialiserImpl_PrintUUID(struct BLEInitialiserImpl_Instance *_instance, ble_uuid_t ID);
//Debug fonction
void BLEInitialiserImpl_print_debug(struct BLEInitialiserImpl_Instance * _instance, char * str) {
if(_instance->debug) {
printf("%s%s", _instance->name, str);
}
}

// Declaration of functions:
// Definition of function ReadUUID
ble_uuid_t f_BLEInitialiserImpl_ReadUUID(struct BLEInitialiserImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Start ReadUUID\n");
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
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ReadUUID Done.\n");
}
// Definition of function MakeUUID
ble_uuid_t f_BLEInitialiserImpl_MakeUUID(struct BLEInitialiserImpl_Instance *_instance, const char * Text) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Start MakeUUID\n");
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
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): MakeUUID Done.\n");
}
// Definition of function PrintUUID
void f_BLEInitialiserImpl_PrintUUID(struct BLEInitialiserImpl_Instance *_instance, ble_uuid_t ID) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Start PrintUUID\n");

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): PrintUUID Done.\n");
}

// Sessions functionss:


// On Entry Actions:
void BLEInitialiserImpl_States_OnEntry(int state, struct BLEInitialiserImpl_Instance *_instance) {
switch(state) {
case BLEINITIALISERIMPL_STATES_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Enters States\n");
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_CLOSED_STATE;
BLEInitialiserImpl_States_OnEntry(_instance->BLEInitialiserImpl_States_State, _instance);
break;
}
case BLEINITIALISERIMPL_STATES_CLOSED_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Enters States:Closed\n");
break;
}
case BLEINITIALISERIMPL_STATES_CLOSING_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Enters States:Closing\n");
fprintf(stdout, "[INFO]: Closing HCI socket...\n");
BLEInitialiserImpl_send_Socket_Close(_instance);
break;
}
case BLEINITIALISERIMPL_STATES_OPEN_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Enters States:Open\n");
fprintf(stdout, "[INFO]: HCI Socket initialised...\n");
BLEInitialiserImpl_send_Initialiser_Started(_instance);
BLEInitialiserImpl_send_Initialiser_DeviceInitialised(_instance, _instance->BLEInitialiserImpl_DeviceAddress_var);
break;
}
case BLEINITIALISERIMPL_STATES_FAILURE_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Enters States:Failure\n");
fprintf(stdout, "[ERROR]: BLE_initialiser failed!\n");
BLEInitialiserImpl_send_Socket_Close(_instance);
BLEInitialiserImpl_send_Initialiser_Failure(_instance);
break;
}
case BLEINITIALISERIMPL_STATES_INITIALISE_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Enters States:Initialise\n");
fprintf(stdout, "[INFO]: Initialising BLE Controller...\n");
BLEInitialiserImpl_send_HCICommands_Reset(_instance);
break;
}
case BLEINITIALISERIMPL_STATES_OPENING_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Enters States:Opening\n");
fprintf(stdout, "[INFO]: Opening HCI socket...\n");
BLEInitialiserImpl_send_Socket_Open(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void BLEInitialiserImpl_States_OnExit(int state, struct BLEInitialiserImpl_Instance *_instance) {
switch(state) {
case BLEINITIALISERIMPL_STATES_STATE:{
BLEInitialiserImpl_States_OnExit(_instance->BLEInitialiserImpl_States_State, _instance);
break;}
case BLEINITIALISERIMPL_STATES_CLOSED_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Exits States:Closed\n");
break;}
case BLEINITIALISERIMPL_STATES_CLOSING_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Exits States:Closing\n");
break;}
case BLEINITIALISERIMPL_STATES_OPEN_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Exits States:Open\n");
break;}
case BLEINITIALISERIMPL_STATES_FAILURE_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Exits States:Failure\n");
break;}
case BLEINITIALISERIMPL_STATES_INITIALISE_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Exits States:Initialise\n");
break;}
case BLEINITIALISERIMPL_STATES_OPENING_STATE:{
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Exits States:Opening\n");
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLEInitialiserImpl_handle_HCIEvents_SetEventMaskCompleted(struct BLEInitialiserImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCIEvents?SetEventMaskCompleted\n");
//Region States
uint8_t BLEInitialiserImpl_States_State_event_consumed = 0;
if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_INITIALISE_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Initialise -> Failure event HCIEvents?SetEventMaskCompleted\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_INITIALISE_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_FAILURE_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_FAILURE_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
else if (BLEInitialiserImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): internal event HCIEvents?SetEventMaskCompleted\n");
BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll(_instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEInitialiserImpl_handle_HCIEvents_SetLEEventMaskCompleted(struct BLEInitialiserImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCIEvents?SetLEEventMaskCompleted\n");
//Region States
uint8_t BLEInitialiserImpl_States_State_event_consumed = 0;
if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_INITIALISE_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Initialise -> Open event HCIEvents?SetLEEventMaskCompleted\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_INITIALISE_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_OPEN_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_OPEN_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
else if (BLEInitialiserImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Initialise -> Failure event HCIEvents?SetLEEventMaskCompleted\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_INITIALISE_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_FAILURE_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_FAILURE_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEInitialiserImpl_handle_HCIEvents_ResetCompleted(struct BLEInitialiserImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCIEvents?ResetCompleted\n");
//Region States
uint8_t BLEInitialiserImpl_States_State_event_consumed = 0;
if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_INITIALISE_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Initialise -> Failure event HCIEvents?ResetCompleted\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_INITIALISE_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_FAILURE_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_FAILURE_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
else if (BLEInitialiserImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): internal event HCIEvents?ResetCompleted\n");
BLEInitialiserImpl_send_HCICommands_SetEventMaskAll(_instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEInitialiserImpl_handle_Socket_Closed(struct BLEInitialiserImpl_Instance *_instance) {
if(!(_instance->active)) return;
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Socket?Closed\n");
//Region States
uint8_t BLEInitialiserImpl_States_State_event_consumed = 0;
if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_OPENING_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Opening -> Failure event Socket?Closed\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_OPENING_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_FAILURE_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_FAILURE_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_INITIALISE_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Initialise -> Failure event Socket?Closed\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_INITIALISE_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_FAILURE_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_FAILURE_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_OPEN_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Open -> Failure event Socket?Closed\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_OPEN_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_FAILURE_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_FAILURE_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_CLOSING_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Closing -> Closed event Socket?Closed\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_CLOSING_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_CLOSED_STATE;
BLEInitialiserImpl_send_Initialiser_Stopped(_instance);
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_CLOSED_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEInitialiserImpl_handle_Socket_Opened(struct BLEInitialiserImpl_Instance *_instance, bdaddr_t Address) {
if(!(_instance->active)) return;
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Socket?Opened\n");
//Region States
uint8_t BLEInitialiserImpl_States_State_event_consumed = 0;
if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_OPENING_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Opening -> Initialise event Socket?Opened\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_OPENING_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_INITIALISE_STATE;
_instance->BLEInitialiserImpl_DeviceAddress_var = Address;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_INITIALISE_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEInitialiserImpl_handle_Initialiser_Start(struct BLEInitialiserImpl_Instance *_instance) {
if(!(_instance->active)) return;
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Initialiser?Start\n");
//Region States
uint8_t BLEInitialiserImpl_States_State_event_consumed = 0;
if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_CLOSED_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Closed -> Opening event Initialiser?Start\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_CLOSED_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_OPENING_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_OPENING_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_FAILURE_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Failure -> Opening event Initialiser?Start\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_FAILURE_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_OPENING_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_OPENING_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEInitialiserImpl_handle_Initialiser_Stop(struct BLEInitialiserImpl_Instance *_instance) {
if(!(_instance->active)) return;
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Initialiser?Stop\n");
//Region States
uint8_t BLEInitialiserImpl_States_State_event_consumed = 0;
if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_CLOSED_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): internal event Initialiser?Stop\n");
BLEInitialiserImpl_send_Initialiser_Stopped(_instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_INITIALISE_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Initialise -> Closing event Initialiser?Stop\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_INITIALISE_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_CLOSING_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_CLOSING_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_OPEN_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): transition Open -> Closing event Initialiser?Stop\n");
BLEInitialiserImpl_States_OnExit(BLEINITIALISERIMPL_STATES_OPEN_STATE, _instance);
_instance->BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_CLOSING_STATE;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_CLOSING_STATE, _instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEInitialiserImpl_States_State == BLEINITIALISERIMPL_STATES_FAILURE_STATE) {
if (BLEInitialiserImpl_States_State_event_consumed == 0 && 1) {
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): internal event Initialiser?Stop\n");
BLEInitialiserImpl_send_Initialiser_Failure(_instance);
BLEInitialiserImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_BLEInitialiserImpl_send_Initialiser_Started_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_Initialiser_Started_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_Initialiser_Started_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_Initialiser_Started_listener = _listener;
}
void register_BLEInitialiserImpl_send_Initialiser_Started_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_Initialiser_Started_listener = _listener;
}
void BLEInitialiserImpl_send_Initialiser_Started(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Initialiser!Started\n");
if (BLEInitialiserImpl_send_Initialiser_Started_listener != 0x0) BLEInitialiserImpl_send_Initialiser_Started_listener(_instance);
if (external_BLEInitialiserImpl_send_Initialiser_Started_listener != 0x0) external_BLEInitialiserImpl_send_Initialiser_Started_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_Initialiser_Stopped_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_Initialiser_Stopped_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_Initialiser_Stopped_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_Initialiser_Stopped_listener = _listener;
}
void register_BLEInitialiserImpl_send_Initialiser_Stopped_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_Initialiser_Stopped_listener = _listener;
}
void BLEInitialiserImpl_send_Initialiser_Stopped(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Initialiser!Stopped\n");
if (BLEInitialiserImpl_send_Initialiser_Stopped_listener != 0x0) BLEInitialiserImpl_send_Initialiser_Stopped_listener(_instance);
if (external_BLEInitialiserImpl_send_Initialiser_Stopped_listener != 0x0) external_BLEInitialiserImpl_send_Initialiser_Stopped_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_Initialiser_Failure_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_Initialiser_Failure_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_Initialiser_Failure_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_Initialiser_Failure_listener = _listener;
}
void register_BLEInitialiserImpl_send_Initialiser_Failure_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_Initialiser_Failure_listener = _listener;
}
void BLEInitialiserImpl_send_Initialiser_Failure(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Initialiser!Failure\n");
if (BLEInitialiserImpl_send_Initialiser_Failure_listener != 0x0) BLEInitialiserImpl_send_Initialiser_Failure_listener(_instance);
if (external_BLEInitialiserImpl_send_Initialiser_Failure_listener != 0x0) external_BLEInitialiserImpl_send_Initialiser_Failure_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener)(struct BLEInitialiserImpl_Instance *, bdaddr_t)= 0x0;
void (*BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener)(struct BLEInitialiserImpl_Instance *, bdaddr_t)= 0x0;
void register_external_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, bdaddr_t)){
external_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener = _listener;
}
void register_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, bdaddr_t)){
BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener = _listener;
}
void BLEInitialiserImpl_send_Initialiser_DeviceInitialised(struct BLEInitialiserImpl_Instance *_instance, bdaddr_t Address){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Initialiser!DeviceInitialised\n");
if (BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener != 0x0) BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener(_instance, Address);
if (external_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener != 0x0) external_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener(_instance, Address);
;
}
void (*external_BLEInitialiserImpl_send_Socket_Open_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_Socket_Open_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_Socket_Open_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_Socket_Open_listener = _listener;
}
void register_BLEInitialiserImpl_send_Socket_Open_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_Socket_Open_listener = _listener;
}
void BLEInitialiserImpl_send_Socket_Open(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Socket!Open\n");
if (BLEInitialiserImpl_send_Socket_Open_listener != 0x0) BLEInitialiserImpl_send_Socket_Open_listener(_instance);
if (external_BLEInitialiserImpl_send_Socket_Open_listener != 0x0) external_BLEInitialiserImpl_send_Socket_Open_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_Socket_Close_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_Socket_Close_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_Socket_Close_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_Socket_Close_listener = _listener;
}
void register_BLEInitialiserImpl_send_Socket_Close_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_Socket_Close_listener = _listener;
}
void BLEInitialiserImpl_send_Socket_Close(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): Socket!Close\n");
if (BLEInitialiserImpl_send_Socket_Close_listener != 0x0) BLEInitialiserImpl_send_Socket_Close_listener(_instance);
if (external_BLEInitialiserImpl_send_Socket_Close_listener != 0x0) external_BLEInitialiserImpl_send_Socket_Close_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_Reset_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_Reset_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_HCICommands_Reset_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_HCICommands_Reset_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_Reset(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!Reset\n");
if (BLEInitialiserImpl_send_HCICommands_Reset_listener != 0x0) BLEInitialiserImpl_send_HCICommands_Reset_listener(_instance);
if (external_BLEInitialiserImpl_send_HCICommands_Reset_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_Reset_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetEventMask_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)){
external_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)){
BLEInitialiserImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetEventMask(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetEventMask\n");
if (BLEInitialiserImpl_send_HCICommands_SetEventMask_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
if (external_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetEventMaskAll(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetEventMaskAll\n");
if (BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
if (external_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener)(struct BLEInitialiserImpl_Instance *, change_local_name_cp)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLocalName_listener)(struct BLEInitialiserImpl_Instance *, change_local_name_cp)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, change_local_name_cp)){
external_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, change_local_name_cp)){
BLEInitialiserImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLocalName(struct BLEInitialiserImpl_Instance *_instance, change_local_name_cp Name){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLocalName\n");
if (BLEInitialiserImpl_send_HCICommands_SetLocalName_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
if (external_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_Disconnect_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_Disconnect_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_HCICommands_Disconnect_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)){
BLEInitialiserImpl_send_HCICommands_Disconnect_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_Disconnect(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!Disconnect\n");
if (BLEInitialiserImpl_send_HCICommands_Disconnect_listener != 0x0) BLEInitialiserImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
if (external_BLEInitialiserImpl_send_HCICommands_Disconnect_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)){
external_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, set_event_mask_cp)){
BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEEventMask(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEEventMask\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEEventMaskAll\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEInitialiserImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEAdvertisementParameters\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEInitialiserImpl_Instance *, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEInitialiserImpl_Instance *, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t)){
external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t)){
BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEAdvertiseEnable\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEAdvertisingData\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEScanResponseData\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
external_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEScanParameters(struct BLEInitialiserImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEScanParameters\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint8_t)){
external_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint8_t, uint8_t)){
BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_SetLEScanEnable(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!SetLEScanEnable\n");
if (BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
if (external_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
external_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_LECreateConnection(struct BLEInitialiserImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!LECreateConnection\n");
if (BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener != 0x0) BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
if (external_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!LECreateConnectionCancel\n");
if (BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
if (external_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_LERand_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_LERand_listener)(struct BLEInitialiserImpl_Instance *)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
external_BLEInitialiserImpl_send_HCICommands_LERand_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *)){
BLEInitialiserImpl_send_HCICommands_LERand_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_LERand(struct BLEInitialiserImpl_Instance *_instance){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!LERand\n");
if (BLEInitialiserImpl_send_HCICommands_LERand_listener != 0x0) BLEInitialiserImpl_send_HCICommands_LERand_listener(_instance);
if (external_BLEInitialiserImpl_send_HCICommands_LERand_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_LERand_listener(_instance);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener)(struct BLEInitialiserImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener)(struct BLEInitialiserImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, ble_random_number_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, ble_random_number_t, ble_random_number_t)){
BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_LEEncrypt(struct BLEInitialiserImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!LEEncrypt\n");
if (BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener != 0x0) BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
if (external_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
;
}
void (*external_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void register_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void BLEInitialiserImpl_send_HCICommands_LEStartEncryption(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): HCICommands!LEStartEncryption\n");
if (BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener != 0x0) BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
if (external_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener != 0x0) external_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPPairingRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPPairingRequest\n");
if (BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPPairingResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPPairingResponse\n");
if (BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPPairingConfirm(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPPairingConfirm\n");
if (BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
if (external_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPPairingRandom(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPPairingRandom\n");
if (BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
if (external_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)){
BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPPairingFailed(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPPairingFailed\n");
if (BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
if (external_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
external_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPPairingPublicKey(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPPairingPublicKey\n");
if (BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
if (external_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPPairingDHKeyCheck\n");
if (BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
if (external_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t)){
BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPKeypressNotification(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPKeypressNotification\n");
if (BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
if (external_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPEncryptionInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPEncryptionInformation\n");
if (BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
if (external_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
external_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPMasterIdentification(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPMasterIdentification\n");
if (BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
if (external_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPIdentityInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPIdentityInformation\n");
if (BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
if (external_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPIdentityAddressInformation\n");
if (BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
if (external_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_random_number_t)){
BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPSigningInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPSigningInformation\n");
if (BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
if (external_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
;
}
void (*external_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void register_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void BLEInitialiserImpl_send_SMP_SMPSecurityRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): SMP!SMPSecurityRequest\n");
if (BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener != 0x0) BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
if (external_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener != 0x0) external_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t)){
BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTFindInformationRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTFindInformationRequest\n");
if (BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTFindInformationResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTFindInformationResponse\n");
if (BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTFindInformationError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTFindInformationError\n");
if (BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadByTypeRequest\n");
if (BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadByTypeResponse\n");
if (BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadByTypeError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadByTypeError\n");
if (BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t)){
BLEInitialiserImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadRequest\n");
if (BLEInitialiserImpl_send_ATT_ATTReadRequest_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadResponse\n");
if (BLEInitialiserImpl_send_ATT_ATTReadResponse_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEInitialiserImpl_send_ATT_ATTReadError_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadError\n");
if (BLEInitialiserImpl_send_ATT_ATTReadError_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEInitialiserImpl_send_ATT_ATTReadError_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadByGroupTypeRequest\n");
if (BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadByGroupTypeResponse\n");
if (BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTReadByGroupTypeError\n");
if (BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTWriteRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTWriteRequest\n");
if (BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)){
external_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)){
BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTWriteResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTWriteResponse\n");
if (BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTWriteError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTWriteError_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEInitialiserImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEInitialiserImpl_send_ATT_ATTWriteError_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTWriteError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTWriteError\n");
if (BLEInitialiserImpl_send_ATT_ATTWriteError_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEInitialiserImpl_send_ATT_ATTWriteError_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTWriteCommand(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTWriteCommand\n");
if (BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTHandleValueNotification(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTHandleValueNotification\n");
if (BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTHandleValueIndication(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTHandleValueIndication\n");
if (BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)= 0x0;
void (*BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)){
external_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEInitialiserImpl_Instance *, uint16_t)){
BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle){
BLEInitialiserImpl_print_debug(_instance, " (BLEInitialiserImpl): ATT!ATTHandleValueConfirmation\n");
if (BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



