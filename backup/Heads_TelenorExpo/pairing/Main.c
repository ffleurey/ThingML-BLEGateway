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

  void print_bytes(uint8_t *data, int16_t length) {
    printf("{ ");

    int16_t i;
    for (i = 0; i < length; i++) printf("0x%2.2X, ",data[i]);

    printf("};\n");
  }

// END: Code from the c_global annotation Main

// Declaration of prototypes:
//Prototypes: State Machine
void Main_States_OnExit(int state, struct Main_Instance *_instance);
//Prototypes: Message Sending
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code);
void Main_send_Initialiser_Start(struct Main_Instance *_instance);
void Main_send_Initialiser_Stop(struct Main_Instance *_instance);
void Main_send_Connecter_Connect(struct Main_Instance *_instance);
void Main_send_Connecter_ConnectTo(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void Main_send_Connecter_Stop(struct Main_Instance *_instance);
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
//Prototypes: Function
ble_uuid_t f_Main_ReadUUID(struct Main_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_Main_MakeUUID(struct Main_Instance *_instance, const char * Text);
void f_Main_PrintUUID(struct Main_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
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
case MAIN_STATES_PAIRING_CONFIRM_STATE:{
_instance->Main_States_Pairing_Confirm_State = MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE;
Main_States_OnEntry(_instance->Main_States_Pairing_Confirm_State, _instance);
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
case MAIN_STATES_INITIALISE_STATE:{
Main_send_Initialiser_Start(_instance);
break;
}
case MAIN_STATES_SETSCANNINGPARAMETERS_STATE:{
fprintf(stdout, "[INFO]: Setting scan parameters...\n");
;uint8_t Type = BLESCANTYPE_ACTIVE;
;int16_t Interval = 0x0010;
;int16_t Window = 0x0010;
;uint8_t OwnAddressType = BLEADDRESSTYPE_PUBLIC;
;uint8_t FilterPolicy = BLESCANFILTERPOLICY_ALL;
Main_send_HCICommands_SetLEScanParameters(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
break;
}
case MAIN_STATES_SCANNING_STATE:{
fprintf(stdout, "[INFO]: Scanning...\n");
break;
}
case MAIN_STATES_CONNECT_STATE:{
Main_send_Connecter_ConnectTo(_instance, BLEADDRESSTYPE_PUBLIC, _instance->Main_PerhiperalAddress_var);
break;
}
case MAIN_STATES_TIMESYNC_STATE:{
fprintf(stdout, "[INFO]: Synchronizing the time...\n");
;ble_gatt_data_t AttributeValue;

          time_t utc = time(NULL);
          struct tm *ptm = gmtime(&utc);
        

          AttributeValue.length = 7;
          *((uint16_t*)&AttributeValue.bytes[0]) = ptm->tm_year+1900;
          *((uint8_t*)&AttributeValue.bytes[2]) = ptm->tm_mon+1;
          *((uint8_t*)&AttributeValue.bytes[3]) = ptm->tm_mday;
          *((uint8_t*)&AttributeValue.bytes[4]) = ptm->tm_hour+1;
          *((uint8_t*)&AttributeValue.bytes[5]) = ptm->tm_min;
          *((uint8_t*)&AttributeValue.bytes[6]) = ptm->tm_sec;
        
Main_send_ATT_ATTWriteRequest(_instance, _instance->Main_ConnectedHandle_var, 0x0017, AttributeValue);
break;
}
case MAIN_STATES_UNINITIALISE_STATE:{
Main_send_Initialiser_Stop(_instance);
break;
}
case MAIN_STATES_FAILED_STATE:{
fprintf(stdout, "[ERROR]: Failed, quitting... !!!\n");
Main_send_Signals_Quit(_instance, 1);
break;
}
case MAIN_STATES_QUIT_STATE:{
fprintf(stdout, "[INFO]: Finished, quitting...\n");
if(_instance->Main_HasPairedSuccessfully_var) {
fprintf(stdout, "\n\n\nPairing was successfull! Please note the following values and use for later connection:\n\n");
fprintf(stdout, "\tPeer address : ");

            char adr_str[18];
            ba2str(&_instance->Main_PerhiperalAddress_var, adr_str);
            printf("%s\n\n", adr_str);
          
fprintf(stdout, "\tble_random_number_t peer_ltk = ");
print_bytes((uint8_t*)&(_instance->Main_PeerLTK_var), 16);
fprintf(stdout, "\tuint16_t peer_ediv = ");
printf("0x%4.4X;\n", _instance->Main_PeerEDIV_var);
fprintf(stdout, "\tble_random_part_t peer_random = ");
print_bytes((uint8_t*)&(_instance->Main_PeerRandom_var), 8);
fprintf(stdout, "\n");

}
Main_send_Signals_Quit(_instance, 0);
break;
}
case MAIN_STATES_PAIRING_REQUEST_STATE:{
break;
}
case MAIN_STATES_PAIRING_ENCRYPT_STATE:{
fprintf(stdout, "[INFO]: Encrypting connection ...\n");
Main_send_Encrypter_GenerateSTK(_instance, _instance->Main_Srand_var, _instance->Main_Mrand_var);
break;
}
case MAIN_STATES_PAIRING_PAIRFAILED_STATE:{
fprintf(stdout, "[ERROR]: Pairing procedure failed.\n");
Main_send_Connecter_Stop(_instance);
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
case MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE:{
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE:{
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE:{
Main_send_Encrypter_GenerateRandomNumber(_instance);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE:{
Main_send_Encrypter_GenerateRandomNumber(_instance);
break;
}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE:{
Main_send_Encrypter_GenerateRandomNumber(_instance);
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
case MAIN_STATES_PAIRING_CONFIRM_STATE:{
Main_States_OnExit(_instance->Main_States_Pairing_Confirm_State, _instance);
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE:{
Main_States_OnExit(_instance->Main_States_Pairing_ExchangeKeys_State, _instance);
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE:{
Main_States_OnExit(_instance->Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State, _instance);
break;}
case MAIN_STATES_INITIALISE_STATE:{
break;}
case MAIN_STATES_SETSCANNINGPARAMETERS_STATE:{
break;}
case MAIN_STATES_SCANNING_STATE:{
break;}
case MAIN_STATES_CONNECT_STATE:{
break;}
case MAIN_STATES_TIMESYNC_STATE:{
break;}
case MAIN_STATES_UNINITIALISE_STATE:{
break;}
case MAIN_STATES_FAILED_STATE:{
break;}
case MAIN_STATES_QUIT_STATE:{
break;}
case MAIN_STATES_PAIRING_REQUEST_STATE:{
break;}
case MAIN_STATES_PAIRING_ENCRYPT_STATE:{
break;}
case MAIN_STATES_PAIRING_PAIRFAILED_STATE:{
break;}
case MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE:{
break;}
case MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE:{
break;}
case MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE:{
break;}
case MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_SENDALL_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Main_handle_ATT_ATTWriteResponse(struct Main_Instance *_instance, uint16_t ConnectionHandle) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_TIMESYNC_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
fprintf(stdout, "[INFO]: Time synchronization successfull!\n");
Main_send_Connecter_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_ATT_ATTWriteError(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_TIMESYNC_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Time synchronization failed. Error code: ");
printf("%2.2X", Error);
fprintf(stdout, "!!\n");
Main_send_Connecter_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Stopped(struct Main_Instance *_instance) {
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
else if (_instance->Main_States_State == MAIN_STATES_TIMESYNC_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_TIMESYNC_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_UNINITIALISE_STATE;
Main_States_OnEntry(MAIN_STATES_UNINITIALISE_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Connecter_Failure(struct Main_Instance *_instance) {
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
else if (_instance->Main_States_State == MAIN_STATES_TIMESYNC_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_TIMESYNC_STATE, _instance);
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
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance) {
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
void Main_handle_Initialiser_DeviceInitialised(struct Main_Instance *_instance, bdaddr_t Address) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_SETSCANNINGPARAMETERS_STATE;
_instance->Main_DeviceAddress_var = Address;
Main_States_OnEntry(MAIN_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_Failure(struct Main_Instance *_instance) {
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
void Main_handle_SMP_SMPPairingFailed(struct Main_Instance *_instance, uint16_t Handle, uint8_t Reason) {
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
void Main_handle_SMP_SMPPairingConfirm(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
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
void Main_handle_SMP_SMPMasterIdentification(struct Main_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
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
void Main_handle_SMP_SMPPairingResponse(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
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
void Main_handle_SMP_SMPSecurityRequest(struct Main_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
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
void Main_handle_SMP_SMPEncryptionInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
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
void Main_handle_SMP_SMPIdentityInformation(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
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
void Main_handle_SMP_SMPIdentityAddressInformation(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
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
void Main_handle_SMP_SMPPairingRandom(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
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
void Main_handle_Signals_Interrupt(struct Main_Instance *_instance) {
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
else if (_instance->Main_States_State == MAIN_STATES_SCANNING_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
_instance->Main_Stopped_var = 1;
Main_send_HCICommands_SetLEScanEnable(_instance, 0x00, 0x00);
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
else if (_instance->Main_States_State == MAIN_STATES_TIMESYNC_STATE) {
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
void Main_handle_Encrypter_CheckConfirmCompleted(struct Main_Instance *_instance, uint8_t Correct) {
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
void Main_handle_Encrypter_GenerateSTKCompleted(struct Main_Instance *_instance, ble_random_number_t STK) {
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
void Main_handle_Encrypter_GenerateConfirmCompleted(struct Main_Instance *_instance, ble_random_number_t Confirm) {
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
void Main_handle_Encrypter_GenerateRandomNumberCompleted(struct Main_Instance *_instance, ble_random_number_t Random) {
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
void Main_handle_HCIEvents_SetLEScanEnableCompleted(struct Main_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_SETSCANNINGPARAMETERS_STATE) {
if (Main_States_State_event_consumed == 0 && (Status == 0)) {
Main_States_OnExit(MAIN_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_SCANNING_STATE;
Main_States_OnEntry(MAIN_STATES_SCANNING_STATE, _instance);
Main_States_State_event_consumed = 1;
}
else if (Main_States_State_event_consumed == 0 && (Status > 0)) {
Main_States_OnExit(MAIN_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_SCANNING_STATE) {
if (Main_States_State_event_consumed == 0 && (Status == 0 &&  !(_instance->Main_Stopped_var))) {
Main_States_OnExit(MAIN_STATES_SCANNING_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_CONNECT_STATE;
Main_States_OnEntry(MAIN_STATES_CONNECT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
else if (Main_States_State_event_consumed == 0 && (Status == 0 && _instance->Main_Stopped_var)) {
Main_States_OnExit(MAIN_STATES_SCANNING_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_UNINITIALISE_STATE;
Main_States_OnEntry(MAIN_STATES_UNINITIALISE_STATE, _instance);
Main_States_State_event_consumed = 1;
}
else if (Main_States_State_event_consumed == 0 && (Status > 0)) {
Main_States_OnExit(MAIN_STATES_SCANNING_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_HCIEvents_EncryptionChanged(struct Main_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
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
void Main_handle_HCIEvents_SetLEScanParametersCompleted(struct Main_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_SETSCANNINGPARAMETERS_STATE) {
if (Main_States_State_event_consumed == 0 && (Status > 0)) {
Main_States_OnExit(MAIN_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
else if (Main_States_State_event_consumed == 0 && (Status == 0)) {
Main_send_HCICommands_SetLEScanEnable(_instance, 0x01, 0x00);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_HCIEvents_LEStartEncryptionStatus(struct Main_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
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
void Main_handle_HCIEvents_LEAdvertisementReport(struct Main_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_SCANNING_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
if(Address.b[5] == 0x5C && Address.b[4] == 0x31 && Address.b[3] == 0x3E) {
fprintf(stdout, "[INFO]: Got advertisement report!\n");
_instance->Main_PerhiperalAddress_var = Address;
Main_send_HCICommands_SetLEScanEnable(_instance, 0x00, 0x00);

} else {
if(Address.b[5] == 0x84 && Address.b[4] == 0xEB && Address.b[3] == 0x18) {
fprintf(stdout, "[INFO]: Got advertisement report!\n");
_instance->Main_PerhiperalAddress_var = Address;
Main_send_HCICommands_SetLEScanEnable(_instance, 0x00, 0x00);

}

}
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
int Main_handle_empty_event(struct Main_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
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
if ((_instance->Main_HasPairedSuccessfully_var)) {
Main_States_OnExit(MAIN_STATES_PAIRING_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_TIMESYNC_STATE;
Main_States_OnEntry(MAIN_STATES_TIMESYNC_STATE, _instance);
return 1;
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
void (*external_Main_send_Connecter_ConnectTo_listener)(struct Main_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*Main_send_Connecter_ConnectTo_listener)(struct Main_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t)){
external_Main_send_Connecter_ConnectTo_listener = _listener;
}
void register_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t)){
Main_send_Connecter_ConnectTo_listener = _listener;
}
void Main_send_Connecter_ConnectTo(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (Main_send_Connecter_ConnectTo_listener != 0x0) Main_send_Connecter_ConnectTo_listener(_instance, AddressType, Address);
if (external_Main_send_Connecter_ConnectTo_listener != 0x0) external_Main_send_Connecter_ConnectTo_listener(_instance, AddressType, Address);
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


// Enqueue incoming messages:
// Message enqueue
void enqueue_Main_Signals_Interrupt(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (81 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 81 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (82 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 82 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (83 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 83 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_DeviceInitialised(struct Main_Instance * inst, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 10 ) {

        _fifo_enqueue(&(inst->fifo), (84 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 84 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Connecter_Connected(struct Main_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 13 ) {

        _fifo_enqueue(&(inst->fifo), (85 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 85 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(&(inst->fifo), u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Connecter_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (82 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 82 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Connecter_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (83 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 83 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPPairingResponse(struct Main_Instance * inst, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 15 ) {

        _fifo_enqueue(&(inst->fifo), (27 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 27 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(&(inst->fifo), u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(&(inst->fifo), u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(&(inst->fifo), u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(&(inst->fifo), u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(&(inst->fifo), u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(&(inst->fifo), u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(&(inst->fifo), u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(&(inst->fifo), u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(&(inst->fifo), u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPPairingConfirm(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t ConfirmValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (28 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 28 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter ConfirmValue
union u_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_ConfirmValue;
u_ConfirmValue.p = ConfirmValue;
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPPairingRandom(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t RandomValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (29 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 29 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter RandomValue
union u_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_RandomValue;
u_RandomValue.p = RandomValue;
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPPairingFailed(struct Main_Instance * inst, uint16_t Handle, uint8_t Reason) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 7 ) {

        _fifo_enqueue(&(inst->fifo), (30 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 30 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(&(inst->fifo), u_Reason.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPEncryptionInformation(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t LongTermKey) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (34 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 34 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPMasterIdentification(struct Main_Instance * inst, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 16 ) {

        _fifo_enqueue(&(inst->fifo), (35 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 35 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(&(inst->fifo), u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_EDIV.bytebuffer[0] & 0xFF );

// parameter Rand
union u_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Rand;
u_Rand.p = Rand;
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPIdentityInformation(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (36 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 36 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter IdentityResolvingKey
union u_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_IdentityResolvingKey;
u_IdentityResolvingKey.p = IdentityResolvingKey;
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPIdentityAddressInformation(struct Main_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 13 ) {

        _fifo_enqueue(&(inst->fifo), (37 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 37 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(&(inst->fifo), u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_SMP_SMPSecurityRequest(struct Main_Instance * inst, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 10 ) {

        _fifo_enqueue(&(inst->fifo), (39 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 39 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(&(inst->fifo), u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(&(inst->fifo), u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(&(inst->fifo), u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(&(inst->fifo), u_Keypress.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_ATT_ATTWriteResponse(struct Main_Instance * inst, uint16_t ConnectionHandle) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (53 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 53 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_ATT_ATTWriteError(struct Main_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (54 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 54 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Encrypter_GenerateRandomNumberCompleted(struct Main_Instance * inst, ble_random_number_t Random) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 20 ) {

        _fifo_enqueue(&(inst->fifo), (86 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 86 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

// parameter Random
union u_Random_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Random;
u_Random.p = Random;
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Encrypter_GenerateConfirmCompleted(struct Main_Instance * inst, ble_random_number_t Confirm) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 20 ) {

        _fifo_enqueue(&(inst->fifo), (87 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 87 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

// parameter Confirm
union u_Confirm_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Confirm;
u_Confirm.p = Confirm;
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Confirm.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Encrypter_CheckConfirmCompleted(struct Main_Instance * inst, uint8_t Correct) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 5 ) {

        _fifo_enqueue(&(inst->fifo), (88 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 88 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

// parameter Correct
union u_Correct_t {
uint8_t p;
byte bytebuffer[1];
} u_Correct;
u_Correct.p = Correct;
_fifo_enqueue(&(inst->fifo), u_Correct.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Encrypter_GenerateSTKCompleted(struct Main_Instance * inst, ble_random_number_t STK) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 20 ) {

        _fifo_enqueue(&(inst->fifo), (89 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 89 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

// parameter STK
union u_STK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_STK;
u_STK.p = STK;
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_STK.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_HCIEvents_SetLEScanParametersCompleted(struct Main_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (15 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 15 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(&(inst->fifo), u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_HCIEvents_SetLEScanEnableCompleted(struct Main_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (16 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 16 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(&(inst->fifo), u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_HCIEvents_LEAdvertisementReport(struct Main_Instance * inst, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 44 ) {

        _fifo_enqueue(&(inst->fifo), (17 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 17 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(&(inst->fifo), u_Type.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(&(inst->fifo), u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(&(inst->fifo), u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_HCIEvents_EncryptionChanged(struct Main_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 8 ) {

        _fifo_enqueue(&(inst->fifo), (24 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 24 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Enabled
union u_Enabled_t {
uint8_t p;
byte bytebuffer[1];
} u_Enabled;
u_Enabled.p = Enabled;
_fifo_enqueue(&(inst->fifo), u_Enabled.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_HCIEvents_LEStartEncryptionStatus(struct Main_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (25 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 25 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(&(inst->fifo), u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}

// Session functions:

// Message Process Queue:
int Main_processMessageQueue(struct Main_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
case 81:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Interrupt = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
Main_handle_Signals_Interrupt(_instance);
return 1;
break;
}
}
break;
}
case 90:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Started = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 82:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Stopped = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_Initialiser_Stopped(_instance);
return 1;
break;
}
case 2:{
Main_handle_Connecter_Stopped(_instance);
return 1;
break;
}
}
break;
}
case 83:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Failure = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_Initialiser_Failure(_instance);
return 1;
break;
}
case 2:{
Main_handle_Connecter_Failure(_instance);
return 1;
break;
}
}
break;
}
case 84:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_DeviceInitialised = 2;
union u_DeviceInitialised_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_DeviceInitialised_Address;
u_DeviceInitialised_Address.bytebuffer[5] = mbuf[mbufi_DeviceInitialised + 0];
u_DeviceInitialised_Address.bytebuffer[4] = mbuf[mbufi_DeviceInitialised + 1];
u_DeviceInitialised_Address.bytebuffer[3] = mbuf[mbufi_DeviceInitialised + 2];
u_DeviceInitialised_Address.bytebuffer[2] = mbuf[mbufi_DeviceInitialised + 3];
u_DeviceInitialised_Address.bytebuffer[1] = mbuf[mbufi_DeviceInitialised + 4];
u_DeviceInitialised_Address.bytebuffer[0] = mbuf[mbufi_DeviceInitialised + 5];
mbufi_DeviceInitialised += 6;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_Initialiser_DeviceInitialised(_instance,
 u_DeviceInitialised_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 85:{
byte mbuf[13 - 2];
while (mbufi < (13 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Connected = 2;
union u_Connected_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Connected_Handle;
u_Connected_Handle.bytebuffer[1] = mbuf[mbufi_Connected + 0];
u_Connected_Handle.bytebuffer[0] = mbuf[mbufi_Connected + 1];
mbufi_Connected += 2;
union u_Connected_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_Connected_AddressType;
u_Connected_AddressType.bytebuffer[0] = mbuf[mbufi_Connected + 0];
mbufi_Connected += 1;
union u_Connected_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Connected_Address;
u_Connected_Address.bytebuffer[5] = mbuf[mbufi_Connected + 0];
u_Connected_Address.bytebuffer[4] = mbuf[mbufi_Connected + 1];
u_Connected_Address.bytebuffer[3] = mbuf[mbufi_Connected + 2];
u_Connected_Address.bytebuffer[2] = mbuf[mbufi_Connected + 3];
u_Connected_Address.bytebuffer[1] = mbuf[mbufi_Connected + 4];
u_Connected_Address.bytebuffer[0] = mbuf[mbufi_Connected + 5];
mbufi_Connected += 6;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
Main_handle_Connecter_Connected(_instance,
 u_Connected_Handle.p /* Handle */ ,
 u_Connected_AddressType.p /* AddressType */ ,
 u_Connected_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 26:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingRequest = 2;
union u_SMPPairingRequest_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingRequest_Handle;
u_SMPPairingRequest_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingRequest + 0];
u_SMPPairingRequest_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 1];
mbufi_SMPPairingRequest += 2;
union u_SMPPairingRequest_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_IOCapability;
u_SMPPairingRequest_IOCapability.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_OOBDataPresent;
u_SMPPairingRequest_OOBDataPresent.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_Bonding;
u_SMPPairingRequest_Bonding.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_MITM;
u_SMPPairingRequest_MITM.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_SecureConnection;
u_SMPPairingRequest_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_Keypress;
u_SMPPairingRequest_Keypress.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_MaximumEncryptionKeySize;
u_SMPPairingRequest_MaximumEncryptionKeySize.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_InitiatorKeyDistribution;
u_SMPPairingRequest_InitiatorKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_ResponderKeyDistribution;
u_SMPPairingRequest_ResponderKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 27:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingResponse = 2;
union u_SMPPairingResponse_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingResponse_Handle;
u_SMPPairingResponse_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingResponse + 0];
u_SMPPairingResponse_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 1];
mbufi_SMPPairingResponse += 2;
union u_SMPPairingResponse_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_IOCapability;
u_SMPPairingResponse_IOCapability.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_OOBDataPresent;
u_SMPPairingResponse_OOBDataPresent.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_Bonding;
u_SMPPairingResponse_Bonding.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_MITM;
u_SMPPairingResponse_MITM.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_SecureConnection;
u_SMPPairingResponse_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_Keypress;
u_SMPPairingResponse_Keypress.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_MaximumEncryptionKeySize;
u_SMPPairingResponse_MaximumEncryptionKeySize.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_InitiatorKeyDistribution;
u_SMPPairingResponse_InitiatorKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_ResponderKeyDistribution;
u_SMPPairingResponse_ResponderKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPPairingResponse(_instance,
 u_SMPPairingResponse_Handle.p /* Handle */ ,
 u_SMPPairingResponse_IOCapability.p /* IOCapability */ ,
 u_SMPPairingResponse_OOBDataPresent.p /* OOBDataPresent */ ,
 u_SMPPairingResponse_Bonding.p /* Bonding */ ,
 u_SMPPairingResponse_MITM.p /* MITM */ ,
 u_SMPPairingResponse_SecureConnection.p /* SecureConnection */ ,
 u_SMPPairingResponse_Keypress.p /* Keypress */ ,
 u_SMPPairingResponse_MaximumEncryptionKeySize.p /* MaximumEncryptionKeySize */ ,
 u_SMPPairingResponse_InitiatorKeyDistribution.p /* InitiatorKeyDistribution */ ,
 u_SMPPairingResponse_ResponderKeyDistribution.p /* ResponderKeyDistribution */ );
return 1;
break;
}
}
break;
}
case 28:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingConfirm = 2;
union u_SMPPairingConfirm_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingConfirm_Handle;
u_SMPPairingConfirm_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingConfirm + 0];
u_SMPPairingConfirm_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingConfirm + 1];
mbufi_SMPPairingConfirm += 2;
union u_SMPPairingConfirm_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingConfirm_ConfirmValue;
u_SMPPairingConfirm_ConfirmValue.bytebuffer[15] = mbuf[mbufi_SMPPairingConfirm + 0];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[14] = mbuf[mbufi_SMPPairingConfirm + 1];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[13] = mbuf[mbufi_SMPPairingConfirm + 2];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[12] = mbuf[mbufi_SMPPairingConfirm + 3];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[11] = mbuf[mbufi_SMPPairingConfirm + 4];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[10] = mbuf[mbufi_SMPPairingConfirm + 5];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[9] = mbuf[mbufi_SMPPairingConfirm + 6];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[8] = mbuf[mbufi_SMPPairingConfirm + 7];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[7] = mbuf[mbufi_SMPPairingConfirm + 8];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[6] = mbuf[mbufi_SMPPairingConfirm + 9];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[5] = mbuf[mbufi_SMPPairingConfirm + 10];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[4] = mbuf[mbufi_SMPPairingConfirm + 11];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[3] = mbuf[mbufi_SMPPairingConfirm + 12];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[2] = mbuf[mbufi_SMPPairingConfirm + 13];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[1] = mbuf[mbufi_SMPPairingConfirm + 14];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[0] = mbuf[mbufi_SMPPairingConfirm + 15];
mbufi_SMPPairingConfirm += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPPairingConfirm(_instance,
 u_SMPPairingConfirm_Handle.p /* Handle */ ,
 u_SMPPairingConfirm_ConfirmValue.p /* ConfirmValue */ );
return 1;
break;
}
}
break;
}
case 29:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingRandom = 2;
union u_SMPPairingRandom_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingRandom_Handle;
u_SMPPairingRandom_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingRandom + 0];
u_SMPPairingRandom_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingRandom + 1];
mbufi_SMPPairingRandom += 2;
union u_SMPPairingRandom_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingRandom_RandomValue;
u_SMPPairingRandom_RandomValue.bytebuffer[15] = mbuf[mbufi_SMPPairingRandom + 0];
u_SMPPairingRandom_RandomValue.bytebuffer[14] = mbuf[mbufi_SMPPairingRandom + 1];
u_SMPPairingRandom_RandomValue.bytebuffer[13] = mbuf[mbufi_SMPPairingRandom + 2];
u_SMPPairingRandom_RandomValue.bytebuffer[12] = mbuf[mbufi_SMPPairingRandom + 3];
u_SMPPairingRandom_RandomValue.bytebuffer[11] = mbuf[mbufi_SMPPairingRandom + 4];
u_SMPPairingRandom_RandomValue.bytebuffer[10] = mbuf[mbufi_SMPPairingRandom + 5];
u_SMPPairingRandom_RandomValue.bytebuffer[9] = mbuf[mbufi_SMPPairingRandom + 6];
u_SMPPairingRandom_RandomValue.bytebuffer[8] = mbuf[mbufi_SMPPairingRandom + 7];
u_SMPPairingRandom_RandomValue.bytebuffer[7] = mbuf[mbufi_SMPPairingRandom + 8];
u_SMPPairingRandom_RandomValue.bytebuffer[6] = mbuf[mbufi_SMPPairingRandom + 9];
u_SMPPairingRandom_RandomValue.bytebuffer[5] = mbuf[mbufi_SMPPairingRandom + 10];
u_SMPPairingRandom_RandomValue.bytebuffer[4] = mbuf[mbufi_SMPPairingRandom + 11];
u_SMPPairingRandom_RandomValue.bytebuffer[3] = mbuf[mbufi_SMPPairingRandom + 12];
u_SMPPairingRandom_RandomValue.bytebuffer[2] = mbuf[mbufi_SMPPairingRandom + 13];
u_SMPPairingRandom_RandomValue.bytebuffer[1] = mbuf[mbufi_SMPPairingRandom + 14];
u_SMPPairingRandom_RandomValue.bytebuffer[0] = mbuf[mbufi_SMPPairingRandom + 15];
mbufi_SMPPairingRandom += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPPairingRandom(_instance,
 u_SMPPairingRandom_Handle.p /* Handle */ ,
 u_SMPPairingRandom_RandomValue.p /* RandomValue */ );
return 1;
break;
}
}
break;
}
case 30:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingFailed = 2;
union u_SMPPairingFailed_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingFailed_Handle;
u_SMPPairingFailed_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingFailed + 0];
u_SMPPairingFailed_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingFailed + 1];
mbufi_SMPPairingFailed += 2;
union u_SMPPairingFailed_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingFailed_Reason;
u_SMPPairingFailed_Reason.bytebuffer[0] = mbuf[mbufi_SMPPairingFailed + 0];
mbufi_SMPPairingFailed += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPPairingFailed(_instance,
 u_SMPPairingFailed_Handle.p /* Handle */ ,
 u_SMPPairingFailed_Reason.p /* Reason */ );
return 1;
break;
}
}
break;
}
case 31:{
byte mbuf[70 - 2];
while (mbufi < (70 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingPublicKey = 2;
union u_SMPPairingPublicKey_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingPublicKey_Handle;
u_SMPPairingPublicKey_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 1];
mbufi_SMPPairingPublicKey += 2;
union u_SMPPairingPublicKey_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_SMPPairingPublicKey_KeyX;
u_SMPPairingPublicKey_KeyX.bytebuffer[31] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_KeyX.bytebuffer[30] = mbuf[mbufi_SMPPairingPublicKey + 1];
u_SMPPairingPublicKey_KeyX.bytebuffer[29] = mbuf[mbufi_SMPPairingPublicKey + 2];
u_SMPPairingPublicKey_KeyX.bytebuffer[28] = mbuf[mbufi_SMPPairingPublicKey + 3];
u_SMPPairingPublicKey_KeyX.bytebuffer[27] = mbuf[mbufi_SMPPairingPublicKey + 4];
u_SMPPairingPublicKey_KeyX.bytebuffer[26] = mbuf[mbufi_SMPPairingPublicKey + 5];
u_SMPPairingPublicKey_KeyX.bytebuffer[25] = mbuf[mbufi_SMPPairingPublicKey + 6];
u_SMPPairingPublicKey_KeyX.bytebuffer[24] = mbuf[mbufi_SMPPairingPublicKey + 7];
u_SMPPairingPublicKey_KeyX.bytebuffer[23] = mbuf[mbufi_SMPPairingPublicKey + 8];
u_SMPPairingPublicKey_KeyX.bytebuffer[22] = mbuf[mbufi_SMPPairingPublicKey + 9];
u_SMPPairingPublicKey_KeyX.bytebuffer[21] = mbuf[mbufi_SMPPairingPublicKey + 10];
u_SMPPairingPublicKey_KeyX.bytebuffer[20] = mbuf[mbufi_SMPPairingPublicKey + 11];
u_SMPPairingPublicKey_KeyX.bytebuffer[19] = mbuf[mbufi_SMPPairingPublicKey + 12];
u_SMPPairingPublicKey_KeyX.bytebuffer[18] = mbuf[mbufi_SMPPairingPublicKey + 13];
u_SMPPairingPublicKey_KeyX.bytebuffer[17] = mbuf[mbufi_SMPPairingPublicKey + 14];
u_SMPPairingPublicKey_KeyX.bytebuffer[16] = mbuf[mbufi_SMPPairingPublicKey + 15];
u_SMPPairingPublicKey_KeyX.bytebuffer[15] = mbuf[mbufi_SMPPairingPublicKey + 16];
u_SMPPairingPublicKey_KeyX.bytebuffer[14] = mbuf[mbufi_SMPPairingPublicKey + 17];
u_SMPPairingPublicKey_KeyX.bytebuffer[13] = mbuf[mbufi_SMPPairingPublicKey + 18];
u_SMPPairingPublicKey_KeyX.bytebuffer[12] = mbuf[mbufi_SMPPairingPublicKey + 19];
u_SMPPairingPublicKey_KeyX.bytebuffer[11] = mbuf[mbufi_SMPPairingPublicKey + 20];
u_SMPPairingPublicKey_KeyX.bytebuffer[10] = mbuf[mbufi_SMPPairingPublicKey + 21];
u_SMPPairingPublicKey_KeyX.bytebuffer[9] = mbuf[mbufi_SMPPairingPublicKey + 22];
u_SMPPairingPublicKey_KeyX.bytebuffer[8] = mbuf[mbufi_SMPPairingPublicKey + 23];
u_SMPPairingPublicKey_KeyX.bytebuffer[7] = mbuf[mbufi_SMPPairingPublicKey + 24];
u_SMPPairingPublicKey_KeyX.bytebuffer[6] = mbuf[mbufi_SMPPairingPublicKey + 25];
u_SMPPairingPublicKey_KeyX.bytebuffer[5] = mbuf[mbufi_SMPPairingPublicKey + 26];
u_SMPPairingPublicKey_KeyX.bytebuffer[4] = mbuf[mbufi_SMPPairingPublicKey + 27];
u_SMPPairingPublicKey_KeyX.bytebuffer[3] = mbuf[mbufi_SMPPairingPublicKey + 28];
u_SMPPairingPublicKey_KeyX.bytebuffer[2] = mbuf[mbufi_SMPPairingPublicKey + 29];
u_SMPPairingPublicKey_KeyX.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 30];
u_SMPPairingPublicKey_KeyX.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 31];
mbufi_SMPPairingPublicKey += 32;
union u_SMPPairingPublicKey_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_SMPPairingPublicKey_KeyY;
u_SMPPairingPublicKey_KeyY.bytebuffer[31] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_KeyY.bytebuffer[30] = mbuf[mbufi_SMPPairingPublicKey + 1];
u_SMPPairingPublicKey_KeyY.bytebuffer[29] = mbuf[mbufi_SMPPairingPublicKey + 2];
u_SMPPairingPublicKey_KeyY.bytebuffer[28] = mbuf[mbufi_SMPPairingPublicKey + 3];
u_SMPPairingPublicKey_KeyY.bytebuffer[27] = mbuf[mbufi_SMPPairingPublicKey + 4];
u_SMPPairingPublicKey_KeyY.bytebuffer[26] = mbuf[mbufi_SMPPairingPublicKey + 5];
u_SMPPairingPublicKey_KeyY.bytebuffer[25] = mbuf[mbufi_SMPPairingPublicKey + 6];
u_SMPPairingPublicKey_KeyY.bytebuffer[24] = mbuf[mbufi_SMPPairingPublicKey + 7];
u_SMPPairingPublicKey_KeyY.bytebuffer[23] = mbuf[mbufi_SMPPairingPublicKey + 8];
u_SMPPairingPublicKey_KeyY.bytebuffer[22] = mbuf[mbufi_SMPPairingPublicKey + 9];
u_SMPPairingPublicKey_KeyY.bytebuffer[21] = mbuf[mbufi_SMPPairingPublicKey + 10];
u_SMPPairingPublicKey_KeyY.bytebuffer[20] = mbuf[mbufi_SMPPairingPublicKey + 11];
u_SMPPairingPublicKey_KeyY.bytebuffer[19] = mbuf[mbufi_SMPPairingPublicKey + 12];
u_SMPPairingPublicKey_KeyY.bytebuffer[18] = mbuf[mbufi_SMPPairingPublicKey + 13];
u_SMPPairingPublicKey_KeyY.bytebuffer[17] = mbuf[mbufi_SMPPairingPublicKey + 14];
u_SMPPairingPublicKey_KeyY.bytebuffer[16] = mbuf[mbufi_SMPPairingPublicKey + 15];
u_SMPPairingPublicKey_KeyY.bytebuffer[15] = mbuf[mbufi_SMPPairingPublicKey + 16];
u_SMPPairingPublicKey_KeyY.bytebuffer[14] = mbuf[mbufi_SMPPairingPublicKey + 17];
u_SMPPairingPublicKey_KeyY.bytebuffer[13] = mbuf[mbufi_SMPPairingPublicKey + 18];
u_SMPPairingPublicKey_KeyY.bytebuffer[12] = mbuf[mbufi_SMPPairingPublicKey + 19];
u_SMPPairingPublicKey_KeyY.bytebuffer[11] = mbuf[mbufi_SMPPairingPublicKey + 20];
u_SMPPairingPublicKey_KeyY.bytebuffer[10] = mbuf[mbufi_SMPPairingPublicKey + 21];
u_SMPPairingPublicKey_KeyY.bytebuffer[9] = mbuf[mbufi_SMPPairingPublicKey + 22];
u_SMPPairingPublicKey_KeyY.bytebuffer[8] = mbuf[mbufi_SMPPairingPublicKey + 23];
u_SMPPairingPublicKey_KeyY.bytebuffer[7] = mbuf[mbufi_SMPPairingPublicKey + 24];
u_SMPPairingPublicKey_KeyY.bytebuffer[6] = mbuf[mbufi_SMPPairingPublicKey + 25];
u_SMPPairingPublicKey_KeyY.bytebuffer[5] = mbuf[mbufi_SMPPairingPublicKey + 26];
u_SMPPairingPublicKey_KeyY.bytebuffer[4] = mbuf[mbufi_SMPPairingPublicKey + 27];
u_SMPPairingPublicKey_KeyY.bytebuffer[3] = mbuf[mbufi_SMPPairingPublicKey + 28];
u_SMPPairingPublicKey_KeyY.bytebuffer[2] = mbuf[mbufi_SMPPairingPublicKey + 29];
u_SMPPairingPublicKey_KeyY.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 30];
u_SMPPairingPublicKey_KeyY.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 31];
mbufi_SMPPairingPublicKey += 32;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 32:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingDHKeyCheck = 2;
union u_SMPPairingDHKeyCheck_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingDHKeyCheck_Handle;
u_SMPPairingDHKeyCheck_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingDHKeyCheck + 0];
u_SMPPairingDHKeyCheck_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingDHKeyCheck + 1];
mbufi_SMPPairingDHKeyCheck += 2;
union u_SMPPairingDHKeyCheck_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingDHKeyCheck_DHKeyCheck;
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[15] = mbuf[mbufi_SMPPairingDHKeyCheck + 0];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[14] = mbuf[mbufi_SMPPairingDHKeyCheck + 1];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[13] = mbuf[mbufi_SMPPairingDHKeyCheck + 2];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[12] = mbuf[mbufi_SMPPairingDHKeyCheck + 3];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[11] = mbuf[mbufi_SMPPairingDHKeyCheck + 4];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[10] = mbuf[mbufi_SMPPairingDHKeyCheck + 5];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[9] = mbuf[mbufi_SMPPairingDHKeyCheck + 6];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[8] = mbuf[mbufi_SMPPairingDHKeyCheck + 7];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[7] = mbuf[mbufi_SMPPairingDHKeyCheck + 8];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[6] = mbuf[mbufi_SMPPairingDHKeyCheck + 9];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[5] = mbuf[mbufi_SMPPairingDHKeyCheck + 10];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[4] = mbuf[mbufi_SMPPairingDHKeyCheck + 11];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[3] = mbuf[mbufi_SMPPairingDHKeyCheck + 12];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[2] = mbuf[mbufi_SMPPairingDHKeyCheck + 13];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[1] = mbuf[mbufi_SMPPairingDHKeyCheck + 14];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[0] = mbuf[mbufi_SMPPairingDHKeyCheck + 15];
mbufi_SMPPairingDHKeyCheck += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 33:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPKeypressNotification = 2;
union u_SMPKeypressNotification_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPKeypressNotification_Handle;
u_SMPKeypressNotification_Handle.bytebuffer[1] = mbuf[mbufi_SMPKeypressNotification + 0];
u_SMPKeypressNotification_Handle.bytebuffer[0] = mbuf[mbufi_SMPKeypressNotification + 1];
mbufi_SMPKeypressNotification += 2;
union u_SMPKeypressNotification_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPKeypressNotification_Type;
u_SMPKeypressNotification_Type.bytebuffer[0] = mbuf[mbufi_SMPKeypressNotification + 0];
mbufi_SMPKeypressNotification += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 34:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPEncryptionInformation = 2;
union u_SMPEncryptionInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPEncryptionInformation_Handle;
u_SMPEncryptionInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPEncryptionInformation + 0];
u_SMPEncryptionInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPEncryptionInformation + 1];
mbufi_SMPEncryptionInformation += 2;
union u_SMPEncryptionInformation_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPEncryptionInformation_LongTermKey;
u_SMPEncryptionInformation_LongTermKey.bytebuffer[15] = mbuf[mbufi_SMPEncryptionInformation + 0];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[14] = mbuf[mbufi_SMPEncryptionInformation + 1];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[13] = mbuf[mbufi_SMPEncryptionInformation + 2];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[12] = mbuf[mbufi_SMPEncryptionInformation + 3];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[11] = mbuf[mbufi_SMPEncryptionInformation + 4];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[10] = mbuf[mbufi_SMPEncryptionInformation + 5];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[9] = mbuf[mbufi_SMPEncryptionInformation + 6];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[8] = mbuf[mbufi_SMPEncryptionInformation + 7];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[7] = mbuf[mbufi_SMPEncryptionInformation + 8];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[6] = mbuf[mbufi_SMPEncryptionInformation + 9];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[5] = mbuf[mbufi_SMPEncryptionInformation + 10];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[4] = mbuf[mbufi_SMPEncryptionInformation + 11];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[3] = mbuf[mbufi_SMPEncryptionInformation + 12];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[2] = mbuf[mbufi_SMPEncryptionInformation + 13];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[1] = mbuf[mbufi_SMPEncryptionInformation + 14];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[0] = mbuf[mbufi_SMPEncryptionInformation + 15];
mbufi_SMPEncryptionInformation += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPEncryptionInformation(_instance,
 u_SMPEncryptionInformation_Handle.p /* Handle */ ,
 u_SMPEncryptionInformation_LongTermKey.p /* LongTermKey */ );
return 1;
break;
}
}
break;
}
case 35:{
byte mbuf[16 - 2];
while (mbufi < (16 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPMasterIdentification = 2;
union u_SMPMasterIdentification_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPMasterIdentification_Handle;
u_SMPMasterIdentification_Handle.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_Handle.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 1];
mbufi_SMPMasterIdentification += 2;
union u_SMPMasterIdentification_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPMasterIdentification_EDIV;
u_SMPMasterIdentification_EDIV.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_EDIV.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 1];
mbufi_SMPMasterIdentification += 2;
union u_SMPMasterIdentification_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_SMPMasterIdentification_Rand;
u_SMPMasterIdentification_Rand.bytebuffer[7] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_Rand.bytebuffer[6] = mbuf[mbufi_SMPMasterIdentification + 1];
u_SMPMasterIdentification_Rand.bytebuffer[5] = mbuf[mbufi_SMPMasterIdentification + 2];
u_SMPMasterIdentification_Rand.bytebuffer[4] = mbuf[mbufi_SMPMasterIdentification + 3];
u_SMPMasterIdentification_Rand.bytebuffer[3] = mbuf[mbufi_SMPMasterIdentification + 4];
u_SMPMasterIdentification_Rand.bytebuffer[2] = mbuf[mbufi_SMPMasterIdentification + 5];
u_SMPMasterIdentification_Rand.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 6];
u_SMPMasterIdentification_Rand.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 7];
mbufi_SMPMasterIdentification += 8;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPMasterIdentification(_instance,
 u_SMPMasterIdentification_Handle.p /* Handle */ ,
 u_SMPMasterIdentification_EDIV.p /* EDIV */ ,
 u_SMPMasterIdentification_Rand.p /* Rand */ );
return 1;
break;
}
}
break;
}
case 36:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPIdentityInformation = 2;
union u_SMPIdentityInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPIdentityInformation_Handle;
u_SMPIdentityInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPIdentityInformation + 0];
u_SMPIdentityInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPIdentityInformation + 1];
mbufi_SMPIdentityInformation += 2;
union u_SMPIdentityInformation_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPIdentityInformation_IdentityResolvingKey;
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[15] = mbuf[mbufi_SMPIdentityInformation + 0];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[14] = mbuf[mbufi_SMPIdentityInformation + 1];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[13] = mbuf[mbufi_SMPIdentityInformation + 2];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[12] = mbuf[mbufi_SMPIdentityInformation + 3];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[11] = mbuf[mbufi_SMPIdentityInformation + 4];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[10] = mbuf[mbufi_SMPIdentityInformation + 5];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[9] = mbuf[mbufi_SMPIdentityInformation + 6];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[8] = mbuf[mbufi_SMPIdentityInformation + 7];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[7] = mbuf[mbufi_SMPIdentityInformation + 8];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[6] = mbuf[mbufi_SMPIdentityInformation + 9];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[5] = mbuf[mbufi_SMPIdentityInformation + 10];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[4] = mbuf[mbufi_SMPIdentityInformation + 11];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[3] = mbuf[mbufi_SMPIdentityInformation + 12];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[2] = mbuf[mbufi_SMPIdentityInformation + 13];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[1] = mbuf[mbufi_SMPIdentityInformation + 14];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[0] = mbuf[mbufi_SMPIdentityInformation + 15];
mbufi_SMPIdentityInformation += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPIdentityInformation(_instance,
 u_SMPIdentityInformation_Handle.p /* Handle */ ,
 u_SMPIdentityInformation_IdentityResolvingKey.p /* IdentityResolvingKey */ );
return 1;
break;
}
}
break;
}
case 37:{
byte mbuf[13 - 2];
while (mbufi < (13 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPIdentityAddressInformation = 2;
union u_SMPIdentityAddressInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPIdentityAddressInformation_Handle;
u_SMPIdentityAddressInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
u_SMPIdentityAddressInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 1];
mbufi_SMPIdentityAddressInformation += 2;
union u_SMPIdentityAddressInformation_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPIdentityAddressInformation_AddressType;
u_SMPIdentityAddressInformation_AddressType.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
mbufi_SMPIdentityAddressInformation += 1;
union u_SMPIdentityAddressInformation_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_SMPIdentityAddressInformation_Address;
u_SMPIdentityAddressInformation_Address.bytebuffer[5] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
u_SMPIdentityAddressInformation_Address.bytebuffer[4] = mbuf[mbufi_SMPIdentityAddressInformation + 1];
u_SMPIdentityAddressInformation_Address.bytebuffer[3] = mbuf[mbufi_SMPIdentityAddressInformation + 2];
u_SMPIdentityAddressInformation_Address.bytebuffer[2] = mbuf[mbufi_SMPIdentityAddressInformation + 3];
u_SMPIdentityAddressInformation_Address.bytebuffer[1] = mbuf[mbufi_SMPIdentityAddressInformation + 4];
u_SMPIdentityAddressInformation_Address.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 5];
mbufi_SMPIdentityAddressInformation += 6;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPIdentityAddressInformation(_instance,
 u_SMPIdentityAddressInformation_Handle.p /* Handle */ ,
 u_SMPIdentityAddressInformation_AddressType.p /* AddressType */ ,
 u_SMPIdentityAddressInformation_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 38:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPSigningInformation = 2;
union u_SMPSigningInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPSigningInformation_Handle;
u_SMPSigningInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPSigningInformation + 0];
u_SMPSigningInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPSigningInformation + 1];
mbufi_SMPSigningInformation += 2;
union u_SMPSigningInformation_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPSigningInformation_SignatureKey;
u_SMPSigningInformation_SignatureKey.bytebuffer[15] = mbuf[mbufi_SMPSigningInformation + 0];
u_SMPSigningInformation_SignatureKey.bytebuffer[14] = mbuf[mbufi_SMPSigningInformation + 1];
u_SMPSigningInformation_SignatureKey.bytebuffer[13] = mbuf[mbufi_SMPSigningInformation + 2];
u_SMPSigningInformation_SignatureKey.bytebuffer[12] = mbuf[mbufi_SMPSigningInformation + 3];
u_SMPSigningInformation_SignatureKey.bytebuffer[11] = mbuf[mbufi_SMPSigningInformation + 4];
u_SMPSigningInformation_SignatureKey.bytebuffer[10] = mbuf[mbufi_SMPSigningInformation + 5];
u_SMPSigningInformation_SignatureKey.bytebuffer[9] = mbuf[mbufi_SMPSigningInformation + 6];
u_SMPSigningInformation_SignatureKey.bytebuffer[8] = mbuf[mbufi_SMPSigningInformation + 7];
u_SMPSigningInformation_SignatureKey.bytebuffer[7] = mbuf[mbufi_SMPSigningInformation + 8];
u_SMPSigningInformation_SignatureKey.bytebuffer[6] = mbuf[mbufi_SMPSigningInformation + 9];
u_SMPSigningInformation_SignatureKey.bytebuffer[5] = mbuf[mbufi_SMPSigningInformation + 10];
u_SMPSigningInformation_SignatureKey.bytebuffer[4] = mbuf[mbufi_SMPSigningInformation + 11];
u_SMPSigningInformation_SignatureKey.bytebuffer[3] = mbuf[mbufi_SMPSigningInformation + 12];
u_SMPSigningInformation_SignatureKey.bytebuffer[2] = mbuf[mbufi_SMPSigningInformation + 13];
u_SMPSigningInformation_SignatureKey.bytebuffer[1] = mbuf[mbufi_SMPSigningInformation + 14];
u_SMPSigningInformation_SignatureKey.bytebuffer[0] = mbuf[mbufi_SMPSigningInformation + 15];
mbufi_SMPSigningInformation += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 39:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPSecurityRequest = 2;
union u_SMPSecurityRequest_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPSecurityRequest_Handle;
u_SMPSecurityRequest_Handle.bytebuffer[1] = mbuf[mbufi_SMPSecurityRequest + 0];
u_SMPSecurityRequest_Handle.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 1];
mbufi_SMPSecurityRequest += 2;
union u_SMPSecurityRequest_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_Bonding;
u_SMPSecurityRequest_Bonding.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_MITM;
u_SMPSecurityRequest_MITM.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_SecureConnection;
u_SMPSecurityRequest_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_Keypress;
u_SMPSecurityRequest_Keypress.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_SMP_SMPSecurityRequest(_instance,
 u_SMPSecurityRequest_Handle.p /* Handle */ ,
 u_SMPSecurityRequest_Bonding.p /* Bonding */ ,
 u_SMPSecurityRequest_MITM.p /* MITM */ ,
 u_SMPSecurityRequest_SecureConnection.p /* SecureConnection */ ,
 u_SMPSecurityRequest_Keypress.p /* Keypress */ );
return 1;
break;
}
}
break;
}
case 40:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTFindInformationRequest = 2;
union u_ATTFindInformationRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_ConnectionHandle;
u_ATTFindInformationRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
union u_ATTFindInformationRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_StartingHandle;
u_ATTFindInformationRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
union u_ATTFindInformationRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_EndingHandle;
u_ATTFindInformationRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 41:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTFindInformationResponse = 2;
union u_ATTFindInformationResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationResponse_ConnectionHandle;
u_ATTFindInformationResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationResponse + 0];
u_ATTFindInformationResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 1];
mbufi_ATTFindInformationResponse += 2;
union u_ATTFindInformationResponse_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTFindInformationResponse_Format;
u_ATTFindInformationResponse_Format.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 0];
mbufi_ATTFindInformationResponse += 1;
union u_ATTFindInformationResponse_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTFindInformationResponse_InformationData;
u_ATTFindInformationResponse_InformationData.bytebuffer[23] = mbuf[mbufi_ATTFindInformationResponse + 0];
u_ATTFindInformationResponse_InformationData.bytebuffer[22] = mbuf[mbufi_ATTFindInformationResponse + 1];
u_ATTFindInformationResponse_InformationData.bytebuffer[21] = mbuf[mbufi_ATTFindInformationResponse + 2];
u_ATTFindInformationResponse_InformationData.bytebuffer[20] = mbuf[mbufi_ATTFindInformationResponse + 3];
u_ATTFindInformationResponse_InformationData.bytebuffer[19] = mbuf[mbufi_ATTFindInformationResponse + 4];
u_ATTFindInformationResponse_InformationData.bytebuffer[18] = mbuf[mbufi_ATTFindInformationResponse + 5];
u_ATTFindInformationResponse_InformationData.bytebuffer[17] = mbuf[mbufi_ATTFindInformationResponse + 6];
u_ATTFindInformationResponse_InformationData.bytebuffer[16] = mbuf[mbufi_ATTFindInformationResponse + 7];
u_ATTFindInformationResponse_InformationData.bytebuffer[15] = mbuf[mbufi_ATTFindInformationResponse + 8];
u_ATTFindInformationResponse_InformationData.bytebuffer[14] = mbuf[mbufi_ATTFindInformationResponse + 9];
u_ATTFindInformationResponse_InformationData.bytebuffer[13] = mbuf[mbufi_ATTFindInformationResponse + 10];
u_ATTFindInformationResponse_InformationData.bytebuffer[12] = mbuf[mbufi_ATTFindInformationResponse + 11];
u_ATTFindInformationResponse_InformationData.bytebuffer[11] = mbuf[mbufi_ATTFindInformationResponse + 12];
u_ATTFindInformationResponse_InformationData.bytebuffer[10] = mbuf[mbufi_ATTFindInformationResponse + 13];
u_ATTFindInformationResponse_InformationData.bytebuffer[9] = mbuf[mbufi_ATTFindInformationResponse + 14];
u_ATTFindInformationResponse_InformationData.bytebuffer[8] = mbuf[mbufi_ATTFindInformationResponse + 15];
u_ATTFindInformationResponse_InformationData.bytebuffer[7] = mbuf[mbufi_ATTFindInformationResponse + 16];
u_ATTFindInformationResponse_InformationData.bytebuffer[6] = mbuf[mbufi_ATTFindInformationResponse + 17];
u_ATTFindInformationResponse_InformationData.bytebuffer[5] = mbuf[mbufi_ATTFindInformationResponse + 18];
u_ATTFindInformationResponse_InformationData.bytebuffer[4] = mbuf[mbufi_ATTFindInformationResponse + 19];
u_ATTFindInformationResponse_InformationData.bytebuffer[3] = mbuf[mbufi_ATTFindInformationResponse + 20];
u_ATTFindInformationResponse_InformationData.bytebuffer[2] = mbuf[mbufi_ATTFindInformationResponse + 21];
u_ATTFindInformationResponse_InformationData.bytebuffer[1] = mbuf[mbufi_ATTFindInformationResponse + 22];
u_ATTFindInformationResponse_InformationData.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 23];
mbufi_ATTFindInformationResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 42:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTFindInformationError = 2;
union u_ATTFindInformationError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationError_ConnectionHandle;
u_ATTFindInformationError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationError + 0];
u_ATTFindInformationError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 1];
mbufi_ATTFindInformationError += 2;
union u_ATTFindInformationError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationError_AttributeHandle;
u_ATTFindInformationError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationError + 0];
u_ATTFindInformationError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 1];
mbufi_ATTFindInformationError += 2;
union u_ATTFindInformationError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTFindInformationError_Error;
u_ATTFindInformationError_Error.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 0];
mbufi_ATTFindInformationError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 43:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByTypeRequest = 2;
union u_ATTReadByTypeRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_ConnectionHandle;
u_ATTReadByTypeRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_StartingHandle;
u_ATTReadByTypeRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_EndingHandle;
u_ATTReadByTypeRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_ATTReadByTypeRequest_AttributeType;
u_ATTReadByTypeRequest_AttributeType.bytebuffer[15] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[14] = mbuf[mbufi_ATTReadByTypeRequest + 1];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[13] = mbuf[mbufi_ATTReadByTypeRequest + 2];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[12] = mbuf[mbufi_ATTReadByTypeRequest + 3];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[11] = mbuf[mbufi_ATTReadByTypeRequest + 4];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[10] = mbuf[mbufi_ATTReadByTypeRequest + 5];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[9] = mbuf[mbufi_ATTReadByTypeRequest + 6];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[8] = mbuf[mbufi_ATTReadByTypeRequest + 7];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[7] = mbuf[mbufi_ATTReadByTypeRequest + 8];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[6] = mbuf[mbufi_ATTReadByTypeRequest + 9];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[5] = mbuf[mbufi_ATTReadByTypeRequest + 10];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[4] = mbuf[mbufi_ATTReadByTypeRequest + 11];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[3] = mbuf[mbufi_ATTReadByTypeRequest + 12];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[2] = mbuf[mbufi_ATTReadByTypeRequest + 13];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 14];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 15];
mbufi_ATTReadByTypeRequest += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 44:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByTypeResponse = 2;
union u_ATTReadByTypeResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeResponse_ConnectionHandle;
u_ATTReadByTypeResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeResponse + 0];
u_ATTReadByTypeResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 1];
mbufi_ATTReadByTypeResponse += 2;
union u_ATTReadByTypeResponse_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByTypeResponse_Length;
u_ATTReadByTypeResponse_Length.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 0];
mbufi_ATTReadByTypeResponse += 1;
union u_ATTReadByTypeResponse_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadByTypeResponse_AttributeDataList;
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[23] = mbuf[mbufi_ATTReadByTypeResponse + 0];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[22] = mbuf[mbufi_ATTReadByTypeResponse + 1];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[21] = mbuf[mbufi_ATTReadByTypeResponse + 2];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[20] = mbuf[mbufi_ATTReadByTypeResponse + 3];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[19] = mbuf[mbufi_ATTReadByTypeResponse + 4];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[18] = mbuf[mbufi_ATTReadByTypeResponse + 5];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[17] = mbuf[mbufi_ATTReadByTypeResponse + 6];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[16] = mbuf[mbufi_ATTReadByTypeResponse + 7];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[15] = mbuf[mbufi_ATTReadByTypeResponse + 8];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[14] = mbuf[mbufi_ATTReadByTypeResponse + 9];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[13] = mbuf[mbufi_ATTReadByTypeResponse + 10];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[12] = mbuf[mbufi_ATTReadByTypeResponse + 11];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[11] = mbuf[mbufi_ATTReadByTypeResponse + 12];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[10] = mbuf[mbufi_ATTReadByTypeResponse + 13];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[9] = mbuf[mbufi_ATTReadByTypeResponse + 14];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[8] = mbuf[mbufi_ATTReadByTypeResponse + 15];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[7] = mbuf[mbufi_ATTReadByTypeResponse + 16];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[6] = mbuf[mbufi_ATTReadByTypeResponse + 17];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[5] = mbuf[mbufi_ATTReadByTypeResponse + 18];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[4] = mbuf[mbufi_ATTReadByTypeResponse + 19];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[3] = mbuf[mbufi_ATTReadByTypeResponse + 20];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[2] = mbuf[mbufi_ATTReadByTypeResponse + 21];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeResponse + 22];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 23];
mbufi_ATTReadByTypeResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 45:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByTypeError = 2;
union u_ATTReadByTypeError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeError_ConnectionHandle;
u_ATTReadByTypeError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeError + 0];
u_ATTReadByTypeError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 1];
mbufi_ATTReadByTypeError += 2;
union u_ATTReadByTypeError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeError_AttributeHandle;
u_ATTReadByTypeError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeError + 0];
u_ATTReadByTypeError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 1];
mbufi_ATTReadByTypeError += 2;
union u_ATTReadByTypeError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByTypeError_Error;
u_ATTReadByTypeError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 0];
mbufi_ATTReadByTypeError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 46:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadRequest = 2;
union u_ATTReadRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadRequest_ConnectionHandle;
u_ATTReadRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadRequest + 0];
u_ATTReadRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadRequest + 1];
mbufi_ATTReadRequest += 2;
union u_ATTReadRequest_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadRequest_AttributeHandle;
u_ATTReadRequest_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadRequest + 0];
u_ATTReadRequest_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadRequest + 1];
mbufi_ATTReadRequest += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 47:{
byte mbuf[30 - 2];
while (mbufi < (30 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadResponse = 2;
union u_ATTReadResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadResponse_ConnectionHandle;
u_ATTReadResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadResponse + 0];
u_ATTReadResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadResponse + 1];
mbufi_ATTReadResponse += 2;
union u_ATTReadResponse_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadResponse_AttributeValue;
u_ATTReadResponse_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTReadResponse + 0];
u_ATTReadResponse_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTReadResponse + 1];
u_ATTReadResponse_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTReadResponse + 2];
u_ATTReadResponse_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTReadResponse + 3];
u_ATTReadResponse_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTReadResponse + 4];
u_ATTReadResponse_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTReadResponse + 5];
u_ATTReadResponse_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTReadResponse + 6];
u_ATTReadResponse_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTReadResponse + 7];
u_ATTReadResponse_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTReadResponse + 8];
u_ATTReadResponse_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTReadResponse + 9];
u_ATTReadResponse_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTReadResponse + 10];
u_ATTReadResponse_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTReadResponse + 11];
u_ATTReadResponse_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTReadResponse + 12];
u_ATTReadResponse_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTReadResponse + 13];
u_ATTReadResponse_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTReadResponse + 14];
u_ATTReadResponse_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTReadResponse + 15];
u_ATTReadResponse_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTReadResponse + 16];
u_ATTReadResponse_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTReadResponse + 17];
u_ATTReadResponse_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTReadResponse + 18];
u_ATTReadResponse_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTReadResponse + 19];
u_ATTReadResponse_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTReadResponse + 20];
u_ATTReadResponse_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTReadResponse + 21];
u_ATTReadResponse_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTReadResponse + 22];
u_ATTReadResponse_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTReadResponse + 23];
mbufi_ATTReadResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 48:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadError = 2;
union u_ATTReadError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadError_ConnectionHandle;
u_ATTReadError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadError + 0];
u_ATTReadError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadError + 1];
mbufi_ATTReadError += 2;
union u_ATTReadError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadError_AttributeHandle;
u_ATTReadError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadError + 0];
u_ATTReadError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadError + 1];
mbufi_ATTReadError += 2;
union u_ATTReadError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadError_Error;
u_ATTReadError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadError + 0];
mbufi_ATTReadError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 49:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByGroupTypeRequest = 2;
union u_ATTReadByGroupTypeRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_ConnectionHandle;
u_ATTReadByGroupTypeRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_StartingHandle;
u_ATTReadByGroupTypeRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_EndingHandle;
u_ATTReadByGroupTypeRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_ATTReadByGroupTypeRequest_AttributeGroupType;
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[15] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[14] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[13] = mbuf[mbufi_ATTReadByGroupTypeRequest + 2];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[12] = mbuf[mbufi_ATTReadByGroupTypeRequest + 3];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[11] = mbuf[mbufi_ATTReadByGroupTypeRequest + 4];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[10] = mbuf[mbufi_ATTReadByGroupTypeRequest + 5];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[9] = mbuf[mbufi_ATTReadByGroupTypeRequest + 6];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[8] = mbuf[mbufi_ATTReadByGroupTypeRequest + 7];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[7] = mbuf[mbufi_ATTReadByGroupTypeRequest + 8];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[6] = mbuf[mbufi_ATTReadByGroupTypeRequest + 9];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[5] = mbuf[mbufi_ATTReadByGroupTypeRequest + 10];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[4] = mbuf[mbufi_ATTReadByGroupTypeRequest + 11];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[3] = mbuf[mbufi_ATTReadByGroupTypeRequest + 12];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[2] = mbuf[mbufi_ATTReadByGroupTypeRequest + 13];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 14];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 15];
mbufi_ATTReadByGroupTypeRequest += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 50:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByGroupTypeResponse = 2;
union u_ATTReadByGroupTypeResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeResponse_ConnectionHandle;
u_ATTReadByGroupTypeResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
u_ATTReadByGroupTypeResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 1];
mbufi_ATTReadByGroupTypeResponse += 2;
union u_ATTReadByGroupTypeResponse_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByGroupTypeResponse_Length;
u_ATTReadByGroupTypeResponse_Length.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
mbufi_ATTReadByGroupTypeResponse += 1;
union u_ATTReadByGroupTypeResponse_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadByGroupTypeResponse_AttributeDataList;
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[23] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[22] = mbuf[mbufi_ATTReadByGroupTypeResponse + 1];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[21] = mbuf[mbufi_ATTReadByGroupTypeResponse + 2];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[20] = mbuf[mbufi_ATTReadByGroupTypeResponse + 3];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[19] = mbuf[mbufi_ATTReadByGroupTypeResponse + 4];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[18] = mbuf[mbufi_ATTReadByGroupTypeResponse + 5];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[17] = mbuf[mbufi_ATTReadByGroupTypeResponse + 6];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[16] = mbuf[mbufi_ATTReadByGroupTypeResponse + 7];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[15] = mbuf[mbufi_ATTReadByGroupTypeResponse + 8];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[14] = mbuf[mbufi_ATTReadByGroupTypeResponse + 9];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[13] = mbuf[mbufi_ATTReadByGroupTypeResponse + 10];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[12] = mbuf[mbufi_ATTReadByGroupTypeResponse + 11];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[11] = mbuf[mbufi_ATTReadByGroupTypeResponse + 12];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[10] = mbuf[mbufi_ATTReadByGroupTypeResponse + 13];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[9] = mbuf[mbufi_ATTReadByGroupTypeResponse + 14];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[8] = mbuf[mbufi_ATTReadByGroupTypeResponse + 15];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[7] = mbuf[mbufi_ATTReadByGroupTypeResponse + 16];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[6] = mbuf[mbufi_ATTReadByGroupTypeResponse + 17];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[5] = mbuf[mbufi_ATTReadByGroupTypeResponse + 18];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[4] = mbuf[mbufi_ATTReadByGroupTypeResponse + 19];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[3] = mbuf[mbufi_ATTReadByGroupTypeResponse + 20];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[2] = mbuf[mbufi_ATTReadByGroupTypeResponse + 21];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeResponse + 22];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 23];
mbufi_ATTReadByGroupTypeResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 51:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByGroupTypeError = 2;
union u_ATTReadByGroupTypeError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeError_ConnectionHandle;
u_ATTReadByGroupTypeError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
u_ATTReadByGroupTypeError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 1];
mbufi_ATTReadByGroupTypeError += 2;
union u_ATTReadByGroupTypeError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeError_AttributeHandle;
u_ATTReadByGroupTypeError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
u_ATTReadByGroupTypeError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 1];
mbufi_ATTReadByGroupTypeError += 2;
union u_ATTReadByGroupTypeError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByGroupTypeError_Error;
u_ATTReadByGroupTypeError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
mbufi_ATTReadByGroupTypeError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 52:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteRequest = 2;
union u_ATTWriteRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteRequest_ConnectionHandle;
u_ATTWriteRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 1];
mbufi_ATTWriteRequest += 2;
union u_ATTWriteRequest_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteRequest_AttributeHandle;
u_ATTWriteRequest_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 1];
mbufi_ATTWriteRequest += 2;
union u_ATTWriteRequest_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTWriteRequest_AttributeValue;
u_ATTWriteRequest_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTWriteRequest + 1];
u_ATTWriteRequest_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTWriteRequest + 2];
u_ATTWriteRequest_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTWriteRequest + 3];
u_ATTWriteRequest_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTWriteRequest + 4];
u_ATTWriteRequest_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTWriteRequest + 5];
u_ATTWriteRequest_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTWriteRequest + 6];
u_ATTWriteRequest_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTWriteRequest + 7];
u_ATTWriteRequest_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTWriteRequest + 8];
u_ATTWriteRequest_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTWriteRequest + 9];
u_ATTWriteRequest_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTWriteRequest + 10];
u_ATTWriteRequest_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTWriteRequest + 11];
u_ATTWriteRequest_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTWriteRequest + 12];
u_ATTWriteRequest_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTWriteRequest + 13];
u_ATTWriteRequest_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTWriteRequest + 14];
u_ATTWriteRequest_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTWriteRequest + 15];
u_ATTWriteRequest_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTWriteRequest + 16];
u_ATTWriteRequest_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTWriteRequest + 17];
u_ATTWriteRequest_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTWriteRequest + 18];
u_ATTWriteRequest_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTWriteRequest + 19];
u_ATTWriteRequest_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTWriteRequest + 20];
u_ATTWriteRequest_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTWriteRequest + 21];
u_ATTWriteRequest_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 22];
u_ATTWriteRequest_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 23];
mbufi_ATTWriteRequest += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 53:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteResponse = 2;
union u_ATTWriteResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteResponse_ConnectionHandle;
u_ATTWriteResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteResponse + 0];
u_ATTWriteResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteResponse + 1];
mbufi_ATTWriteResponse += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 4:{
Main_handle_ATT_ATTWriteResponse(_instance,
 u_ATTWriteResponse_ConnectionHandle.p /* ConnectionHandle */ );
return 1;
break;
}
}
break;
}
case 54:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteError = 2;
union u_ATTWriteError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteError_ConnectionHandle;
u_ATTWriteError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteError + 0];
u_ATTWriteError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 1];
mbufi_ATTWriteError += 2;
union u_ATTWriteError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteError_AttributeHandle;
u_ATTWriteError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteError + 0];
u_ATTWriteError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 1];
mbufi_ATTWriteError += 2;
union u_ATTWriteError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTWriteError_Error;
u_ATTWriteError_Error.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 0];
mbufi_ATTWriteError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 4:{
Main_handle_ATT_ATTWriteError(_instance,
 u_ATTWriteError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 55:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteCommand = 2;
union u_ATTWriteCommand_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteCommand_ConnectionHandle;
u_ATTWriteCommand_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 1];
mbufi_ATTWriteCommand += 2;
union u_ATTWriteCommand_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteCommand_AttributeHandle;
u_ATTWriteCommand_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 1];
mbufi_ATTWriteCommand += 2;
union u_ATTWriteCommand_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTWriteCommand_AttributeValue;
u_ATTWriteCommand_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTWriteCommand + 1];
u_ATTWriteCommand_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTWriteCommand + 2];
u_ATTWriteCommand_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTWriteCommand + 3];
u_ATTWriteCommand_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTWriteCommand + 4];
u_ATTWriteCommand_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTWriteCommand + 5];
u_ATTWriteCommand_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTWriteCommand + 6];
u_ATTWriteCommand_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTWriteCommand + 7];
u_ATTWriteCommand_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTWriteCommand + 8];
u_ATTWriteCommand_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTWriteCommand + 9];
u_ATTWriteCommand_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTWriteCommand + 10];
u_ATTWriteCommand_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTWriteCommand + 11];
u_ATTWriteCommand_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTWriteCommand + 12];
u_ATTWriteCommand_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTWriteCommand + 13];
u_ATTWriteCommand_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTWriteCommand + 14];
u_ATTWriteCommand_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTWriteCommand + 15];
u_ATTWriteCommand_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTWriteCommand + 16];
u_ATTWriteCommand_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTWriteCommand + 17];
u_ATTWriteCommand_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTWriteCommand + 18];
u_ATTWriteCommand_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTWriteCommand + 19];
u_ATTWriteCommand_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTWriteCommand + 20];
u_ATTWriteCommand_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTWriteCommand + 21];
u_ATTWriteCommand_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 22];
u_ATTWriteCommand_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 23];
mbufi_ATTWriteCommand += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 56:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTHandleValueNotification = 2;
union u_ATTHandleValueNotification_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueNotification_ConnectionHandle;
u_ATTHandleValueNotification_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 1];
mbufi_ATTHandleValueNotification += 2;
union u_ATTHandleValueNotification_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueNotification_AttributeHandle;
u_ATTHandleValueNotification_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 1];
mbufi_ATTHandleValueNotification += 2;
union u_ATTHandleValueNotification_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTHandleValueNotification_AttributeValue;
u_ATTHandleValueNotification_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTHandleValueNotification + 1];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTHandleValueNotification + 2];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTHandleValueNotification + 3];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTHandleValueNotification + 4];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTHandleValueNotification + 5];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTHandleValueNotification + 6];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTHandleValueNotification + 7];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTHandleValueNotification + 8];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTHandleValueNotification + 9];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTHandleValueNotification + 10];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTHandleValueNotification + 11];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTHandleValueNotification + 12];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTHandleValueNotification + 13];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTHandleValueNotification + 14];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTHandleValueNotification + 15];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTHandleValueNotification + 16];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTHandleValueNotification + 17];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTHandleValueNotification + 18];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTHandleValueNotification + 19];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTHandleValueNotification + 20];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTHandleValueNotification + 21];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 22];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 23];
mbufi_ATTHandleValueNotification += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 57:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTHandleValueIndication = 2;
union u_ATTHandleValueIndication_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueIndication_ConnectionHandle;
u_ATTHandleValueIndication_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 1];
mbufi_ATTHandleValueIndication += 2;
union u_ATTHandleValueIndication_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueIndication_AttributeHandle;
u_ATTHandleValueIndication_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 1];
mbufi_ATTHandleValueIndication += 2;
union u_ATTHandleValueIndication_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTHandleValueIndication_AttributeValue;
u_ATTHandleValueIndication_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTHandleValueIndication + 1];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTHandleValueIndication + 2];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTHandleValueIndication + 3];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTHandleValueIndication + 4];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTHandleValueIndication + 5];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTHandleValueIndication + 6];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTHandleValueIndication + 7];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTHandleValueIndication + 8];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTHandleValueIndication + 9];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTHandleValueIndication + 10];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTHandleValueIndication + 11];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTHandleValueIndication + 12];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTHandleValueIndication + 13];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTHandleValueIndication + 14];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTHandleValueIndication + 15];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTHandleValueIndication + 16];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTHandleValueIndication + 17];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTHandleValueIndication + 18];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTHandleValueIndication + 19];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTHandleValueIndication + 20];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTHandleValueIndication + 21];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 22];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 23];
mbufi_ATTHandleValueIndication += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 58:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTHandleValueConfirmation = 2;
union u_ATTHandleValueConfirmation_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueConfirmation_ConnectionHandle;
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueConfirmation + 0];
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueConfirmation + 1];
mbufi_ATTHandleValueConfirmation += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 86:{
byte mbuf[20 - 2];
while (mbufi < (20 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_GenerateRandomNumberCompleted = 2;
union u_GenerateRandomNumberCompleted_Random_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_GenerateRandomNumberCompleted_Random;
u_GenerateRandomNumberCompleted_Random.bytebuffer[15] = mbuf[mbufi_GenerateRandomNumberCompleted + 0];
u_GenerateRandomNumberCompleted_Random.bytebuffer[14] = mbuf[mbufi_GenerateRandomNumberCompleted + 1];
u_GenerateRandomNumberCompleted_Random.bytebuffer[13] = mbuf[mbufi_GenerateRandomNumberCompleted + 2];
u_GenerateRandomNumberCompleted_Random.bytebuffer[12] = mbuf[mbufi_GenerateRandomNumberCompleted + 3];
u_GenerateRandomNumberCompleted_Random.bytebuffer[11] = mbuf[mbufi_GenerateRandomNumberCompleted + 4];
u_GenerateRandomNumberCompleted_Random.bytebuffer[10] = mbuf[mbufi_GenerateRandomNumberCompleted + 5];
u_GenerateRandomNumberCompleted_Random.bytebuffer[9] = mbuf[mbufi_GenerateRandomNumberCompleted + 6];
u_GenerateRandomNumberCompleted_Random.bytebuffer[8] = mbuf[mbufi_GenerateRandomNumberCompleted + 7];
u_GenerateRandomNumberCompleted_Random.bytebuffer[7] = mbuf[mbufi_GenerateRandomNumberCompleted + 8];
u_GenerateRandomNumberCompleted_Random.bytebuffer[6] = mbuf[mbufi_GenerateRandomNumberCompleted + 9];
u_GenerateRandomNumberCompleted_Random.bytebuffer[5] = mbuf[mbufi_GenerateRandomNumberCompleted + 10];
u_GenerateRandomNumberCompleted_Random.bytebuffer[4] = mbuf[mbufi_GenerateRandomNumberCompleted + 11];
u_GenerateRandomNumberCompleted_Random.bytebuffer[3] = mbuf[mbufi_GenerateRandomNumberCompleted + 12];
u_GenerateRandomNumberCompleted_Random.bytebuffer[2] = mbuf[mbufi_GenerateRandomNumberCompleted + 13];
u_GenerateRandomNumberCompleted_Random.bytebuffer[1] = mbuf[mbufi_GenerateRandomNumberCompleted + 14];
u_GenerateRandomNumberCompleted_Random.bytebuffer[0] = mbuf[mbufi_GenerateRandomNumberCompleted + 15];
mbufi_GenerateRandomNumberCompleted += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 5:{
Main_handle_Encrypter_GenerateRandomNumberCompleted(_instance,
 u_GenerateRandomNumberCompleted_Random.p /* Random */ );
return 1;
break;
}
}
break;
}
case 87:{
byte mbuf[20 - 2];
while (mbufi < (20 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_GenerateConfirmCompleted = 2;
union u_GenerateConfirmCompleted_Confirm_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_GenerateConfirmCompleted_Confirm;
u_GenerateConfirmCompleted_Confirm.bytebuffer[15] = mbuf[mbufi_GenerateConfirmCompleted + 0];
u_GenerateConfirmCompleted_Confirm.bytebuffer[14] = mbuf[mbufi_GenerateConfirmCompleted + 1];
u_GenerateConfirmCompleted_Confirm.bytebuffer[13] = mbuf[mbufi_GenerateConfirmCompleted + 2];
u_GenerateConfirmCompleted_Confirm.bytebuffer[12] = mbuf[mbufi_GenerateConfirmCompleted + 3];
u_GenerateConfirmCompleted_Confirm.bytebuffer[11] = mbuf[mbufi_GenerateConfirmCompleted + 4];
u_GenerateConfirmCompleted_Confirm.bytebuffer[10] = mbuf[mbufi_GenerateConfirmCompleted + 5];
u_GenerateConfirmCompleted_Confirm.bytebuffer[9] = mbuf[mbufi_GenerateConfirmCompleted + 6];
u_GenerateConfirmCompleted_Confirm.bytebuffer[8] = mbuf[mbufi_GenerateConfirmCompleted + 7];
u_GenerateConfirmCompleted_Confirm.bytebuffer[7] = mbuf[mbufi_GenerateConfirmCompleted + 8];
u_GenerateConfirmCompleted_Confirm.bytebuffer[6] = mbuf[mbufi_GenerateConfirmCompleted + 9];
u_GenerateConfirmCompleted_Confirm.bytebuffer[5] = mbuf[mbufi_GenerateConfirmCompleted + 10];
u_GenerateConfirmCompleted_Confirm.bytebuffer[4] = mbuf[mbufi_GenerateConfirmCompleted + 11];
u_GenerateConfirmCompleted_Confirm.bytebuffer[3] = mbuf[mbufi_GenerateConfirmCompleted + 12];
u_GenerateConfirmCompleted_Confirm.bytebuffer[2] = mbuf[mbufi_GenerateConfirmCompleted + 13];
u_GenerateConfirmCompleted_Confirm.bytebuffer[1] = mbuf[mbufi_GenerateConfirmCompleted + 14];
u_GenerateConfirmCompleted_Confirm.bytebuffer[0] = mbuf[mbufi_GenerateConfirmCompleted + 15];
mbufi_GenerateConfirmCompleted += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 5:{
Main_handle_Encrypter_GenerateConfirmCompleted(_instance,
 u_GenerateConfirmCompleted_Confirm.p /* Confirm */ );
return 1;
break;
}
}
break;
}
case 88:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_CheckConfirmCompleted = 2;
union u_CheckConfirmCompleted_Correct_t {
uint8_t p;
byte bytebuffer[1];
} u_CheckConfirmCompleted_Correct;
u_CheckConfirmCompleted_Correct.bytebuffer[0] = mbuf[mbufi_CheckConfirmCompleted + 0];
mbufi_CheckConfirmCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 5:{
Main_handle_Encrypter_CheckConfirmCompleted(_instance,
 u_CheckConfirmCompleted_Correct.p /* Correct */ );
return 1;
break;
}
}
break;
}
case 89:{
byte mbuf[20 - 2];
while (mbufi < (20 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_GenerateSTKCompleted = 2;
union u_GenerateSTKCompleted_STK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_GenerateSTKCompleted_STK;
u_GenerateSTKCompleted_STK.bytebuffer[15] = mbuf[mbufi_GenerateSTKCompleted + 0];
u_GenerateSTKCompleted_STK.bytebuffer[14] = mbuf[mbufi_GenerateSTKCompleted + 1];
u_GenerateSTKCompleted_STK.bytebuffer[13] = mbuf[mbufi_GenerateSTKCompleted + 2];
u_GenerateSTKCompleted_STK.bytebuffer[12] = mbuf[mbufi_GenerateSTKCompleted + 3];
u_GenerateSTKCompleted_STK.bytebuffer[11] = mbuf[mbufi_GenerateSTKCompleted + 4];
u_GenerateSTKCompleted_STK.bytebuffer[10] = mbuf[mbufi_GenerateSTKCompleted + 5];
u_GenerateSTKCompleted_STK.bytebuffer[9] = mbuf[mbufi_GenerateSTKCompleted + 6];
u_GenerateSTKCompleted_STK.bytebuffer[8] = mbuf[mbufi_GenerateSTKCompleted + 7];
u_GenerateSTKCompleted_STK.bytebuffer[7] = mbuf[mbufi_GenerateSTKCompleted + 8];
u_GenerateSTKCompleted_STK.bytebuffer[6] = mbuf[mbufi_GenerateSTKCompleted + 9];
u_GenerateSTKCompleted_STK.bytebuffer[5] = mbuf[mbufi_GenerateSTKCompleted + 10];
u_GenerateSTKCompleted_STK.bytebuffer[4] = mbuf[mbufi_GenerateSTKCompleted + 11];
u_GenerateSTKCompleted_STK.bytebuffer[3] = mbuf[mbufi_GenerateSTKCompleted + 12];
u_GenerateSTKCompleted_STK.bytebuffer[2] = mbuf[mbufi_GenerateSTKCompleted + 13];
u_GenerateSTKCompleted_STK.bytebuffer[1] = mbuf[mbufi_GenerateSTKCompleted + 14];
u_GenerateSTKCompleted_STK.bytebuffer[0] = mbuf[mbufi_GenerateSTKCompleted + 15];
mbufi_GenerateSTKCompleted += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 5:{
Main_handle_Encrypter_GenerateSTKCompleted(_instance,
 u_GenerateSTKCompleted_STK.p /* STK */ );
return 1;
break;
}
}
break;
}
case 3:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Opened = 2;
union u_Opened_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Opened_Address;
u_Opened_Address.bytebuffer[5] = mbuf[mbufi_Opened + 0];
u_Opened_Address.bytebuffer[4] = mbuf[mbufi_Opened + 1];
u_Opened_Address.bytebuffer[3] = mbuf[mbufi_Opened + 2];
u_Opened_Address.bytebuffer[2] = mbuf[mbufi_Opened + 3];
u_Opened_Address.bytebuffer[1] = mbuf[mbufi_Opened + 4];
u_Opened_Address.bytebuffer[0] = mbuf[mbufi_Opened + 5];
mbufi_Opened += 6;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 4:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Closed = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 5:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ResetCompleted = 2;
union u_ResetCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_ResetCompleted_NumberAllowedCommandPackets;
u_ResetCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_ResetCompleted + 0];
mbufi_ResetCompleted += 1;
union u_ResetCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_ResetCompleted_Status;
u_ResetCompleted_Status.bytebuffer[0] = mbuf[mbufi_ResetCompleted + 0];
mbufi_ResetCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 6:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetEventMaskCompleted = 2;
union u_SetEventMaskCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetEventMaskCompleted_NumberAllowedCommandPackets;
u_SetEventMaskCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetEventMaskCompleted + 0];
mbufi_SetEventMaskCompleted += 1;
union u_SetEventMaskCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetEventMaskCompleted_Status;
u_SetEventMaskCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetEventMaskCompleted + 0];
mbufi_SetEventMaskCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 8:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLocalNameCompleted = 2;
union u_SetLocalNameCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLocalNameCompleted_NumberAllowedCommandPackets;
u_SetLocalNameCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLocalNameCompleted + 0];
mbufi_SetLocalNameCompleted += 1;
union u_SetLocalNameCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLocalNameCompleted_Status;
u_SetLocalNameCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLocalNameCompleted + 0];
mbufi_SetLocalNameCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 9:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_DisconnectStatus = 2;
union u_DisconnectStatus_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectStatus_NumberAllowedCommandPackets;
u_DisconnectStatus_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_DisconnectStatus + 0];
mbufi_DisconnectStatus += 1;
union u_DisconnectStatus_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectStatus_Status;
u_DisconnectStatus_Status.bytebuffer[0] = mbuf[mbufi_DisconnectStatus + 0];
mbufi_DisconnectStatus += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 10:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_DisconnectionCompleted = 2;
union u_DisconnectionCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectionCompleted_Status;
u_DisconnectionCompleted_Status.bytebuffer[0] = mbuf[mbufi_DisconnectionCompleted + 0];
mbufi_DisconnectionCompleted += 1;
union u_DisconnectionCompleted_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_DisconnectionCompleted_ConnectionHandle;
u_DisconnectionCompleted_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_DisconnectionCompleted + 0];
u_DisconnectionCompleted_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_DisconnectionCompleted + 1];
mbufi_DisconnectionCompleted += 2;
union u_DisconnectionCompleted_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectionCompleted_Reason;
u_DisconnectionCompleted_Reason.bytebuffer[0] = mbuf[mbufi_DisconnectionCompleted + 0];
mbufi_DisconnectionCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 7:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEEventMaskCompleted = 2;
union u_SetLEEventMaskCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEEventMaskCompleted_NumberAllowedCommandPackets;
u_SetLEEventMaskCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEEventMaskCompleted + 0];
mbufi_SetLEEventMaskCompleted += 1;
union u_SetLEEventMaskCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEEventMaskCompleted_Status;
u_SetLEEventMaskCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEEventMaskCompleted + 0];
mbufi_SetLEEventMaskCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 11:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEAdvertisementParametersCompleted = 2;
union u_SetLEAdvertisementParametersCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParametersCompleted_NumberAllowedCommandPackets;
u_SetLEAdvertisementParametersCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParametersCompleted + 0];
mbufi_SetLEAdvertisementParametersCompleted += 1;
union u_SetLEAdvertisementParametersCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParametersCompleted_Status;
u_SetLEAdvertisementParametersCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParametersCompleted + 0];
mbufi_SetLEAdvertisementParametersCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 12:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEAdvertiseEnableCompleted = 2;
union u_SetLEAdvertiseEnableCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertiseEnableCompleted_NumberAllowedCommandPackets;
u_SetLEAdvertiseEnableCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEAdvertiseEnableCompleted + 0];
mbufi_SetLEAdvertiseEnableCompleted += 1;
union u_SetLEAdvertiseEnableCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertiseEnableCompleted_Status;
u_SetLEAdvertiseEnableCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEAdvertiseEnableCompleted + 0];
mbufi_SetLEAdvertiseEnableCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 13:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEAdvertisingDataCompleted = 2;
union u_SetLEAdvertisingDataCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisingDataCompleted_NumberAllowedCommandPackets;
u_SetLEAdvertisingDataCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingDataCompleted + 0];
mbufi_SetLEAdvertisingDataCompleted += 1;
union u_SetLEAdvertisingDataCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisingDataCompleted_Status;
u_SetLEAdvertisingDataCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingDataCompleted + 0];
mbufi_SetLEAdvertisingDataCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 14:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEScanResponseDataCompleted = 2;
union u_SetLEScanResponseDataCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanResponseDataCompleted_NumberAllowedCommandPackets;
u_SetLEScanResponseDataCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseDataCompleted + 0];
mbufi_SetLEScanResponseDataCompleted += 1;
union u_SetLEScanResponseDataCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanResponseDataCompleted_Status;
u_SetLEScanResponseDataCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseDataCompleted + 0];
mbufi_SetLEScanResponseDataCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 15:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEScanParametersCompleted = 2;
union u_SetLEScanParametersCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParametersCompleted_NumberAllowedCommandPackets;
u_SetLEScanParametersCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEScanParametersCompleted + 0];
mbufi_SetLEScanParametersCompleted += 1;
union u_SetLEScanParametersCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParametersCompleted_Status;
u_SetLEScanParametersCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEScanParametersCompleted + 0];
mbufi_SetLEScanParametersCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 6:{
Main_handle_HCIEvents_SetLEScanParametersCompleted(_instance,
 u_SetLEScanParametersCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEScanParametersCompleted_Status.p /* Status */ );
return 1;
break;
}
}
break;
}
case 16:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEScanEnableCompleted = 2;
union u_SetLEScanEnableCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnableCompleted_NumberAllowedCommandPackets;
u_SetLEScanEnableCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEScanEnableCompleted + 0];
mbufi_SetLEScanEnableCompleted += 1;
union u_SetLEScanEnableCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnableCompleted_Status;
u_SetLEScanEnableCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEScanEnableCompleted + 0];
mbufi_SetLEScanEnableCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 6:{
Main_handle_HCIEvents_SetLEScanEnableCompleted(_instance,
 u_SetLEScanEnableCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEScanEnableCompleted_Status.p /* Status */ );
return 1;
break;
}
}
break;
}
case 17:{
byte mbuf[44 - 2];
while (mbufi < (44 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LEAdvertisementReport = 2;
union u_LEAdvertisementReport_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_LEAdvertisementReport_Type;
u_LEAdvertisementReport_Type.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 0];
mbufi_LEAdvertisementReport += 1;
union u_LEAdvertisementReport_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LEAdvertisementReport_AddressType;
u_LEAdvertisementReport_AddressType.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 0];
mbufi_LEAdvertisementReport += 1;
union u_LEAdvertisementReport_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEAdvertisementReport_Address;
u_LEAdvertisementReport_Address.bytebuffer[5] = mbuf[mbufi_LEAdvertisementReport + 0];
u_LEAdvertisementReport_Address.bytebuffer[4] = mbuf[mbufi_LEAdvertisementReport + 1];
u_LEAdvertisementReport_Address.bytebuffer[3] = mbuf[mbufi_LEAdvertisementReport + 2];
u_LEAdvertisementReport_Address.bytebuffer[2] = mbuf[mbufi_LEAdvertisementReport + 3];
u_LEAdvertisementReport_Address.bytebuffer[1] = mbuf[mbufi_LEAdvertisementReport + 4];
u_LEAdvertisementReport_Address.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 5];
mbufi_LEAdvertisementReport += 6;
union u_LEAdvertisementReport_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_LEAdvertisementReport_Length;
u_LEAdvertisementReport_Length.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 0];
mbufi_LEAdvertisementReport += 1;
union u_LEAdvertisementReport_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_LEAdvertisementReport_Data;
u_LEAdvertisementReport_Data.bytebuffer[30] = mbuf[mbufi_LEAdvertisementReport + 0];
u_LEAdvertisementReport_Data.bytebuffer[29] = mbuf[mbufi_LEAdvertisementReport + 1];
u_LEAdvertisementReport_Data.bytebuffer[28] = mbuf[mbufi_LEAdvertisementReport + 2];
u_LEAdvertisementReport_Data.bytebuffer[27] = mbuf[mbufi_LEAdvertisementReport + 3];
u_LEAdvertisementReport_Data.bytebuffer[26] = mbuf[mbufi_LEAdvertisementReport + 4];
u_LEAdvertisementReport_Data.bytebuffer[25] = mbuf[mbufi_LEAdvertisementReport + 5];
u_LEAdvertisementReport_Data.bytebuffer[24] = mbuf[mbufi_LEAdvertisementReport + 6];
u_LEAdvertisementReport_Data.bytebuffer[23] = mbuf[mbufi_LEAdvertisementReport + 7];
u_LEAdvertisementReport_Data.bytebuffer[22] = mbuf[mbufi_LEAdvertisementReport + 8];
u_LEAdvertisementReport_Data.bytebuffer[21] = mbuf[mbufi_LEAdvertisementReport + 9];
u_LEAdvertisementReport_Data.bytebuffer[20] = mbuf[mbufi_LEAdvertisementReport + 10];
u_LEAdvertisementReport_Data.bytebuffer[19] = mbuf[mbufi_LEAdvertisementReport + 11];
u_LEAdvertisementReport_Data.bytebuffer[18] = mbuf[mbufi_LEAdvertisementReport + 12];
u_LEAdvertisementReport_Data.bytebuffer[17] = mbuf[mbufi_LEAdvertisementReport + 13];
u_LEAdvertisementReport_Data.bytebuffer[16] = mbuf[mbufi_LEAdvertisementReport + 14];
u_LEAdvertisementReport_Data.bytebuffer[15] = mbuf[mbufi_LEAdvertisementReport + 15];
u_LEAdvertisementReport_Data.bytebuffer[14] = mbuf[mbufi_LEAdvertisementReport + 16];
u_LEAdvertisementReport_Data.bytebuffer[13] = mbuf[mbufi_LEAdvertisementReport + 17];
u_LEAdvertisementReport_Data.bytebuffer[12] = mbuf[mbufi_LEAdvertisementReport + 18];
u_LEAdvertisementReport_Data.bytebuffer[11] = mbuf[mbufi_LEAdvertisementReport + 19];
u_LEAdvertisementReport_Data.bytebuffer[10] = mbuf[mbufi_LEAdvertisementReport + 20];
u_LEAdvertisementReport_Data.bytebuffer[9] = mbuf[mbufi_LEAdvertisementReport + 21];
u_LEAdvertisementReport_Data.bytebuffer[8] = mbuf[mbufi_LEAdvertisementReport + 22];
u_LEAdvertisementReport_Data.bytebuffer[7] = mbuf[mbufi_LEAdvertisementReport + 23];
u_LEAdvertisementReport_Data.bytebuffer[6] = mbuf[mbufi_LEAdvertisementReport + 24];
u_LEAdvertisementReport_Data.bytebuffer[5] = mbuf[mbufi_LEAdvertisementReport + 25];
u_LEAdvertisementReport_Data.bytebuffer[4] = mbuf[mbufi_LEAdvertisementReport + 26];
u_LEAdvertisementReport_Data.bytebuffer[3] = mbuf[mbufi_LEAdvertisementReport + 27];
u_LEAdvertisementReport_Data.bytebuffer[2] = mbuf[mbufi_LEAdvertisementReport + 28];
u_LEAdvertisementReport_Data.bytebuffer[1] = mbuf[mbufi_LEAdvertisementReport + 29];
u_LEAdvertisementReport_Data.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 30];
mbufi_LEAdvertisementReport += 31;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 6:{
Main_handle_HCIEvents_LEAdvertisementReport(_instance,
 u_LEAdvertisementReport_Type.p /* Type */ ,
 u_LEAdvertisementReport_AddressType.p /* AddressType */ ,
 u_LEAdvertisementReport_Address.p /* Address */ ,
 u_LEAdvertisementReport_Length.p /* Length */ ,
 u_LEAdvertisementReport_Data.p /* Data */ );
return 1;
break;
}
}
break;
}
case 18:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LECreateConnectionStatus = 2;
union u_LECreateConnectionStatus_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionStatus_NumberAllowedCommandPackets;
u_LECreateConnectionStatus_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LECreateConnectionStatus + 0];
mbufi_LECreateConnectionStatus += 1;
union u_LECreateConnectionStatus_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionStatus_Status;
u_LECreateConnectionStatus_Status.bytebuffer[0] = mbuf[mbufi_LECreateConnectionStatus + 0];
mbufi_LECreateConnectionStatus += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 19:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LECreateConnectionCancelCompleted = 2;
union u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets;
u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LECreateConnectionCancelCompleted + 0];
mbufi_LECreateConnectionCancelCompleted += 1;
union u_LECreateConnectionCancelCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionCancelCompleted_Status;
u_LECreateConnectionCancelCompleted_Status.bytebuffer[0] = mbuf[mbufi_LECreateConnectionCancelCompleted + 0];
mbufi_LECreateConnectionCancelCompleted += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 20:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LEConnectionComplete = 2;
union u_LEConnectionComplete_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_Status;
u_LEConnectionComplete_Status.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
union u_LEConnectionComplete_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_ConnectionHandle;
u_LEConnectionComplete_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_Role;
u_LEConnectionComplete_Role.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
union u_LEConnectionComplete_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_PeerAddressType;
u_LEConnectionComplete_PeerAddressType.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
union u_LEConnectionComplete_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEConnectionComplete_PeerAddress;
u_LEConnectionComplete_PeerAddress.bytebuffer[5] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_PeerAddress.bytebuffer[4] = mbuf[mbufi_LEConnectionComplete + 1];
u_LEConnectionComplete_PeerAddress.bytebuffer[3] = mbuf[mbufi_LEConnectionComplete + 2];
u_LEConnectionComplete_PeerAddress.bytebuffer[2] = mbuf[mbufi_LEConnectionComplete + 3];
u_LEConnectionComplete_PeerAddress.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 4];
u_LEConnectionComplete_PeerAddress.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 5];
mbufi_LEConnectionComplete += 6;
union u_LEConnectionComplete_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_ConnInterval;
u_LEConnectionComplete_ConnInterval.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_ConnInterval.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_ConnLatency;
u_LEConnectionComplete_ConnLatency.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_ConnLatency.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_SupervisionTimeout;
u_LEConnectionComplete_SupervisionTimeout.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_SupervisionTimeout.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_MasterClockAccuracy;
u_LEConnectionComplete_MasterClockAccuracy.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 21:{
byte mbuf[34 - 2];
while (mbufi < (34 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LEEnhancedConnectionComplete = 2;
union u_LEEnhancedConnectionComplete_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_Status;
u_LEEnhancedConnectionComplete_Status.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
union u_LEEnhancedConnectionComplete_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_ConnectionHandle;
u_LEEnhancedConnectionComplete_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_Role;
u_LEEnhancedConnectionComplete_Role.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
union u_LEEnhancedConnectionComplete_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_PeerAddressType;
u_LEEnhancedConnectionComplete_PeerAddressType.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
union u_LEEnhancedConnectionComplete_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEEnhancedConnectionComplete_PeerAddress;
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[5] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[4] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[3] = mbuf[mbufi_LEEnhancedConnectionComplete + 2];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[2] = mbuf[mbufi_LEEnhancedConnectionComplete + 3];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 4];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 5];
mbufi_LEEnhancedConnectionComplete += 6;
union u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress;
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[5] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[4] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[3] = mbuf[mbufi_LEEnhancedConnectionComplete + 2];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[2] = mbuf[mbufi_LEEnhancedConnectionComplete + 3];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 4];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 5];
mbufi_LEEnhancedConnectionComplete += 6;
union u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress;
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[5] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[4] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[3] = mbuf[mbufi_LEEnhancedConnectionComplete + 2];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[2] = mbuf[mbufi_LEEnhancedConnectionComplete + 3];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 4];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 5];
mbufi_LEEnhancedConnectionComplete += 6;
union u_LEEnhancedConnectionComplete_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_ConnInterval;
u_LEEnhancedConnectionComplete_ConnInterval.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_ConnInterval.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_ConnLatency;
u_LEEnhancedConnectionComplete_ConnLatency.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_ConnLatency.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_SupervisionTimeout;
u_LEEnhancedConnectionComplete_SupervisionTimeout.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_SupervisionTimeout.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_MasterClockAccuracy;
u_LEEnhancedConnectionComplete_MasterClockAccuracy.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 22:{
byte mbuf[14 - 2];
while (mbufi < (14 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LERandCompleted = 2;
union u_LERandCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LERandCompleted_NumberAllowedCommandPackets;
u_LERandCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LERandCompleted + 0];
mbufi_LERandCompleted += 1;
union u_LERandCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LERandCompleted_Status;
u_LERandCompleted_Status.bytebuffer[0] = mbuf[mbufi_LERandCompleted + 0];
mbufi_LERandCompleted += 1;
union u_LERandCompleted_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_LERandCompleted_Random;
u_LERandCompleted_Random.bytebuffer[7] = mbuf[mbufi_LERandCompleted + 0];
u_LERandCompleted_Random.bytebuffer[6] = mbuf[mbufi_LERandCompleted + 1];
u_LERandCompleted_Random.bytebuffer[5] = mbuf[mbufi_LERandCompleted + 2];
u_LERandCompleted_Random.bytebuffer[4] = mbuf[mbufi_LERandCompleted + 3];
u_LERandCompleted_Random.bytebuffer[3] = mbuf[mbufi_LERandCompleted + 4];
u_LERandCompleted_Random.bytebuffer[2] = mbuf[mbufi_LERandCompleted + 5];
u_LERandCompleted_Random.bytebuffer[1] = mbuf[mbufi_LERandCompleted + 6];
u_LERandCompleted_Random.bytebuffer[0] = mbuf[mbufi_LERandCompleted + 7];
mbufi_LERandCompleted += 8;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 23:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LEEncryptCompleted = 2;
union u_LEEncryptCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEncryptCompleted_NumberAllowedCommandPackets;
u_LEEncryptCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LEEncryptCompleted + 0];
mbufi_LEEncryptCompleted += 1;
union u_LEEncryptCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEncryptCompleted_Status;
u_LEEncryptCompleted_Status.bytebuffer[0] = mbuf[mbufi_LEEncryptCompleted + 0];
mbufi_LEEncryptCompleted += 1;
union u_LEEncryptCompleted_Encrypted_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEEncryptCompleted_Encrypted;
u_LEEncryptCompleted_Encrypted.bytebuffer[15] = mbuf[mbufi_LEEncryptCompleted + 0];
u_LEEncryptCompleted_Encrypted.bytebuffer[14] = mbuf[mbufi_LEEncryptCompleted + 1];
u_LEEncryptCompleted_Encrypted.bytebuffer[13] = mbuf[mbufi_LEEncryptCompleted + 2];
u_LEEncryptCompleted_Encrypted.bytebuffer[12] = mbuf[mbufi_LEEncryptCompleted + 3];
u_LEEncryptCompleted_Encrypted.bytebuffer[11] = mbuf[mbufi_LEEncryptCompleted + 4];
u_LEEncryptCompleted_Encrypted.bytebuffer[10] = mbuf[mbufi_LEEncryptCompleted + 5];
u_LEEncryptCompleted_Encrypted.bytebuffer[9] = mbuf[mbufi_LEEncryptCompleted + 6];
u_LEEncryptCompleted_Encrypted.bytebuffer[8] = mbuf[mbufi_LEEncryptCompleted + 7];
u_LEEncryptCompleted_Encrypted.bytebuffer[7] = mbuf[mbufi_LEEncryptCompleted + 8];
u_LEEncryptCompleted_Encrypted.bytebuffer[6] = mbuf[mbufi_LEEncryptCompleted + 9];
u_LEEncryptCompleted_Encrypted.bytebuffer[5] = mbuf[mbufi_LEEncryptCompleted + 10];
u_LEEncryptCompleted_Encrypted.bytebuffer[4] = mbuf[mbufi_LEEncryptCompleted + 11];
u_LEEncryptCompleted_Encrypted.bytebuffer[3] = mbuf[mbufi_LEEncryptCompleted + 12];
u_LEEncryptCompleted_Encrypted.bytebuffer[2] = mbuf[mbufi_LEEncryptCompleted + 13];
u_LEEncryptCompleted_Encrypted.bytebuffer[1] = mbuf[mbufi_LEEncryptCompleted + 14];
u_LEEncryptCompleted_Encrypted.bytebuffer[0] = mbuf[mbufi_LEEncryptCompleted + 15];
mbufi_LEEncryptCompleted += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 24:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_EncryptionChanged = 2;
union u_EncryptionChanged_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_EncryptionChanged_Status;
u_EncryptionChanged_Status.bytebuffer[0] = mbuf[mbufi_EncryptionChanged + 0];
mbufi_EncryptionChanged += 1;
union u_EncryptionChanged_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EncryptionChanged_ConnectionHandle;
u_EncryptionChanged_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_EncryptionChanged + 0];
u_EncryptionChanged_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_EncryptionChanged + 1];
mbufi_EncryptionChanged += 2;
union u_EncryptionChanged_Enabled_t {
uint8_t p;
byte bytebuffer[1];
} u_EncryptionChanged_Enabled;
u_EncryptionChanged_Enabled.bytebuffer[0] = mbuf[mbufi_EncryptionChanged + 0];
mbufi_EncryptionChanged += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 6:{
Main_handle_HCIEvents_EncryptionChanged(_instance,
 u_EncryptionChanged_Status.p /* Status */ ,
 u_EncryptionChanged_ConnectionHandle.p /* ConnectionHandle */ ,
 u_EncryptionChanged_Enabled.p /* Enabled */ );
return 1;
break;
}
}
break;
}
case 25:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LEStartEncryptionStatus = 2;
union u_LEStartEncryptionStatus_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LEStartEncryptionStatus_NumberAllowedCommandPackets;
u_LEStartEncryptionStatus_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LEStartEncryptionStatus + 0];
mbufi_LEStartEncryptionStatus += 1;
union u_LEStartEncryptionStatus_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEStartEncryptionStatus_Status;
u_LEStartEncryptionStatus_Status.bytebuffer[0] = mbuf[mbufi_LEStartEncryptionStatus + 0];
mbufi_LEStartEncryptionStatus += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 6:{
Main_handle_HCIEvents_LEStartEncryptionStatus(_instance,
 u_LEStartEncryptionStatus_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LEStartEncryptionStatus_Status.p /* Status */ );
return 1;
break;
}
}
break;
}
}
return 1;
}

// Thing main:
void Main_run(struct Main_Instance * _instance) {
if(_instance->initState != -1) {
Main_States_OnEntry(_instance->initState, _instance);
}
    while(1){
        int emptyEventConsumed = 1;
        while (emptyEventConsumed != 0) {
            emptyEventConsumed = 0;
            emptyEventConsumed += Main_handle_empty_event(_instance);
        }
        Main_processMessageQueue(_instance);
    }
}


