/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing Main
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "Main.h"

/*****************************************************************************
 * Implementation for type : Main
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Main_States_OnExit(int state, struct Main_Instance *_instance);
//Prototypes: Message Sending
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code);
void Main_send_Initialiser_Start(struct Main_Instance *_instance);
void Main_send_Initialiser_Stop(struct Main_Instance *_instance);
void Main_send_Connecter_Connect(struct Main_Instance *_instance);
void Main_send_Connecter_ConnectTo(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber);
void Main_send_Connecter_ConnectToU(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void Main_send_Connecter_Stop(struct Main_Instance *_instance);
void Main_send_Connecter_Encrypt(struct Main_Instance *_instance);
void Main_send_Encrypter_Start(struct Main_Instance *_instance);
void Main_send_Encrypter_GenerateRandomNumber(struct Main_Instance *_instance);
void Main_send_Encrypter_GenerateConfirm(struct Main_Instance *_instance, ble_random_number_t Rand, uint8_t IAT, bdaddr_t IA, uint8_t RAT, bdaddr_t RA);
void Main_send_Encrypter_CheckConfirm(struct Main_Instance *_instance, ble_random_number_t Received, ble_random_number_t Calculated);
void Main_send_Encrypter_GenerateSTK(struct Main_Instance *_instance, ble_random_number_t Srand, ble_random_number_t Mrand);
void Main_send_Socket_Open(struct Main_Instance *_instance);
void Main_send_Socket_Close(struct Main_Instance *_instance);
void Main_send_HCICommands_Reset(struct Main_Instance *_instance);
void Main_send_HCICommands_SetEventMask(struct Main_Instance *_instance, set_event_mask_cp Mask);
void Main_send_HCICommands_SetEventMaskAll(struct Main_Instance *_instance);
void Main_send_HCICommands_SetLocalName(struct Main_Instance *_instance, change_local_name_cp Name);
void Main_send_HCICommands_Disconnect(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason);
void Main_send_HCICommands_SetLEEventMask(struct Main_Instance *_instance, set_event_mask_cp Mask);
void Main_send_HCICommands_SetLEEventMaskAll(struct Main_Instance *_instance);
void Main_send_HCICommands_SetLEAdvertisementParameters(struct Main_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy);
void Main_send_HCICommands_SetLEAdvertiseEnable(struct Main_Instance *_instance, uint8_t Enable);
void Main_send_HCICommands_SetLEAdvertisingData(struct Main_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void Main_send_HCICommands_SetLEScanResponseData(struct Main_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void Main_send_HCICommands_SetLEScanParameters(struct Main_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy);
void Main_send_HCICommands_SetLEScanEnable(struct Main_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates);
void Main_send_HCICommands_LECreateConnection(struct Main_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax);
void Main_send_HCICommands_LECreateConnectionCancel(struct Main_Instance *_instance);
void Main_send_HCICommands_LERand(struct Main_Instance *_instance);
void Main_send_HCICommands_LEEncrypt(struct Main_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext);
void Main_send_HCICommands_LEStartEncryption(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK);
void Main_send_SMP_SMPPairingRequest(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void Main_send_SMP_SMPPairingResponse(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void Main_send_SMP_SMPPairingConfirm(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void Main_send_SMP_SMPPairingRandom(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void Main_send_SMP_SMPPairingFailed(struct Main_Instance *_instance, uint16_t Handle, uint8_t Reason);
void Main_send_SMP_SMPPairingPublicKey(struct Main_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void Main_send_SMP_SMPPairingDHKeyCheck(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void Main_send_SMP_SMPKeypressNotification(struct Main_Instance *_instance, uint16_t Handle, uint8_t Type);
void Main_send_SMP_SMPEncryptionInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void Main_send_SMP_SMPMasterIdentification(struct Main_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void Main_send_SMP_SMPIdentityInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void Main_send_SMP_SMPIdentityAddressInformation(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void Main_send_SMP_SMPSigningInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
void Main_send_SMP_SMPSecurityRequest(struct Main_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
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
void print_bytes(uint8_t *data, int16_t length);
ble_uuid_t f_Main_ReadUUID(struct Main_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_Main_MakeUUID(struct Main_Instance *_instance, const char * Text);
void f_Main_PrintUUID(struct Main_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function printBytes
void print_bytes(uint8_t *data, int16_t length) {
printf("'{ ");

    int16_t i;
    for (i = 0; i < length; i++) printf("0x%2.2X, ",data[i]);

    printf("}'\\n");
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
case MAIN_STATES_STATE:{
_instance->Main_States_State = MAIN_STATES_INITIALISE_STATE;
Main_States_OnEntry(_instance->Main_States_State, _instance);
break;
}
case MAIN_STATES_PAIRING_STATE:{
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_REQUEST_STATE;
Main_States_OnEntry(_instance->Main_States_Pairing_State, _instance);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE:{
_instance->Main_States_Pairing_ExchangeKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE;
Main_States_OnEntry(_instance->Main_States_Pairing_ExchangeKeys_State, _instance);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE:{
_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE;
fprintf(stdout, "[INFO]: Got all peer keys, generating own...\n");
Main_States_OnEntry(_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State, _instance);
break;
}
case MAIN_STATES_PAIRING_CONFIRM_STATE:{
_instance->Main_States_Pairing_Confirm_State = MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE;
Main_States_OnEntry(_instance->Main_States_Pairing_Confirm_State, _instance);
break;
}
case MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE:{
fprintf(stdout, "[INFO]: Confirm Pairing...\n");
Main_send_Encrypter_GenerateRandomNumber(_instance);
break;
}
case MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE:{
break;
}
case MAIN_STATES_INITIALISE_STATE:{
Main_send_Initialiser_Start(_instance);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE:{
Main_send_Encrypter_GenerateRandomNumber(_instance);
break;
}
case MAIN_STATES_FAILED_STATE:{
fprintf(stdout, "[ERROR]: Failed, quitting... !!!\n");
Main_send_Signals_Quit(_instance, 1);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE:{
Main_send_Encrypter_GenerateRandomNumber(_instance);
break;
}
case MAIN_STATES_PAIRING_ENCRYPT_STATE:{
fprintf(stdout, "[INFO]: Encrypting connection ...\n");
Main_send_Encrypter_GenerateSTK(_instance, _instance->Main_Srand_var, _instance->Main_Mrand_var);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE:{
Main_send_Encrypter_GenerateRandomNumber(_instance);
break;
}
case MAIN_STATES_PAIRING_PAIRFAILED_STATE:{
fprintf(stdout, "[ERROR]: Pairing procedure failed.\n");
Main_send_Connecter_Stop(_instance);
break;
}
case MAIN_STATES_QUIT_STATE:{
fprintf(stdout, "[INFO]: Finished, quitting...\n");
if(_instance->Main_HasPairedSuccessfully_var) {
fprintf(stdout, "\n\n\nPairing was successfull! Please note the following values and use for later connection:\n\n");
fprintf(stdout, "\tproperty OwnLongTermKey : BLERandomNumber = ");
print_bytes((uint8_t*)&(_instance->Main_OwnLTK_var), 16);
fprintf(stdout, "\tproperty OwnEncryptedDiversifier : UInt = ");
print_bytes((uint8_t*)&(_instance->Main_OwnEDIV_var), 2);
fprintf(stdout, "\tproperty OwnRandomNumber : BLERandomPart = ");
print_bytes((uint8_t*)&(_instance->Main_OwnRandom_var), 8);
fprintf(stdout, "\tproperty OwnIdentityResolvingKey : BLERandomNumber = ");
print_bytes((uint8_t*)&(_instance->Main_OwnIRK_var), 16);
fprintf(stdout, "\tproperty OwnAddressType : BLEAddressType = ");
print_bytes((uint8_t*)&(_instance->Main_OwnIdentityAddressType_var), 1);
fprintf(stdout, "\tproperty OwnAddress : BTAddress = ");
print_bytes((uint8_t*)&(_instance->Main_OwnIdentityAddress_var), 6);
fprintf(stdout, "\n");
fprintf(stdout, "\tproperty PeerLongTermKey : BLERandomNumber = ");
print_bytes((uint8_t*)&(_instance->Main_PeerLTK_var), 16);
fprintf(stdout, "\tproperty PeerEncryptedDiversifier : UInt = ");
print_bytes((uint8_t*)&(_instance->Main_PeerEDIV_var), 2);
fprintf(stdout, "\tproperty PeerRandomNumber : BLERandomPart = ");
print_bytes((uint8_t*)&(_instance->Main_PeerRandom_var), 8);
fprintf(stdout, "\tproperty PeerIdentityResolvingKey : BLERandomNumber = ");
print_bytes((uint8_t*)&(_instance->Main_PeerIRK_var), 16);
fprintf(stdout, "\tproperty PeerAddressType : BLEAddressTyp = ");
print_bytes((uint8_t*)&(_instance->Main_PeerIdentityAddressType_var), 1);
fprintf(stdout, "\tproperty PeerAddress : BTAddress = ");
print_bytes((uint8_t*)&(_instance->Main_PeerIdentityAddress_var), 6);
fprintf(stdout, "\n");

}
Main_send_Signals_Quit(_instance, 0);
break;
}
case MAIN_STATES_PAIRING_REQUEST_STATE:{
break;
}
case MAIN_STATES_CONNECT_STATE:{
Main_send_Connecter_Connect(_instance);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_SENDALL_STATE:{
_instance->Main_OwnIdentityAddressType_var = _instance->Main_DeviceAddressType_var;
_instance->Main_OwnIdentityAddress_var = _instance->Main_DeviceAddress_var;
fprintf(stdout, "[INFO]: Generate all own keys, sending...\n");
Main_send_SMP_SMPEncryptionInformation(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_OwnLTK_var);
Main_send_SMP_SMPMasterIdentification(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_OwnEDIV_var, _instance->Main_OwnRandom_var);
Main_send_SMP_SMPIdentityInformation(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_OwnIRK_var);
Main_send_SMP_SMPIdentityAddressInformation(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_OwnIdentityAddressType_var, _instance->Main_OwnIdentityAddress_var);
_instance->Main_HasPairedSuccessfully_var = 1;
break;
}
case MAIN_STATES_UNINITIALISE_STATE:{
Main_send_Initialiser_Stop(_instance);
break;
}
case MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE:{
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void Main_States_OnExit(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STATE:{
Main_States_OnExit(_instance->Main_States_State, _instance);
break;}
case MAIN_STATES_PAIRING_STATE:{
Main_States_OnExit(_instance->Main_States_Pairing_State, _instance);
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE:{
Main_States_OnExit(_instance->Main_States_Pairing_ExchangeKeys_State, _instance);
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE:{
Main_States_OnExit(_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State, _instance);
break;}
case MAIN_STATES_PAIRING_CONFIRM_STATE:{
Main_States_OnExit(_instance->Main_States_Pairing_Confirm_State, _instance);
break;}
case MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE:{
break;}
case MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE:{
break;}
case MAIN_STATES_INITIALISE_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE:{
break;}
case MAIN_STATES_FAILED_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE:{
break;}
case MAIN_STATES_PAIRING_ENCRYPT_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE:{
break;}
case MAIN_STATES_PAIRING_PAIRFAILED_STATE:{
break;}
case MAIN_STATES_QUIT_STATE:{
break;}
case MAIN_STATES_PAIRING_REQUEST_STATE:{
break;}
case MAIN_STATES_CONNECT_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_SENDALL_STATE:{
break;}
case MAIN_STATES_UNINITIALISE_STATE:{
break;}
case MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Main_handle_HCIEvents_LEStartEncryptionStatus(struct Main_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_ENCRYPT_STATE) {
if (Main_States_Pairing_State_event_consumed == 0 && (Status > 0)) {
Main_States_OnExit(MAIN_STATES_PAIRING_ENCRYPT_STATE, _instance);
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_PAIRFAILED_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_PAIRFAILED_STATE, _instance);
Main_States_Pairing_State_event_consumed = 1;
}
else if (Main_States_Pairing_State_event_consumed == 0 && (Status == 0)) {
fprintf(stdout, "[INFO]: Waiting for encryption...\n");
Main_States_Pairing_State_event_consumed = 1;
}
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_HCIEvents_EncryptionChanged(struct Main_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_ENCRYPT_STATE) {
if (Main_States_Pairing_State_event_consumed == 0 && (Status == 0x00 && Enabled == 0x01)) {
Main_States_OnExit(MAIN_STATES_PAIRING_ENCRYPT_STATE, _instance);
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE, _instance);
Main_States_Pairing_State_event_consumed = 1;
}
else if (Main_States_Pairing_State_event_consumed == 0 && (Status > 0x00 || Enabled != 0x01)) {
Main_States_OnExit(MAIN_STATES_PAIRING_ENCRYPT_STATE, _instance);
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_PAIRFAILED_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_PAIRFAILED_STATE, _instance);
Main_States_Pairing_State_event_consumed = 1;
}
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
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
_instance->Main_States_State = MAIN_STATES_CONNECT_STATE;
_instance->Main_DeviceAddress_var = Address;
Main_States_OnEntry(MAIN_STATES_CONNECT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_UNINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_UNINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
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
else if (_instance->Main_States_State == MAIN_STATES_UNINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_UNINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Stopped(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_CONNECT_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_CONNECT_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_UNINITIALISE_STATE;
Main_States_OnEntry(MAIN_STATES_UNINITIALISE_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_UNINITIALISE_STATE;
Main_States_OnEntry(MAIN_STATES_UNINITIALISE_STATE, _instance);
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
if (_instance->Main_States_State == MAIN_STATES_CONNECT_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_CONNECT_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_PAIRING_STATE;
_instance->Main_ConnectedAddressType_var = AddressType;
_instance->Main_ConnectedAddress_var = Address;
_instance->Main_ConnectedHandle_var = Handle;
Main_States_OnEntry(MAIN_STATES_PAIRING_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Failure(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_CONNECT_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_CONNECT_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Encrypter_GenerateConfirmCompleted(struct Main_Instance *_instance, ble_random_number_t Confirm) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_CONFIRM_STATE) {
//Region Confirm
uint8_t Main_States_Pairing_Confirm_State_event_consumed = 0;
if (_instance->Main_States_Pairing_Confirm_State == MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE) {
if (Main_States_Pairing_Confirm_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE, _instance);
_instance->Main_States_Pairing_Confirm_State = MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE;
_instance->Main_Mconfirm_var = Confirm;
Main_send_SMP_SMPPairingConfirm(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_Mconfirm_var);
fprintf(stdout, "[INFO]: Sent Mconfirm.\n");
Main_States_OnEntry(MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE, _instance);
Main_States_Pairing_Confirm_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Pairing_Confirm_State == MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE) {
if (Main_States_Pairing_Confirm_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE, _instance);
_instance->Main_States_Pairing_Confirm_State = MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE;
Main_send_Encrypter_CheckConfirm(_instance, _instance->Main_Sconfirm_var, Confirm);
Main_States_OnEntry(MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE, _instance);
Main_States_Pairing_Confirm_State_event_consumed = 1;
}
}
//End Region Confirm
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_Confirm_State_event_consumed ;
//End dsregion Confirm
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Encrypter_CheckConfirmCompleted(struct Main_Instance *_instance, uint8_t Correct) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_CONFIRM_STATE) {
//Region Confirm
uint8_t Main_States_Pairing_Confirm_State_event_consumed = 0;
//End Region Confirm
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_Confirm_State_event_consumed ;
//End dsregion Confirm
if (Main_States_Pairing_State_event_consumed == 0 && (Correct)) {
Main_States_OnExit(MAIN_STATES_PAIRING_CONFIRM_STATE, _instance);
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_ENCRYPT_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_ENCRYPT_STATE, _instance);
Main_States_Pairing_State_event_consumed = 1;
}
else if (Main_States_Pairing_State_event_consumed == 0 && ( !(Correct))) {
Main_States_OnExit(MAIN_STATES_PAIRING_CONFIRM_STATE, _instance);
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_PAIRFAILED_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_PAIRFAILED_STATE, _instance);
Main_States_Pairing_State_event_consumed = 1;
}
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Encrypter_GenerateRandomNumberCompleted(struct Main_Instance *_instance, ble_random_number_t Random) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_CONFIRM_STATE) {
//Region Confirm
uint8_t Main_States_Pairing_Confirm_State_event_consumed = 0;
if (_instance->Main_States_Pairing_Confirm_State == MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE) {
if (Main_States_Pairing_Confirm_State_event_consumed == 0 && 1) {
_instance->Main_Mrand_var = Random;
Main_send_Encrypter_GenerateConfirm(_instance, _instance->Main_Mrand_var, _instance->Main_DeviceAddressType_var, _instance->Main_DeviceAddress_var, _instance->Main_ConnectedAddressType_var, _instance->Main_ConnectedAddress_var);
Main_States_Pairing_Confirm_State_event_consumed = 1;
}
}
//End Region Confirm
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_Confirm_State_event_consumed ;
//End dsregion Confirm
}
else if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE) {
//Region ExchangeKeys
uint8_t Main_States_Pairing_ExchangeKeys_State_event_consumed = 0;
if (_instance->Main_States_Pairing_ExchangeKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE) {
//Region GenerateOwnKeys
uint8_t Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed = 0;
if (_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE) {
if (Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE, _instance);
_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE;
_instance->Main_OwnLTK_var = Random;
Main_States_OnEntry(MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE, _instance);
Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE) {
if (Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE, _instance);
_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE;
_instance->Main_OwnEDIV_var = *((uint16_t*)&Random.bytes[0]);
_instance->Main_OwnRandom_var = *((ble_random_part_t*)&Random.bytes[2]);
Main_States_OnEntry(MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE, _instance);
Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE) {
if (Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE, _instance);
_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_SENDALL_STATE;
_instance->Main_OwnIRK_var = Random;
Main_States_OnEntry(MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_SENDALL_STATE, _instance);
Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed = 1;
}
}
//End Region GenerateOwnKeys
Main_States_Pairing_ExchangeKeys_State_event_consumed = 0 | Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State_event_consumed ;
//End dsregion GenerateOwnKeys
}
//End Region ExchangeKeys
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_ExchangeKeys_State_event_consumed ;
//End dsregion ExchangeKeys
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Encrypter_GenerateSTKCompleted(struct Main_Instance *_instance, ble_random_number_t STK) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_ENCRYPT_STATE) {
if (Main_States_Pairing_State_event_consumed == 0 && 1) {
fprintf(stdout, "[INFO]: Generated STK.\n");
;ble_random_part_t Random = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
;uint16_t EDIV = 0;
Main_send_HCICommands_LEStartEncryption(_instance, _instance->Main_ConnectedHandle_var, Random, EDIV, STK);
Main_States_Pairing_State_event_consumed = 1;
}
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPPairingFailed(struct Main_Instance *_instance, uint16_t Handle, uint8_t Reason) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
if (Main_States_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Received pairing failed!\n");
Main_send_Connecter_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPMasterIdentification(struct Main_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE) {
//Region ExchangeKeys
uint8_t Main_States_Pairing_ExchangeKeys_State_event_consumed = 0;
if (_instance->Main_States_Pairing_ExchangeKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE) {
if (Main_States_Pairing_ExchangeKeys_State_event_consumed == 0 && 1) {
_instance->Main_PeerEDIV_var = EDIV;
_instance->Main_PeerRandom_var = Rand;
_instance->Main_HavePeerIdentification_var = 1;
Main_States_Pairing_ExchangeKeys_State_event_consumed = 1;
}
}
//End Region ExchangeKeys
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_ExchangeKeys_State_event_consumed ;
//End dsregion ExchangeKeys
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPPairingConfirm(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_CONFIRM_STATE) {
//Region Confirm
uint8_t Main_States_Pairing_Confirm_State_event_consumed = 0;
if (_instance->Main_States_Pairing_Confirm_State == MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE) {
if (Main_States_Pairing_Confirm_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE, _instance);
_instance->Main_States_Pairing_Confirm_State = MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE;
_instance->Main_Sconfirm_var = ConfirmValue;
fprintf(stdout, "[INFO]: Got Sconfirm, replied with Mrand.\n");
Main_send_SMP_SMPPairingRandom(_instance, _instance->Main_ConnectedHandle_var, _instance->Main_Mrand_var);
Main_States_OnEntry(MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE, _instance);
Main_States_Pairing_Confirm_State_event_consumed = 1;
}
}
//End Region Confirm
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_Confirm_State_event_consumed ;
//End dsregion Confirm
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPIdentityAddressInformation(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE) {
//Region ExchangeKeys
uint8_t Main_States_Pairing_ExchangeKeys_State_event_consumed = 0;
if (_instance->Main_States_Pairing_ExchangeKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE) {
if (Main_States_Pairing_ExchangeKeys_State_event_consumed == 0 && 1) {
_instance->Main_PeerIdentityAddressType_var = AddressType;
_instance->Main_PeerIdentityAddress_var = Address;
_instance->Main_HavePeerIdentityAddress_var = 1;
Main_States_Pairing_ExchangeKeys_State_event_consumed = 1;
}
}
//End Region ExchangeKeys
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_ExchangeKeys_State_event_consumed ;
//End dsregion ExchangeKeys
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPIdentityInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE) {
//Region ExchangeKeys
uint8_t Main_States_Pairing_ExchangeKeys_State_event_consumed = 0;
if (_instance->Main_States_Pairing_ExchangeKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE) {
if (Main_States_Pairing_ExchangeKeys_State_event_consumed == 0 && 1) {
_instance->Main_PeerIRK_var = IdentityResolvingKey;
_instance->Main_HavePeerIdentity_var = 1;
Main_States_Pairing_ExchangeKeys_State_event_consumed = 1;
}
}
//End Region ExchangeKeys
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_ExchangeKeys_State_event_consumed ;
//End dsregion ExchangeKeys
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPPairingRandom(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_CONFIRM_STATE) {
//Region Confirm
uint8_t Main_States_Pairing_Confirm_State_event_consumed = 0;
if (_instance->Main_States_Pairing_Confirm_State == MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE) {
if (Main_States_Pairing_Confirm_State_event_consumed == 0 && 1) {
_instance->Main_Srand_var = RandomValue;
fprintf(stdout, "[INFO]: Got Srand, confirming...\n");
Main_send_Encrypter_GenerateConfirm(_instance, _instance->Main_Srand_var, _instance->Main_DeviceAddressType_var, _instance->Main_DeviceAddress_var, _instance->Main_ConnectedAddressType_var, _instance->Main_ConnectedAddress_var);
Main_States_Pairing_Confirm_State_event_consumed = 1;
}
}
//End Region Confirm
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_Confirm_State_event_consumed ;
//End dsregion Confirm
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPSecurityRequest(struct Main_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_REQUEST_STATE) {
if (Main_States_Pairing_State_event_consumed == 0 && 1) {
fprintf(stdout, "[INFO]: Received Security request, requesting pairing...\n");
;uint8_t IOCapability = SMPIOCAPABILITIES_NO_INPUT_NO_OUTPUT;
;uint8_t OOBDataPresent = 0;
;uint8_t Bonding = 1;
;uint8_t MITM = 0;
;uint8_t SecureConnection = 0;
;uint8_t Keypress = 0;
;uint8_t MaximumEncryptionKeySize = 16;
;uint8_t InitiatorKeyDistribution = SMPKEYDISTRIBUTION_ENCKEY_IDKEY_NOSIGN_NOLINKKEY;
;uint8_t ResponderKeyDistribution = SMPKEYDISTRIBUTION_ENCKEY_IDKEY_NOSIGN_NOLINKKEY;
Main_send_SMP_SMPPairingRequest(_instance, _instance->Main_ConnectedHandle_var, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
Main_States_Pairing_State_event_consumed = 1;
}
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPPairingResponse(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_REQUEST_STATE) {
if (Main_States_Pairing_State_event_consumed == 0 && (IOCapability == SMPIOCAPABILITIES_NO_INPUT_NO_OUTPUT && OOBDataPresent == 0 && Bonding == 1 && MITM == 0 && SecureConnection == 0 && Keypress == 0 && MaximumEncryptionKeySize == 16 && InitiatorKeyDistribution == SMPKEYDISTRIBUTION_ENCKEY_IDKEY_NOSIGN_NOLINKKEY && ResponderKeyDistribution == SMPKEYDISTRIBUTION_ENCKEY_IDKEY_NOSIGN_NOLINKKEY)) {
Main_States_OnExit(MAIN_STATES_PAIRING_REQUEST_STATE, _instance);
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_CONFIRM_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_CONFIRM_STATE, _instance);
Main_States_Pairing_State_event_consumed = 1;
}
else if (Main_States_Pairing_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_PAIRING_REQUEST_STATE, _instance);
_instance->Main_States_Pairing_State = MAIN_STATES_PAIRING_PAIRFAILED_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_PAIRFAILED_STATE, _instance);
Main_States_Pairing_State_event_consumed = 1;
}
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_SMP_SMPEncryptionInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
if(!(_instance->active)) return;
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE) {
//Region ExchangeKeys
uint8_t Main_States_Pairing_ExchangeKeys_State_event_consumed = 0;
if (_instance->Main_States_Pairing_ExchangeKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE) {
if (Main_States_Pairing_ExchangeKeys_State_event_consumed == 0 && 1) {
_instance->Main_PeerLTK_var = LongTermKey;
_instance->Main_HavePeerLTK_var = 1;
Main_States_Pairing_ExchangeKeys_State_event_consumed = 1;
}
}
//End Region ExchangeKeys
Main_States_Pairing_State_event_consumed = 0 | Main_States_Pairing_ExchangeKeys_State_event_consumed ;
//End dsregion ExchangeKeys
}
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
}
//End Region States
//End dsregion States
//Session list: 
}
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
else if (_instance->Main_States_State == MAIN_STATES_CONNECT_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_send_Connecter_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
uint8_t Main_States_Pairing_State_event_consumed = 0;
//End Region Pairing
Main_States_State_event_consumed = 0 | Main_States_Pairing_State_event_consumed ;
//End dsregion Pairing
if (Main_States_State_event_consumed == 0 && 1) {
Main_send_Connecter_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_UNINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_UNINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
int Main_handle_empty_event(struct Main_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region States
if (_instance->Main_States_State == MAIN_STATES_PAIRING_STATE) {
//Region Pairing
if (_instance->Main_States_Pairing_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE) {
//Region ExchangeKeys
if (_instance->Main_States_Pairing_ExchangeKeys_State == MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE) {
if ((_instance->Main_HavePeerLTK_var && _instance->Main_HavePeerIdentification_var && _instance->Main_HavePeerIdentity_var && _instance->Main_HavePeerIdentityAddress_var)) {
Main_States_OnExit(MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE, _instance);
_instance->Main_States_Pairing_ExchangeKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE;
Main_States_OnEntry(MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE, _instance);
return 1;
}
}
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
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
void (*external_Main_send_Encrypter_Start_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Encrypter_Start_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Encrypter_Start_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Encrypter_Start_listener = _listener;
}
void register_Main_send_Encrypter_Start_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Encrypter_Start_listener = _listener;
}
void Main_send_Encrypter_Start(struct Main_Instance *_instance){
if (Main_send_Encrypter_Start_listener != 0x0) Main_send_Encrypter_Start_listener(_instance);
if (external_Main_send_Encrypter_Start_listener != 0x0) external_Main_send_Encrypter_Start_listener(_instance);
;
}
void (*external_Main_send_Encrypter_GenerateRandomNumber_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Encrypter_GenerateRandomNumber_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Encrypter_GenerateRandomNumber_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Encrypter_GenerateRandomNumber_listener = _listener;
}
void register_Main_send_Encrypter_GenerateRandomNumber_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Encrypter_GenerateRandomNumber_listener = _listener;
}
void Main_send_Encrypter_GenerateRandomNumber(struct Main_Instance *_instance){
if (Main_send_Encrypter_GenerateRandomNumber_listener != 0x0) Main_send_Encrypter_GenerateRandomNumber_listener(_instance);
if (external_Main_send_Encrypter_GenerateRandomNumber_listener != 0x0) external_Main_send_Encrypter_GenerateRandomNumber_listener(_instance);
;
}
void (*external_Main_send_Encrypter_GenerateConfirm_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t)= 0x0;
void (*Main_send_Encrypter_GenerateConfirm_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t)= 0x0;
void register_external_Main_send_Encrypter_GenerateConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t)){
external_Main_send_Encrypter_GenerateConfirm_listener = _listener;
}
void register_Main_send_Encrypter_GenerateConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t)){
Main_send_Encrypter_GenerateConfirm_listener = _listener;
}
void Main_send_Encrypter_GenerateConfirm(struct Main_Instance *_instance, ble_random_number_t Rand, uint8_t IAT, bdaddr_t IA, uint8_t RAT, bdaddr_t RA){
if (Main_send_Encrypter_GenerateConfirm_listener != 0x0) Main_send_Encrypter_GenerateConfirm_listener(_instance, Rand, IAT, IA, RAT, RA);
if (external_Main_send_Encrypter_GenerateConfirm_listener != 0x0) external_Main_send_Encrypter_GenerateConfirm_listener(_instance, Rand, IAT, IA, RAT, RA);
;
}
void (*external_Main_send_Encrypter_CheckConfirm_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*Main_send_Encrypter_CheckConfirm_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_Main_send_Encrypter_CheckConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)){
external_Main_send_Encrypter_CheckConfirm_listener = _listener;
}
void register_Main_send_Encrypter_CheckConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)){
Main_send_Encrypter_CheckConfirm_listener = _listener;
}
void Main_send_Encrypter_CheckConfirm(struct Main_Instance *_instance, ble_random_number_t Received, ble_random_number_t Calculated){
if (Main_send_Encrypter_CheckConfirm_listener != 0x0) Main_send_Encrypter_CheckConfirm_listener(_instance, Received, Calculated);
if (external_Main_send_Encrypter_CheckConfirm_listener != 0x0) external_Main_send_Encrypter_CheckConfirm_listener(_instance, Received, Calculated);
;
}
void (*external_Main_send_Encrypter_GenerateSTK_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*Main_send_Encrypter_GenerateSTK_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_Main_send_Encrypter_GenerateSTK_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)){
external_Main_send_Encrypter_GenerateSTK_listener = _listener;
}
void register_Main_send_Encrypter_GenerateSTK_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)){
Main_send_Encrypter_GenerateSTK_listener = _listener;
}
void Main_send_Encrypter_GenerateSTK(struct Main_Instance *_instance, ble_random_number_t Srand, ble_random_number_t Mrand){
if (Main_send_Encrypter_GenerateSTK_listener != 0x0) Main_send_Encrypter_GenerateSTK_listener(_instance, Srand, Mrand);
if (external_Main_send_Encrypter_GenerateSTK_listener != 0x0) external_Main_send_Encrypter_GenerateSTK_listener(_instance, Srand, Mrand);
;
}
void (*external_Main_send_Socket_Open_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Socket_Open_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Socket_Open_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Socket_Open_listener = _listener;
}
void register_Main_send_Socket_Open_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Socket_Open_listener = _listener;
}
void Main_send_Socket_Open(struct Main_Instance *_instance){
if (Main_send_Socket_Open_listener != 0x0) Main_send_Socket_Open_listener(_instance);
if (external_Main_send_Socket_Open_listener != 0x0) external_Main_send_Socket_Open_listener(_instance);
;
}
void (*external_Main_send_Socket_Close_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Socket_Close_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Socket_Close_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Socket_Close_listener = _listener;
}
void register_Main_send_Socket_Close_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Socket_Close_listener = _listener;
}
void Main_send_Socket_Close(struct Main_Instance *_instance){
if (Main_send_Socket_Close_listener != 0x0) Main_send_Socket_Close_listener(_instance);
if (external_Main_send_Socket_Close_listener != 0x0) external_Main_send_Socket_Close_listener(_instance);
;
}
void (*external_Main_send_HCICommands_Reset_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_HCICommands_Reset_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_HCICommands_Reset_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_HCICommands_Reset_listener = _listener;
}
void register_Main_send_HCICommands_Reset_listener(void (*_listener)(struct Main_Instance *)){
Main_send_HCICommands_Reset_listener = _listener;
}
void Main_send_HCICommands_Reset(struct Main_Instance *_instance){
if (Main_send_HCICommands_Reset_listener != 0x0) Main_send_HCICommands_Reset_listener(_instance);
if (external_Main_send_HCICommands_Reset_listener != 0x0) external_Main_send_HCICommands_Reset_listener(_instance);
;
}
void (*external_Main_send_HCICommands_SetEventMask_listener)(struct Main_Instance *, set_event_mask_cp)= 0x0;
void (*Main_send_HCICommands_SetEventMask_listener)(struct Main_Instance *, set_event_mask_cp)= 0x0;
void register_external_Main_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp)){
external_Main_send_HCICommands_SetEventMask_listener = _listener;
}
void register_Main_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp)){
Main_send_HCICommands_SetEventMask_listener = _listener;
}
void Main_send_HCICommands_SetEventMask(struct Main_Instance *_instance, set_event_mask_cp Mask){
if (Main_send_HCICommands_SetEventMask_listener != 0x0) Main_send_HCICommands_SetEventMask_listener(_instance, Mask);
if (external_Main_send_HCICommands_SetEventMask_listener != 0x0) external_Main_send_HCICommands_SetEventMask_listener(_instance, Mask);
;
}
void (*external_Main_send_HCICommands_SetEventMaskAll_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_HCICommands_SetEventMaskAll_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void register_Main_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Main_Instance *)){
Main_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void Main_send_HCICommands_SetEventMaskAll(struct Main_Instance *_instance){
if (Main_send_HCICommands_SetEventMaskAll_listener != 0x0) Main_send_HCICommands_SetEventMaskAll_listener(_instance);
if (external_Main_send_HCICommands_SetEventMaskAll_listener != 0x0) external_Main_send_HCICommands_SetEventMaskAll_listener(_instance);
;
}
void (*external_Main_send_HCICommands_SetLocalName_listener)(struct Main_Instance *, change_local_name_cp)= 0x0;
void (*Main_send_HCICommands_SetLocalName_listener)(struct Main_Instance *, change_local_name_cp)= 0x0;
void register_external_Main_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Main_Instance *, change_local_name_cp)){
external_Main_send_HCICommands_SetLocalName_listener = _listener;
}
void register_Main_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Main_Instance *, change_local_name_cp)){
Main_send_HCICommands_SetLocalName_listener = _listener;
}
void Main_send_HCICommands_SetLocalName(struct Main_Instance *_instance, change_local_name_cp Name){
if (Main_send_HCICommands_SetLocalName_listener != 0x0) Main_send_HCICommands_SetLocalName_listener(_instance, Name);
if (external_Main_send_HCICommands_SetLocalName_listener != 0x0) external_Main_send_HCICommands_SetLocalName_listener(_instance, Name);
;
}
void (*external_Main_send_HCICommands_Disconnect_listener)(struct Main_Instance *, uint16_t, uint8_t)= 0x0;
void (*Main_send_HCICommands_Disconnect_listener)(struct Main_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_HCICommands_Disconnect_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t)){
external_Main_send_HCICommands_Disconnect_listener = _listener;
}
void register_Main_send_HCICommands_Disconnect_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t)){
Main_send_HCICommands_Disconnect_listener = _listener;
}
void Main_send_HCICommands_Disconnect(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
if (Main_send_HCICommands_Disconnect_listener != 0x0) Main_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
if (external_Main_send_HCICommands_Disconnect_listener != 0x0) external_Main_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
;
}
void (*external_Main_send_HCICommands_SetLEEventMask_listener)(struct Main_Instance *, set_event_mask_cp)= 0x0;
void (*Main_send_HCICommands_SetLEEventMask_listener)(struct Main_Instance *, set_event_mask_cp)= 0x0;
void register_external_Main_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp)){
external_Main_send_HCICommands_SetLEEventMask_listener = _listener;
}
void register_Main_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp)){
Main_send_HCICommands_SetLEEventMask_listener = _listener;
}
void Main_send_HCICommands_SetLEEventMask(struct Main_Instance *_instance, set_event_mask_cp Mask){
if (Main_send_HCICommands_SetLEEventMask_listener != 0x0) Main_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
if (external_Main_send_HCICommands_SetLEEventMask_listener != 0x0) external_Main_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
;
}
void (*external_Main_send_HCICommands_SetLEEventMaskAll_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_HCICommands_SetLEEventMaskAll_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void register_Main_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Main_Instance *)){
Main_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void Main_send_HCICommands_SetLEEventMaskAll(struct Main_Instance *_instance){
if (Main_send_HCICommands_SetLEEventMaskAll_listener != 0x0) Main_send_HCICommands_SetLEEventMaskAll_listener(_instance);
if (external_Main_send_HCICommands_SetLEEventMaskAll_listener != 0x0) external_Main_send_HCICommands_SetLEEventMaskAll_listener(_instance);
;
}
void (*external_Main_send_HCICommands_SetLEAdvertisementParameters_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void (*Main_send_HCICommands_SetLEAdvertisementParameters_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void register_external_Main_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
external_Main_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void register_Main_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
Main_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void Main_send_HCICommands_SetLEAdvertisementParameters(struct Main_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
if (Main_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) Main_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
if (external_Main_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) external_Main_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
;
}
void (*external_Main_send_HCICommands_SetLEAdvertiseEnable_listener)(struct Main_Instance *, uint8_t)= 0x0;
void (*Main_send_HCICommands_SetLEAdvertiseEnable_listener)(struct Main_Instance *, uint8_t)= 0x0;
void register_external_Main_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t)){
external_Main_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void register_Main_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t)){
Main_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void Main_send_HCICommands_SetLEAdvertiseEnable(struct Main_Instance *_instance, uint8_t Enable){
if (Main_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) Main_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
if (external_Main_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) external_Main_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
;
}
void (*external_Main_send_HCICommands_SetLEAdvertisingData_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*Main_send_HCICommands_SetLEAdvertisingData_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_Main_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)){
external_Main_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void register_Main_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)){
Main_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void Main_send_HCICommands_SetLEAdvertisingData(struct Main_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (Main_send_HCICommands_SetLEAdvertisingData_listener != 0x0) Main_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
if (external_Main_send_HCICommands_SetLEAdvertisingData_listener != 0x0) external_Main_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
;
}
void (*external_Main_send_HCICommands_SetLEScanResponseData_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*Main_send_HCICommands_SetLEScanResponseData_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_Main_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)){
external_Main_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void register_Main_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t)){
Main_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void Main_send_HCICommands_SetLEScanResponseData(struct Main_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (Main_send_HCICommands_SetLEScanResponseData_listener != 0x0) Main_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
if (external_Main_send_HCICommands_SetLEScanResponseData_listener != 0x0) external_Main_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
;
}
void (*external_Main_send_HCICommands_SetLEScanParameters_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void (*Main_send_HCICommands_SetLEScanParameters_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void register_external_Main_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
external_Main_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void register_Main_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
Main_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void Main_send_HCICommands_SetLEScanParameters(struct Main_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
if (Main_send_HCICommands_SetLEScanParameters_listener != 0x0) Main_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
if (external_Main_send_HCICommands_SetLEScanParameters_listener != 0x0) external_Main_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
;
}
void (*external_Main_send_HCICommands_SetLEScanEnable_listener)(struct Main_Instance *, uint8_t, uint8_t)= 0x0;
void (*Main_send_HCICommands_SetLEScanEnable_listener)(struct Main_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_Main_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint8_t)){
external_Main_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void register_Main_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint8_t)){
Main_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void Main_send_HCICommands_SetLEScanEnable(struct Main_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
if (Main_send_HCICommands_SetLEScanEnable_listener != 0x0) Main_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
if (external_Main_send_HCICommands_SetLEScanEnable_listener != 0x0) external_Main_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
;
}
void (*external_Main_send_HCICommands_LECreateConnection_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void (*Main_send_HCICommands_LECreateConnection_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_Main_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
external_Main_send_HCICommands_LECreateConnection_listener = _listener;
}
void register_Main_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
Main_send_HCICommands_LECreateConnection_listener = _listener;
}
void Main_send_HCICommands_LECreateConnection(struct Main_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
if (Main_send_HCICommands_LECreateConnection_listener != 0x0) Main_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
if (external_Main_send_HCICommands_LECreateConnection_listener != 0x0) external_Main_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
;
}
void (*external_Main_send_HCICommands_LECreateConnectionCancel_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_HCICommands_LECreateConnectionCancel_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void register_Main_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Main_Instance *)){
Main_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void Main_send_HCICommands_LECreateConnectionCancel(struct Main_Instance *_instance){
if (Main_send_HCICommands_LECreateConnectionCancel_listener != 0x0) Main_send_HCICommands_LECreateConnectionCancel_listener(_instance);
if (external_Main_send_HCICommands_LECreateConnectionCancel_listener != 0x0) external_Main_send_HCICommands_LECreateConnectionCancel_listener(_instance);
;
}
void (*external_Main_send_HCICommands_LERand_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_HCICommands_LERand_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_HCICommands_LERand_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_HCICommands_LERand_listener = _listener;
}
void register_Main_send_HCICommands_LERand_listener(void (*_listener)(struct Main_Instance *)){
Main_send_HCICommands_LERand_listener = _listener;
}
void Main_send_HCICommands_LERand(struct Main_Instance *_instance){
if (Main_send_HCICommands_LERand_listener != 0x0) Main_send_HCICommands_LERand_listener(_instance);
if (external_Main_send_HCICommands_LERand_listener != 0x0) external_Main_send_HCICommands_LERand_listener(_instance);
;
}
void (*external_Main_send_HCICommands_LEEncrypt_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*Main_send_HCICommands_LEEncrypt_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_Main_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)){
external_Main_send_HCICommands_LEEncrypt_listener = _listener;
}
void register_Main_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t)){
Main_send_HCICommands_LEEncrypt_listener = _listener;
}
void Main_send_HCICommands_LEEncrypt(struct Main_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
if (Main_send_HCICommands_LEEncrypt_listener != 0x0) Main_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
if (external_Main_send_HCICommands_LEEncrypt_listener != 0x0) external_Main_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
;
}
void (*external_Main_send_HCICommands_LEStartEncryption_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void (*Main_send_HCICommands_LEStartEncryption_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void register_external_Main_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
external_Main_send_HCICommands_LEStartEncryption_listener = _listener;
}
void register_Main_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
Main_send_HCICommands_LEStartEncryption_listener = _listener;
}
void Main_send_HCICommands_LEStartEncryption(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
if (Main_send_HCICommands_LEStartEncryption_listener != 0x0) Main_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
if (external_Main_send_HCICommands_LEStartEncryption_listener != 0x0) external_Main_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
;
}
void (*external_Main_send_SMP_SMPPairingRequest_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Main_send_SMP_SMPPairingRequest_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Main_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_Main_send_SMP_SMPPairingRequest_listener = _listener;
}
void register_Main_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
Main_send_SMP_SMPPairingRequest_listener = _listener;
}
void Main_send_SMP_SMPPairingRequest(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (Main_send_SMP_SMPPairingRequest_listener != 0x0) Main_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_Main_send_SMP_SMPPairingRequest_listener != 0x0) external_Main_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_Main_send_SMP_SMPPairingResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Main_send_SMP_SMPPairingResponse_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Main_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_Main_send_SMP_SMPPairingResponse_listener = _listener;
}
void register_Main_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
Main_send_SMP_SMPPairingResponse_listener = _listener;
}
void Main_send_SMP_SMPPairingResponse(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (Main_send_SMP_SMPPairingResponse_listener != 0x0) Main_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_Main_send_SMP_SMPPairingResponse_listener != 0x0) external_Main_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_Main_send_SMP_SMPPairingConfirm_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Main_send_SMP_SMPPairingConfirm_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Main_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
external_Main_send_SMP_SMPPairingConfirm_listener = _listener;
}
void register_Main_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
Main_send_SMP_SMPPairingConfirm_listener = _listener;
}
void Main_send_SMP_SMPPairingConfirm(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
if (Main_send_SMP_SMPPairingConfirm_listener != 0x0) Main_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
if (external_Main_send_SMP_SMPPairingConfirm_listener != 0x0) external_Main_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
;
}
void (*external_Main_send_SMP_SMPPairingRandom_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Main_send_SMP_SMPPairingRandom_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Main_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
external_Main_send_SMP_SMPPairingRandom_listener = _listener;
}
void register_Main_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
Main_send_SMP_SMPPairingRandom_listener = _listener;
}
void Main_send_SMP_SMPPairingRandom(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
if (Main_send_SMP_SMPPairingRandom_listener != 0x0) Main_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
if (external_Main_send_SMP_SMPPairingRandom_listener != 0x0) external_Main_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
;
}
void (*external_Main_send_SMP_SMPPairingFailed_listener)(struct Main_Instance *, uint16_t, uint8_t)= 0x0;
void (*Main_send_SMP_SMPPairingFailed_listener)(struct Main_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t)){
external_Main_send_SMP_SMPPairingFailed_listener = _listener;
}
void register_Main_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t)){
Main_send_SMP_SMPPairingFailed_listener = _listener;
}
void Main_send_SMP_SMPPairingFailed(struct Main_Instance *_instance, uint16_t Handle, uint8_t Reason){
if (Main_send_SMP_SMPPairingFailed_listener != 0x0) Main_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
if (external_Main_send_SMP_SMPPairingFailed_listener != 0x0) external_Main_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
;
}
void (*external_Main_send_SMP_SMPPairingPublicKey_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void (*Main_send_SMP_SMPPairingPublicKey_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void register_external_Main_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
external_Main_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void register_Main_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
Main_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void Main_send_SMP_SMPPairingPublicKey(struct Main_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
if (Main_send_SMP_SMPPairingPublicKey_listener != 0x0) Main_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
if (external_Main_send_SMP_SMPPairingPublicKey_listener != 0x0) external_Main_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
;
}
void (*external_Main_send_SMP_SMPPairingDHKeyCheck_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Main_send_SMP_SMPPairingDHKeyCheck_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Main_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
external_Main_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void register_Main_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
Main_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void Main_send_SMP_SMPPairingDHKeyCheck(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
if (Main_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) Main_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
if (external_Main_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) external_Main_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
;
}
void (*external_Main_send_SMP_SMPKeypressNotification_listener)(struct Main_Instance *, uint16_t, uint8_t)= 0x0;
void (*Main_send_SMP_SMPKeypressNotification_listener)(struct Main_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_Main_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t)){
external_Main_send_SMP_SMPKeypressNotification_listener = _listener;
}
void register_Main_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t)){
Main_send_SMP_SMPKeypressNotification_listener = _listener;
}
void Main_send_SMP_SMPKeypressNotification(struct Main_Instance *_instance, uint16_t Handle, uint8_t Type){
if (Main_send_SMP_SMPKeypressNotification_listener != 0x0) Main_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
if (external_Main_send_SMP_SMPKeypressNotification_listener != 0x0) external_Main_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
;
}
void (*external_Main_send_SMP_SMPEncryptionInformation_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Main_send_SMP_SMPEncryptionInformation_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Main_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
external_Main_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void register_Main_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
Main_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void Main_send_SMP_SMPEncryptionInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
if (Main_send_SMP_SMPEncryptionInformation_listener != 0x0) Main_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
if (external_Main_send_SMP_SMPEncryptionInformation_listener != 0x0) external_Main_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
;
}
void (*external_Main_send_SMP_SMPMasterIdentification_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void (*Main_send_SMP_SMPMasterIdentification_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_Main_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t)){
external_Main_send_SMP_SMPMasterIdentification_listener = _listener;
}
void register_Main_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t)){
Main_send_SMP_SMPMasterIdentification_listener = _listener;
}
void Main_send_SMP_SMPMasterIdentification(struct Main_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
if (Main_send_SMP_SMPMasterIdentification_listener != 0x0) Main_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
if (external_Main_send_SMP_SMPMasterIdentification_listener != 0x0) external_Main_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
;
}
void (*external_Main_send_SMP_SMPIdentityInformation_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Main_send_SMP_SMPIdentityInformation_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Main_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
external_Main_send_SMP_SMPIdentityInformation_listener = _listener;
}
void register_Main_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
Main_send_SMP_SMPIdentityInformation_listener = _listener;
}
void Main_send_SMP_SMPIdentityInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
if (Main_send_SMP_SMPIdentityInformation_listener != 0x0) Main_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
if (external_Main_send_SMP_SMPIdentityInformation_listener != 0x0) external_Main_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
;
}
void (*external_Main_send_SMP_SMPIdentityAddressInformation_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*Main_send_SMP_SMPIdentityAddressInformation_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_Main_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_Main_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void register_Main_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t)){
Main_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void Main_send_SMP_SMPIdentityAddressInformation(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
if (Main_send_SMP_SMPIdentityAddressInformation_listener != 0x0) Main_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
if (external_Main_send_SMP_SMPIdentityAddressInformation_listener != 0x0) external_Main_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_Main_send_SMP_SMPSigningInformation_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Main_send_SMP_SMPSigningInformation_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Main_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
external_Main_send_SMP_SMPSigningInformation_listener = _listener;
}
void register_Main_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t)){
Main_send_SMP_SMPSigningInformation_listener = _listener;
}
void Main_send_SMP_SMPSigningInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
if (Main_send_SMP_SMPSigningInformation_listener != 0x0) Main_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
if (external_Main_send_SMP_SMPSigningInformation_listener != 0x0) external_Main_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
;
}
void (*external_Main_send_SMP_SMPSecurityRequest_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Main_send_SMP_SMPSecurityRequest_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Main_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_Main_send_SMP_SMPSecurityRequest_listener = _listener;
}
void register_Main_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
Main_send_SMP_SMPSecurityRequest_listener = _listener;
}
void Main_send_SMP_SMPSecurityRequest(struct Main_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
if (Main_send_SMP_SMPSecurityRequest_listener != 0x0) Main_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
if (external_Main_send_SMP_SMPSecurityRequest_listener != 0x0) external_Main_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
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



