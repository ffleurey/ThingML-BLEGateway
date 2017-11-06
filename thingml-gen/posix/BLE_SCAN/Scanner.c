/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing Scanner
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "Scanner.h"

/*****************************************************************************
 * Implementation for type : Scanner
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Scanner_States_OnExit(int state, struct Scanner_Instance *_instance);
//Prototypes: Message Sending
void Scanner_send_Signals_Quit(struct Scanner_Instance *_instance, int16_t code);
void Scanner_send_Socket_Open(struct Scanner_Instance *_instance);
void Scanner_send_Socket_Close(struct Scanner_Instance *_instance);
void Scanner_send_HCICommands_Reset(struct Scanner_Instance *_instance);
void Scanner_send_HCICommands_SetEventMask(struct Scanner_Instance *_instance, set_event_mask_cp Mask);
void Scanner_send_HCICommands_SetEventMaskAll(struct Scanner_Instance *_instance);
void Scanner_send_HCICommands_SetLocalName(struct Scanner_Instance *_instance, change_local_name_cp Name);
void Scanner_send_HCICommands_Disconnect(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason);
void Scanner_send_HCICommands_SetLEEventMask(struct Scanner_Instance *_instance, set_event_mask_cp Mask);
void Scanner_send_HCICommands_SetLEEventMaskAll(struct Scanner_Instance *_instance);
void Scanner_send_HCICommands_SetLEAdvertisementParameters(struct Scanner_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy);
void Scanner_send_HCICommands_SetLEAdvertiseEnable(struct Scanner_Instance *_instance, uint8_t Enable);
void Scanner_send_HCICommands_SetLEAdvertisingData(struct Scanner_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void Scanner_send_HCICommands_SetLEScanResponseData(struct Scanner_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void Scanner_send_HCICommands_SetLEScanParameters(struct Scanner_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy);
void Scanner_send_HCICommands_SetLEScanEnable(struct Scanner_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates);
void Scanner_send_HCICommands_LECreateConnection(struct Scanner_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax);
void Scanner_send_HCICommands_LECreateConnectionCancel(struct Scanner_Instance *_instance);
void Scanner_send_HCICommands_LERand(struct Scanner_Instance *_instance);
void Scanner_send_HCICommands_LEEncrypt(struct Scanner_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext);
void Scanner_send_HCICommands_LEStartEncryption(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK);
void Scanner_send_SMP_SMPPairingRequest(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void Scanner_send_SMP_SMPPairingResponse(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void Scanner_send_SMP_SMPPairingConfirm(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void Scanner_send_SMP_SMPPairingRandom(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void Scanner_send_SMP_SMPPairingFailed(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t Reason);
void Scanner_send_SMP_SMPPairingPublicKey(struct Scanner_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void Scanner_send_SMP_SMPPairingDHKeyCheck(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void Scanner_send_SMP_SMPKeypressNotification(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t Type);
void Scanner_send_SMP_SMPEncryptionInformation(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void Scanner_send_SMP_SMPMasterIdentification(struct Scanner_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void Scanner_send_SMP_SMPIdentityInformation(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void Scanner_send_SMP_SMPIdentityAddressInformation(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void Scanner_send_SMP_SMPSigningInformation(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
void Scanner_send_SMP_SMPSecurityRequest(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void Scanner_send_ATT_ATTFindInformationRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void Scanner_send_ATT_ATTFindInformationResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void Scanner_send_ATT_ATTFindInformationError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Scanner_send_ATT_ATTReadByTypeRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void Scanner_send_ATT_ATTReadByTypeResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void Scanner_send_ATT_ATTReadByTypeError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Scanner_send_ATT_ATTReadRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void Scanner_send_ATT_ATTReadResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void Scanner_send_ATT_ATTReadError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Scanner_send_ATT_ATTReadByGroupTypeRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void Scanner_send_ATT_ATTReadByGroupTypeResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void Scanner_send_ATT_ATTReadByGroupTypeError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Scanner_send_ATT_ATTWriteRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Scanner_send_ATT_ATTWriteResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle);
void Scanner_send_ATT_ATTWriteError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void Scanner_send_ATT_ATTWriteCommand(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Scanner_send_ATT_ATTHandleValueNotification(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Scanner_send_ATT_ATTHandleValueIndication(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void Scanner_send_ATT_ATTHandleValueConfirmation(struct Scanner_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
void f_Scanner_PrintAdvertisementData(struct Scanner_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void f_Scanner_PrintAdvertisementReport(struct Scanner_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data);
ble_uuid_t f_Scanner_ReadUUID(struct Scanner_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_Scanner_MakeUUID(struct Scanner_Instance *_instance, const char * Text);
void f_Scanner_PrintUUID(struct Scanner_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function PrintAdvertisementData
void f_Scanner_PrintAdvertisementData(struct Scanner_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {

      printf("\tData:\n");
      uint8_t index = 0;
      while (index < Length) {
        uint8_t len = Data.bytes[index];
        uint8_t type = Data.bytes[index+1];
        uint8_t n = 0;


        switch (type) {
          case 0x01:
            printf("\t\t Flags: ");
            if (Data.bytes[index+2] & 0x01) printf("[LE limited discoverable] ");
            if (Data.bytes[index+2] & 0x02) printf("[LE general discoverable] ");
            if (Data.bytes[index+2] & 0x04) printf("[BR/EDR not supported] ");
            if (Data.bytes[index+2] & 0x08) printf("[Simultanous LE+BR/EDR to same controller] ");
            if (Data.bytes[index+2] & 0x10) printf("[Simultanous LE+BR/EDR to same host] ");
            printf("\n");
            break;

          case 0x08:
          case 0x09:
            printf("\t\t Local Name: %.*s\n", len-1, &(Data.bytes[index+2]));
            break;

          case 0x02:
          case 0x03:
            printf("\t\t Services (16-bit): ");
            while (n < (len-1)) {
              printf("[%2.2X%2.2X] ",Data.bytes[index+2+n+1],Data.bytes[index+2+n+0]);
              n += 2;
            }
            printf("\n");
            break;

          case 0x04:
          case 0x05:
            printf("\t\t Services (32-bit): ");
            while (n < (len-1)) {
              printf("[%2.2X%2.2X%2.2X%2.2X] ",Data.bytes[index+2+n+3],Data.bytes[index+2+n+2],Data.bytes[index+2+n+1],Data.bytes[index+2+n+0]);
              n += 4;
            }
            printf("\n");
            break;

          case 0x06:
          case 0x07:
            printf("\t\t Services (128-bit): ");
            while (n < (len-1)) {
              printf("[%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X] ",
                  Data.bytes[index+2+n+15],Data.bytes[index+2+n+14],Data.bytes[index+2+n+13],Data.bytes[index+2+n+12],
                  Data.bytes[index+2+n+11],Data.bytes[index+2+n+10],Data.bytes[index+2+n+ 9],Data.bytes[index+2+n+ 8],
                  Data.bytes[index+2+n+ 7],Data.bytes[index+2+n+ 6],Data.bytes[index+2+n+ 5],Data.bytes[index+2+n+ 4],
                  Data.bytes[index+2+n+ 3],Data.bytes[index+2+n+ 2],Data.bytes[index+2+n+ 1],Data.bytes[index+2+n+ 0]);
              n += 16;
            }
            printf("\n");
            break;

          default:
            printf("\t\t Type %2.2X [%d]\n", type, len);
        }


        index += 1+len;
      }
    
}
// Definition of function PrintAdvertisementReport
void f_Scanner_PrintAdvertisementReport(struct Scanner_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {

      printf("Advertisement report:\n");

      printf("\tType: ");
      switch (Type) {
        case 0x00:
          printf("connectable unidirected advertising\n");
          break;
        case 0x01:
          printf("connactable directed advertising\n");
          break;
        case 0x02:
          printf("scannable unidirected advertising\n");
          break;
        case 0x03:
          printf("non-connectable unidirected advertising\n");
          break;
        case 0x04:
          printf("scan response\n");
          break;
      }

      printf("\tAddress type: ");
      switch (AddressType) {
        case 0x00:
          printf("public device address\n");
          break;
        case 0x01:
          printf("random device address\n");
          break;
        case 0x02:
          printf("public identity address\n");
          break;
        case 0x03:
          printf("random (static) device address\n");
          break;
      }

      printf("\tAddress: %2.2X:%2.2X:%2.2X:%2.2X:%2.2X:%2.2X\n", Address.b[5],Address.b[4],Address.b[3],Address.b[2],Address.b[1],Address.b[0]);
    
f_Scanner_PrintAdvertisementData(_instance, Length, Data);
}
// Definition of function ReadUUID
ble_uuid_t f_Scanner_ReadUUID(struct Scanner_Instance *_instance, uint16_t Length, uint8_t * Data) {
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
ble_uuid_t f_Scanner_MakeUUID(struct Scanner_Instance *_instance, const char * Text) {
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
void f_Scanner_PrintUUID(struct Scanner_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// Sessions functionss:


// On Entry Actions:
void Scanner_States_OnEntry(int state, struct Scanner_Instance *_instance) {
switch(state) {
case SCANNER_STATES_STATE:{
_instance->Scanner_States_State = SCANNER_STATES_OPEN_STATE;
Scanner_States_OnEntry(_instance->Scanner_States_State, _instance);
break;
}
case SCANNER_STATES_OPEN_STATE:{
fprintf(stdout, "[INFO]: Opening HCI socket...\n");
Scanner_send_Socket_Open(_instance);
break;
}
case SCANNER_STATES_INITIALISE_STATE:{
fprintf(stdout, "[INFO]: Initialising BLE Controller...\n");
Scanner_send_HCICommands_Reset(_instance);
break;
}
case SCANNER_STATES_QUIT_STATE:{
Scanner_send_Signals_Quit(_instance, 0);
break;
}
case SCANNER_STATES_SCANNING_STATE:{
fprintf(stdout, "[INFO]: Scanning :)\n");
break;
}
case SCANNER_STATES_FAILURE_STATE:{
fprintf(stdout, "[ERROR]: Something went wrong :(\n");
Scanner_send_Socket_Close(_instance);
break;
}
case SCANNER_STATES_CLOSE_STATE:{
fprintf(stdout, "[INFO]: Closing HCI socket...\n");
Scanner_send_Socket_Close(_instance);
break;
}
case SCANNER_STATES_SETSCANNINGPARAMETERS_STATE:{
fprintf(stdout, "[INFO]: Setting scan parameters...\n");
;uint8_t Type = BLESCANTYPE_ACTIVE;
;int16_t Interval = 0x0010;
;int16_t Window = 0x0010;
;uint8_t OwnAddressType = BLEADDRESSTYPE_PUBLIC;
;uint8_t FilterPolicy = BLESCANFILTERPOLICY_ALL;
Scanner_send_HCICommands_SetLEScanParameters(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
break;
}
default: break;
}
}

// On Exit Actions:
void Scanner_States_OnExit(int state, struct Scanner_Instance *_instance) {
switch(state) {
case SCANNER_STATES_STATE:{
Scanner_States_OnExit(_instance->Scanner_States_State, _instance);
break;}
case SCANNER_STATES_OPEN_STATE:{
break;}
case SCANNER_STATES_INITIALISE_STATE:{
break;}
case SCANNER_STATES_QUIT_STATE:{
break;}
case SCANNER_STATES_SCANNING_STATE:{
break;}
case SCANNER_STATES_FAILURE_STATE:{
break;}
case SCANNER_STATES_CLOSE_STATE:{
break;}
case SCANNER_STATES_SETSCANNINGPARAMETERS_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Scanner_handle_Socket_Opened(struct Scanner_Instance *_instance, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_OPEN_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_States_OnExit(SCANNER_STATES_OPEN_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_INITIALISE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_INITIALISE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_Socket_Closed(struct Scanner_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_OPEN_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_States_OnExit(SCANNER_STATES_OPEN_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_QUIT_STATE;
Scanner_States_OnEntry(SCANNER_STATES_QUIT_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
else if (_instance->Scanner_States_State == SCANNER_STATES_FAILURE_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_States_OnExit(SCANNER_STATES_FAILURE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_QUIT_STATE;
Scanner_States_OnEntry(SCANNER_STATES_QUIT_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
else if (_instance->Scanner_States_State == SCANNER_STATES_CLOSE_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_States_OnExit(SCANNER_STATES_CLOSE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_QUIT_STATE;
Scanner_States_OnEntry(SCANNER_STATES_QUIT_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_Signals_Interrupt(struct Scanner_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_INITIALISE_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_States_OnExit(SCANNER_STATES_INITIALISE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_CLOSE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_CLOSE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
else if (_instance->Scanner_States_State == SCANNER_STATES_SCANNING_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_send_HCICommands_SetLEScanEnable(_instance, 0x00, 0x00);
Scanner_States_State_event_consumed = 1;
}
}
else if (_instance->Scanner_States_State == SCANNER_STATES_FAILURE_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_States_OnExit(SCANNER_STATES_FAILURE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_QUIT_STATE;
Scanner_States_OnEntry(SCANNER_STATES_QUIT_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
else if (_instance->Scanner_States_State == SCANNER_STATES_CLOSE_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
Scanner_States_OnExit(SCANNER_STATES_CLOSE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_QUIT_STATE;
Scanner_States_OnEntry(SCANNER_STATES_QUIT_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_HCIEvents_LEAdvertisementReport(struct Scanner_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_SCANNING_STATE) {
if (Scanner_States_State_event_consumed == 0 && 1) {
fprintf(stdout, "[INFO]: Got advertisement report!\n");
f_Scanner_PrintAdvertisementReport(_instance, Type, AddressType, Address, Length, Data);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_HCIEvents_ResetCompleted(struct Scanner_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_INITIALISE_STATE) {
if (Scanner_States_State_event_consumed == 0 && (Status > 0)) {
Scanner_States_OnExit(SCANNER_STATES_INITIALISE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_FAILURE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_FAILURE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
else if (Scanner_States_State_event_consumed == 0 && (Status == 0)) {
Scanner_send_HCICommands_SetEventMaskAll(_instance);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_HCIEvents_SetLEScanEnableCompleted(struct Scanner_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_SETSCANNINGPARAMETERS_STATE) {
if (Scanner_States_State_event_consumed == 0 && (Status == 0)) {
Scanner_States_OnExit(SCANNER_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_SCANNING_STATE;
Scanner_States_OnEntry(SCANNER_STATES_SCANNING_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
else if (Scanner_States_State_event_consumed == 0 && (Status > 0)) {
Scanner_States_OnExit(SCANNER_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_FAILURE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_FAILURE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
else if (_instance->Scanner_States_State == SCANNER_STATES_SCANNING_STATE) {
if (Scanner_States_State_event_consumed == 0 && (Status == 0)) {
Scanner_States_OnExit(SCANNER_STATES_SCANNING_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_CLOSE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_CLOSE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
else if (Scanner_States_State_event_consumed == 0 && (Status > 0)) {
Scanner_States_OnExit(SCANNER_STATES_SCANNING_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_FAILURE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_FAILURE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_HCIEvents_SetEventMaskCompleted(struct Scanner_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_INITIALISE_STATE) {
if (Scanner_States_State_event_consumed == 0 && (Status > 0)) {
Scanner_States_OnExit(SCANNER_STATES_INITIALISE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_FAILURE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_FAILURE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
else if (Scanner_States_State_event_consumed == 0 && (Status == 0)) {
Scanner_send_HCICommands_SetLEEventMaskAll(_instance);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_HCIEvents_SetLEEventMaskCompleted(struct Scanner_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_INITIALISE_STATE) {
if (Scanner_States_State_event_consumed == 0 && (Status == 0)) {
Scanner_States_OnExit(SCANNER_STATES_INITIALISE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_SETSCANNINGPARAMETERS_STATE;
Scanner_States_OnEntry(SCANNER_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
else if (Scanner_States_State_event_consumed == 0 && (Status > 0)) {
Scanner_States_OnExit(SCANNER_STATES_INITIALISE_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_FAILURE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_FAILURE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Scanner_handle_HCIEvents_SetLEScanParametersCompleted(struct Scanner_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t Scanner_States_State_event_consumed = 0;
if (_instance->Scanner_States_State == SCANNER_STATES_SETSCANNINGPARAMETERS_STATE) {
if (Scanner_States_State_event_consumed == 0 && (Status > 0)) {
Scanner_States_OnExit(SCANNER_STATES_SETSCANNINGPARAMETERS_STATE, _instance);
_instance->Scanner_States_State = SCANNER_STATES_FAILURE_STATE;
Scanner_States_OnEntry(SCANNER_STATES_FAILURE_STATE, _instance);
Scanner_States_State_event_consumed = 1;
}
else if (Scanner_States_State_event_consumed == 0 && (Status == 0)) {
Scanner_send_HCICommands_SetLEScanEnable(_instance, 0x01, 0x00);
Scanner_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_Scanner_send_Signals_Quit_listener)(struct Scanner_Instance *, int16_t)= 0x0;
void (*Scanner_send_Signals_Quit_listener)(struct Scanner_Instance *, int16_t)= 0x0;
void register_external_Scanner_send_Signals_Quit_listener(void (*_listener)(struct Scanner_Instance *, int16_t)){
external_Scanner_send_Signals_Quit_listener = _listener;
}
void register_Scanner_send_Signals_Quit_listener(void (*_listener)(struct Scanner_Instance *, int16_t)){
Scanner_send_Signals_Quit_listener = _listener;
}
void Scanner_send_Signals_Quit(struct Scanner_Instance *_instance, int16_t code){
if (Scanner_send_Signals_Quit_listener != 0x0) Scanner_send_Signals_Quit_listener(_instance, code);
if (external_Scanner_send_Signals_Quit_listener != 0x0) external_Scanner_send_Signals_Quit_listener(_instance, code);
;
}
void (*external_Scanner_send_Socket_Open_listener)(struct Scanner_Instance *)= 0x0;
void (*Scanner_send_Socket_Open_listener)(struct Scanner_Instance *)= 0x0;
void register_external_Scanner_send_Socket_Open_listener(void (*_listener)(struct Scanner_Instance *)){
external_Scanner_send_Socket_Open_listener = _listener;
}
void register_Scanner_send_Socket_Open_listener(void (*_listener)(struct Scanner_Instance *)){
Scanner_send_Socket_Open_listener = _listener;
}
void Scanner_send_Socket_Open(struct Scanner_Instance *_instance){
if (Scanner_send_Socket_Open_listener != 0x0) Scanner_send_Socket_Open_listener(_instance);
if (external_Scanner_send_Socket_Open_listener != 0x0) external_Scanner_send_Socket_Open_listener(_instance);
;
}
void (*external_Scanner_send_Socket_Close_listener)(struct Scanner_Instance *)= 0x0;
void (*Scanner_send_Socket_Close_listener)(struct Scanner_Instance *)= 0x0;
void register_external_Scanner_send_Socket_Close_listener(void (*_listener)(struct Scanner_Instance *)){
external_Scanner_send_Socket_Close_listener = _listener;
}
void register_Scanner_send_Socket_Close_listener(void (*_listener)(struct Scanner_Instance *)){
Scanner_send_Socket_Close_listener = _listener;
}
void Scanner_send_Socket_Close(struct Scanner_Instance *_instance){
if (Scanner_send_Socket_Close_listener != 0x0) Scanner_send_Socket_Close_listener(_instance);
if (external_Scanner_send_Socket_Close_listener != 0x0) external_Scanner_send_Socket_Close_listener(_instance);
;
}
void (*external_Scanner_send_HCICommands_Reset_listener)(struct Scanner_Instance *)= 0x0;
void (*Scanner_send_HCICommands_Reset_listener)(struct Scanner_Instance *)= 0x0;
void register_external_Scanner_send_HCICommands_Reset_listener(void (*_listener)(struct Scanner_Instance *)){
external_Scanner_send_HCICommands_Reset_listener = _listener;
}
void register_Scanner_send_HCICommands_Reset_listener(void (*_listener)(struct Scanner_Instance *)){
Scanner_send_HCICommands_Reset_listener = _listener;
}
void Scanner_send_HCICommands_Reset(struct Scanner_Instance *_instance){
if (Scanner_send_HCICommands_Reset_listener != 0x0) Scanner_send_HCICommands_Reset_listener(_instance);
if (external_Scanner_send_HCICommands_Reset_listener != 0x0) external_Scanner_send_HCICommands_Reset_listener(_instance);
;
}
void (*external_Scanner_send_HCICommands_SetEventMask_listener)(struct Scanner_Instance *, set_event_mask_cp)= 0x0;
void (*Scanner_send_HCICommands_SetEventMask_listener)(struct Scanner_Instance *, set_event_mask_cp)= 0x0;
void register_external_Scanner_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Scanner_Instance *, set_event_mask_cp)){
external_Scanner_send_HCICommands_SetEventMask_listener = _listener;
}
void register_Scanner_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Scanner_Instance *, set_event_mask_cp)){
Scanner_send_HCICommands_SetEventMask_listener = _listener;
}
void Scanner_send_HCICommands_SetEventMask(struct Scanner_Instance *_instance, set_event_mask_cp Mask){
if (Scanner_send_HCICommands_SetEventMask_listener != 0x0) Scanner_send_HCICommands_SetEventMask_listener(_instance, Mask);
if (external_Scanner_send_HCICommands_SetEventMask_listener != 0x0) external_Scanner_send_HCICommands_SetEventMask_listener(_instance, Mask);
;
}
void (*external_Scanner_send_HCICommands_SetEventMaskAll_listener)(struct Scanner_Instance *)= 0x0;
void (*Scanner_send_HCICommands_SetEventMaskAll_listener)(struct Scanner_Instance *)= 0x0;
void register_external_Scanner_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Scanner_Instance *)){
external_Scanner_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void register_Scanner_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Scanner_Instance *)){
Scanner_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void Scanner_send_HCICommands_SetEventMaskAll(struct Scanner_Instance *_instance){
if (Scanner_send_HCICommands_SetEventMaskAll_listener != 0x0) Scanner_send_HCICommands_SetEventMaskAll_listener(_instance);
if (external_Scanner_send_HCICommands_SetEventMaskAll_listener != 0x0) external_Scanner_send_HCICommands_SetEventMaskAll_listener(_instance);
;
}
void (*external_Scanner_send_HCICommands_SetLocalName_listener)(struct Scanner_Instance *, change_local_name_cp)= 0x0;
void (*Scanner_send_HCICommands_SetLocalName_listener)(struct Scanner_Instance *, change_local_name_cp)= 0x0;
void register_external_Scanner_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Scanner_Instance *, change_local_name_cp)){
external_Scanner_send_HCICommands_SetLocalName_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Scanner_Instance *, change_local_name_cp)){
Scanner_send_HCICommands_SetLocalName_listener = _listener;
}
void Scanner_send_HCICommands_SetLocalName(struct Scanner_Instance *_instance, change_local_name_cp Name){
if (Scanner_send_HCICommands_SetLocalName_listener != 0x0) Scanner_send_HCICommands_SetLocalName_listener(_instance, Name);
if (external_Scanner_send_HCICommands_SetLocalName_listener != 0x0) external_Scanner_send_HCICommands_SetLocalName_listener(_instance, Name);
;
}
void (*external_Scanner_send_HCICommands_Disconnect_listener)(struct Scanner_Instance *, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_HCICommands_Disconnect_listener)(struct Scanner_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_HCICommands_Disconnect_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t)){
external_Scanner_send_HCICommands_Disconnect_listener = _listener;
}
void register_Scanner_send_HCICommands_Disconnect_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t)){
Scanner_send_HCICommands_Disconnect_listener = _listener;
}
void Scanner_send_HCICommands_Disconnect(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
if (Scanner_send_HCICommands_Disconnect_listener != 0x0) Scanner_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
if (external_Scanner_send_HCICommands_Disconnect_listener != 0x0) external_Scanner_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
;
}
void (*external_Scanner_send_HCICommands_SetLEEventMask_listener)(struct Scanner_Instance *, set_event_mask_cp)= 0x0;
void (*Scanner_send_HCICommands_SetLEEventMask_listener)(struct Scanner_Instance *, set_event_mask_cp)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Scanner_Instance *, set_event_mask_cp)){
external_Scanner_send_HCICommands_SetLEEventMask_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Scanner_Instance *, set_event_mask_cp)){
Scanner_send_HCICommands_SetLEEventMask_listener = _listener;
}
void Scanner_send_HCICommands_SetLEEventMask(struct Scanner_Instance *_instance, set_event_mask_cp Mask){
if (Scanner_send_HCICommands_SetLEEventMask_listener != 0x0) Scanner_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
if (external_Scanner_send_HCICommands_SetLEEventMask_listener != 0x0) external_Scanner_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
;
}
void (*external_Scanner_send_HCICommands_SetLEEventMaskAll_listener)(struct Scanner_Instance *)= 0x0;
void (*Scanner_send_HCICommands_SetLEEventMaskAll_listener)(struct Scanner_Instance *)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Scanner_Instance *)){
external_Scanner_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Scanner_Instance *)){
Scanner_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void Scanner_send_HCICommands_SetLEEventMaskAll(struct Scanner_Instance *_instance){
if (Scanner_send_HCICommands_SetLEEventMaskAll_listener != 0x0) Scanner_send_HCICommands_SetLEEventMaskAll_listener(_instance);
if (external_Scanner_send_HCICommands_SetLEEventMaskAll_listener != 0x0) external_Scanner_send_HCICommands_SetLEEventMaskAll_listener(_instance);
;
}
void (*external_Scanner_send_HCICommands_SetLEAdvertisementParameters_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void (*Scanner_send_HCICommands_SetLEAdvertisementParameters_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
external_Scanner_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
Scanner_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void Scanner_send_HCICommands_SetLEAdvertisementParameters(struct Scanner_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
if (Scanner_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) Scanner_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
if (external_Scanner_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) external_Scanner_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
;
}
void (*external_Scanner_send_HCICommands_SetLEAdvertiseEnable_listener)(struct Scanner_Instance *, uint8_t)= 0x0;
void (*Scanner_send_HCICommands_SetLEAdvertiseEnable_listener)(struct Scanner_Instance *, uint8_t)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Scanner_Instance *, uint8_t)){
external_Scanner_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Scanner_Instance *, uint8_t)){
Scanner_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void Scanner_send_HCICommands_SetLEAdvertiseEnable(struct Scanner_Instance *_instance, uint8_t Enable){
if (Scanner_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) Scanner_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
if (external_Scanner_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) external_Scanner_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
;
}
void (*external_Scanner_send_HCICommands_SetLEAdvertisingData_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*Scanner_send_HCICommands_SetLEAdvertisingData_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)){
external_Scanner_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)){
Scanner_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void Scanner_send_HCICommands_SetLEAdvertisingData(struct Scanner_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (Scanner_send_HCICommands_SetLEAdvertisingData_listener != 0x0) Scanner_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
if (external_Scanner_send_HCICommands_SetLEAdvertisingData_listener != 0x0) external_Scanner_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
;
}
void (*external_Scanner_send_HCICommands_SetLEScanResponseData_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*Scanner_send_HCICommands_SetLEScanResponseData_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)){
external_Scanner_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, ble_adv_data_t)){
Scanner_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void Scanner_send_HCICommands_SetLEScanResponseData(struct Scanner_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (Scanner_send_HCICommands_SetLEScanResponseData_listener != 0x0) Scanner_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
if (external_Scanner_send_HCICommands_SetLEScanResponseData_listener != 0x0) external_Scanner_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
;
}
void (*external_Scanner_send_HCICommands_SetLEScanParameters_listener)(struct Scanner_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void (*Scanner_send_HCICommands_SetLEScanParameters_listener)(struct Scanner_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
external_Scanner_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
Scanner_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void Scanner_send_HCICommands_SetLEScanParameters(struct Scanner_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
if (Scanner_send_HCICommands_SetLEScanParameters_listener != 0x0) Scanner_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
if (external_Scanner_send_HCICommands_SetLEScanParameters_listener != 0x0) external_Scanner_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
;
}
void (*external_Scanner_send_HCICommands_SetLEScanEnable_listener)(struct Scanner_Instance *, uint8_t, uint8_t)= 0x0;
void (*Scanner_send_HCICommands_SetLEScanEnable_listener)(struct Scanner_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_Scanner_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, uint8_t)){
external_Scanner_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void register_Scanner_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Scanner_Instance *, uint8_t, uint8_t)){
Scanner_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void Scanner_send_HCICommands_SetLEScanEnable(struct Scanner_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
if (Scanner_send_HCICommands_SetLEScanEnable_listener != 0x0) Scanner_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
if (external_Scanner_send_HCICommands_SetLEScanEnable_listener != 0x0) external_Scanner_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
;
}
void (*external_Scanner_send_HCICommands_LECreateConnection_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void (*Scanner_send_HCICommands_LECreateConnection_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_Scanner_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
external_Scanner_send_HCICommands_LECreateConnection_listener = _listener;
}
void register_Scanner_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
Scanner_send_HCICommands_LECreateConnection_listener = _listener;
}
void Scanner_send_HCICommands_LECreateConnection(struct Scanner_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
if (Scanner_send_HCICommands_LECreateConnection_listener != 0x0) Scanner_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
if (external_Scanner_send_HCICommands_LECreateConnection_listener != 0x0) external_Scanner_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
;
}
void (*external_Scanner_send_HCICommands_LECreateConnectionCancel_listener)(struct Scanner_Instance *)= 0x0;
void (*Scanner_send_HCICommands_LECreateConnectionCancel_listener)(struct Scanner_Instance *)= 0x0;
void register_external_Scanner_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Scanner_Instance *)){
external_Scanner_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void register_Scanner_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Scanner_Instance *)){
Scanner_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void Scanner_send_HCICommands_LECreateConnectionCancel(struct Scanner_Instance *_instance){
if (Scanner_send_HCICommands_LECreateConnectionCancel_listener != 0x0) Scanner_send_HCICommands_LECreateConnectionCancel_listener(_instance);
if (external_Scanner_send_HCICommands_LECreateConnectionCancel_listener != 0x0) external_Scanner_send_HCICommands_LECreateConnectionCancel_listener(_instance);
;
}
void (*external_Scanner_send_HCICommands_LERand_listener)(struct Scanner_Instance *)= 0x0;
void (*Scanner_send_HCICommands_LERand_listener)(struct Scanner_Instance *)= 0x0;
void register_external_Scanner_send_HCICommands_LERand_listener(void (*_listener)(struct Scanner_Instance *)){
external_Scanner_send_HCICommands_LERand_listener = _listener;
}
void register_Scanner_send_HCICommands_LERand_listener(void (*_listener)(struct Scanner_Instance *)){
Scanner_send_HCICommands_LERand_listener = _listener;
}
void Scanner_send_HCICommands_LERand(struct Scanner_Instance *_instance){
if (Scanner_send_HCICommands_LERand_listener != 0x0) Scanner_send_HCICommands_LERand_listener(_instance);
if (external_Scanner_send_HCICommands_LERand_listener != 0x0) external_Scanner_send_HCICommands_LERand_listener(_instance);
;
}
void (*external_Scanner_send_HCICommands_LEEncrypt_listener)(struct Scanner_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*Scanner_send_HCICommands_LEEncrypt_listener)(struct Scanner_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Scanner_Instance *, ble_random_number_t, ble_random_number_t)){
external_Scanner_send_HCICommands_LEEncrypt_listener = _listener;
}
void register_Scanner_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Scanner_Instance *, ble_random_number_t, ble_random_number_t)){
Scanner_send_HCICommands_LEEncrypt_listener = _listener;
}
void Scanner_send_HCICommands_LEEncrypt(struct Scanner_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
if (Scanner_send_HCICommands_LEEncrypt_listener != 0x0) Scanner_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
if (external_Scanner_send_HCICommands_LEEncrypt_listener != 0x0) external_Scanner_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
;
}
void (*external_Scanner_send_HCICommands_LEStartEncryption_listener)(struct Scanner_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void (*Scanner_send_HCICommands_LEStartEncryption_listener)(struct Scanner_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
external_Scanner_send_HCICommands_LEStartEncryption_listener = _listener;
}
void register_Scanner_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
Scanner_send_HCICommands_LEStartEncryption_listener = _listener;
}
void Scanner_send_HCICommands_LEStartEncryption(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
if (Scanner_send_HCICommands_LEStartEncryption_listener != 0x0) Scanner_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
if (external_Scanner_send_HCICommands_LEStartEncryption_listener != 0x0) external_Scanner_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
;
}
void (*external_Scanner_send_SMP_SMPPairingRequest_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Scanner_send_SMP_SMPPairingRequest_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Scanner_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_Scanner_send_SMP_SMPPairingRequest_listener = _listener;
}
void register_Scanner_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
Scanner_send_SMP_SMPPairingRequest_listener = _listener;
}
void Scanner_send_SMP_SMPPairingRequest(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (Scanner_send_SMP_SMPPairingRequest_listener != 0x0) Scanner_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_Scanner_send_SMP_SMPPairingRequest_listener != 0x0) external_Scanner_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_Scanner_send_SMP_SMPPairingResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Scanner_send_SMP_SMPPairingResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Scanner_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_Scanner_send_SMP_SMPPairingResponse_listener = _listener;
}
void register_Scanner_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
Scanner_send_SMP_SMPPairingResponse_listener = _listener;
}
void Scanner_send_SMP_SMPPairingResponse(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (Scanner_send_SMP_SMPPairingResponse_listener != 0x0) Scanner_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_Scanner_send_SMP_SMPPairingResponse_listener != 0x0) external_Scanner_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_Scanner_send_SMP_SMPPairingConfirm_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Scanner_send_SMP_SMPPairingConfirm_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
external_Scanner_send_SMP_SMPPairingConfirm_listener = _listener;
}
void register_Scanner_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
Scanner_send_SMP_SMPPairingConfirm_listener = _listener;
}
void Scanner_send_SMP_SMPPairingConfirm(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
if (Scanner_send_SMP_SMPPairingConfirm_listener != 0x0) Scanner_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
if (external_Scanner_send_SMP_SMPPairingConfirm_listener != 0x0) external_Scanner_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
;
}
void (*external_Scanner_send_SMP_SMPPairingRandom_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Scanner_send_SMP_SMPPairingRandom_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
external_Scanner_send_SMP_SMPPairingRandom_listener = _listener;
}
void register_Scanner_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
Scanner_send_SMP_SMPPairingRandom_listener = _listener;
}
void Scanner_send_SMP_SMPPairingRandom(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
if (Scanner_send_SMP_SMPPairingRandom_listener != 0x0) Scanner_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
if (external_Scanner_send_SMP_SMPPairingRandom_listener != 0x0) external_Scanner_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
;
}
void (*external_Scanner_send_SMP_SMPPairingFailed_listener)(struct Scanner_Instance *, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_SMP_SMPPairingFailed_listener)(struct Scanner_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t)){
external_Scanner_send_SMP_SMPPairingFailed_listener = _listener;
}
void register_Scanner_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t)){
Scanner_send_SMP_SMPPairingFailed_listener = _listener;
}
void Scanner_send_SMP_SMPPairingFailed(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t Reason){
if (Scanner_send_SMP_SMPPairingFailed_listener != 0x0) Scanner_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
if (external_Scanner_send_SMP_SMPPairingFailed_listener != 0x0) external_Scanner_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
;
}
void (*external_Scanner_send_SMP_SMPPairingPublicKey_listener)(struct Scanner_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void (*Scanner_send_SMP_SMPPairingPublicKey_listener)(struct Scanner_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void register_external_Scanner_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
external_Scanner_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void register_Scanner_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
Scanner_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void Scanner_send_SMP_SMPPairingPublicKey(struct Scanner_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
if (Scanner_send_SMP_SMPPairingPublicKey_listener != 0x0) Scanner_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
if (external_Scanner_send_SMP_SMPPairingPublicKey_listener != 0x0) external_Scanner_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
;
}
void (*external_Scanner_send_SMP_SMPPairingDHKeyCheck_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Scanner_send_SMP_SMPPairingDHKeyCheck_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
external_Scanner_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void register_Scanner_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
Scanner_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void Scanner_send_SMP_SMPPairingDHKeyCheck(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
if (Scanner_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) Scanner_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
if (external_Scanner_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) external_Scanner_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
;
}
void (*external_Scanner_send_SMP_SMPKeypressNotification_listener)(struct Scanner_Instance *, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_SMP_SMPKeypressNotification_listener)(struct Scanner_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t)){
external_Scanner_send_SMP_SMPKeypressNotification_listener = _listener;
}
void register_Scanner_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t)){
Scanner_send_SMP_SMPKeypressNotification_listener = _listener;
}
void Scanner_send_SMP_SMPKeypressNotification(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t Type){
if (Scanner_send_SMP_SMPKeypressNotification_listener != 0x0) Scanner_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
if (external_Scanner_send_SMP_SMPKeypressNotification_listener != 0x0) external_Scanner_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
;
}
void (*external_Scanner_send_SMP_SMPEncryptionInformation_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Scanner_send_SMP_SMPEncryptionInformation_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
external_Scanner_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void register_Scanner_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
Scanner_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void Scanner_send_SMP_SMPEncryptionInformation(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
if (Scanner_send_SMP_SMPEncryptionInformation_listener != 0x0) Scanner_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
if (external_Scanner_send_SMP_SMPEncryptionInformation_listener != 0x0) external_Scanner_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
;
}
void (*external_Scanner_send_SMP_SMPMasterIdentification_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void (*Scanner_send_SMP_SMPMasterIdentification_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_Scanner_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_random_part_t)){
external_Scanner_send_SMP_SMPMasterIdentification_listener = _listener;
}
void register_Scanner_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_random_part_t)){
Scanner_send_SMP_SMPMasterIdentification_listener = _listener;
}
void Scanner_send_SMP_SMPMasterIdentification(struct Scanner_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
if (Scanner_send_SMP_SMPMasterIdentification_listener != 0x0) Scanner_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
if (external_Scanner_send_SMP_SMPMasterIdentification_listener != 0x0) external_Scanner_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
;
}
void (*external_Scanner_send_SMP_SMPIdentityInformation_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Scanner_send_SMP_SMPIdentityInformation_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
external_Scanner_send_SMP_SMPIdentityInformation_listener = _listener;
}
void register_Scanner_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
Scanner_send_SMP_SMPIdentityInformation_listener = _listener;
}
void Scanner_send_SMP_SMPIdentityInformation(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
if (Scanner_send_SMP_SMPIdentityInformation_listener != 0x0) Scanner_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
if (external_Scanner_send_SMP_SMPIdentityInformation_listener != 0x0) external_Scanner_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
;
}
void (*external_Scanner_send_SMP_SMPIdentityAddressInformation_listener)(struct Scanner_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*Scanner_send_SMP_SMPIdentityAddressInformation_listener)(struct Scanner_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_Scanner_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_Scanner_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void register_Scanner_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, bdaddr_t)){
Scanner_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void Scanner_send_SMP_SMPIdentityAddressInformation(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
if (Scanner_send_SMP_SMPIdentityAddressInformation_listener != 0x0) Scanner_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
if (external_Scanner_send_SMP_SMPIdentityAddressInformation_listener != 0x0) external_Scanner_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_Scanner_send_SMP_SMPSigningInformation_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*Scanner_send_SMP_SMPSigningInformation_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_Scanner_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
external_Scanner_send_SMP_SMPSigningInformation_listener = _listener;
}
void register_Scanner_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_random_number_t)){
Scanner_send_SMP_SMPSigningInformation_listener = _listener;
}
void Scanner_send_SMP_SMPSigningInformation(struct Scanner_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
if (Scanner_send_SMP_SMPSigningInformation_listener != 0x0) Scanner_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
if (external_Scanner_send_SMP_SMPSigningInformation_listener != 0x0) external_Scanner_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
;
}
void (*external_Scanner_send_SMP_SMPSecurityRequest_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Scanner_send_SMP_SMPSecurityRequest_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Scanner_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_Scanner_send_SMP_SMPSecurityRequest_listener = _listener;
}
void register_Scanner_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
Scanner_send_SMP_SMPSecurityRequest_listener = _listener;
}
void Scanner_send_SMP_SMPSecurityRequest(struct Scanner_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
if (Scanner_send_SMP_SMPSecurityRequest_listener != 0x0) Scanner_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
if (external_Scanner_send_SMP_SMPSecurityRequest_listener != 0x0) external_Scanner_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
;
}
void (*external_Scanner_send_ATT_ATTFindInformationRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*Scanner_send_ATT_ATTFindInformationRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_Scanner_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t)){
external_Scanner_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_Scanner_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t)){
Scanner_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void Scanner_send_ATT_ATTFindInformationRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (Scanner_send_ATT_ATTFindInformationRequest_listener != 0x0) Scanner_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_Scanner_send_ATT_ATTFindInformationRequest_listener != 0x0) external_Scanner_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_Scanner_send_ATT_ATTFindInformationResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTFindInformationResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_Scanner_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void Scanner_send_ATT_ATTFindInformationResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (Scanner_send_ATT_ATTFindInformationResponse_listener != 0x0) Scanner_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_Scanner_send_ATT_ATTFindInformationResponse_listener != 0x0) external_Scanner_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_Scanner_send_ATT_ATTFindInformationError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_ATT_ATTFindInformationError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
external_Scanner_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_Scanner_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
Scanner_send_ATT_ATTFindInformationError_listener = _listener;
}
void Scanner_send_ATT_ATTFindInformationError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Scanner_send_ATT_ATTFindInformationError_listener != 0x0) Scanner_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Scanner_send_ATT_ATTFindInformationError_listener != 0x0) external_Scanner_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Scanner_send_ATT_ATTReadByTypeRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*Scanner_send_ATT_ATTReadByTypeRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_Scanner_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
Scanner_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void Scanner_send_ATT_ATTReadByTypeRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (Scanner_send_ATT_ATTReadByTypeRequest_listener != 0x0) Scanner_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_Scanner_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_Scanner_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_Scanner_send_ATT_ATTReadByTypeResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTReadByTypeResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void Scanner_send_ATT_ATTReadByTypeResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (Scanner_send_ATT_ATTReadByTypeResponse_listener != 0x0) Scanner_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_Scanner_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_Scanner_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_Scanner_send_ATT_ATTReadByTypeError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_ATT_ATTReadByTypeError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
external_Scanner_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
Scanner_send_ATT_ATTReadByTypeError_listener = _listener;
}
void Scanner_send_ATT_ATTReadByTypeError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Scanner_send_ATT_ATTReadByTypeError_listener != 0x0) Scanner_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Scanner_send_ATT_ATTReadByTypeError_listener != 0x0) external_Scanner_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Scanner_send_ATT_ATTReadRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t)= 0x0;
void (*Scanner_send_ATT_ATTReadRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t)){
external_Scanner_send_ATT_ATTReadRequest_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t)){
Scanner_send_ATT_ATTReadRequest_listener = _listener;
}
void Scanner_send_ATT_ATTReadRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (Scanner_send_ATT_ATTReadRequest_listener != 0x0) Scanner_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_Scanner_send_ATT_ATTReadRequest_listener != 0x0) external_Scanner_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_Scanner_send_ATT_ATTReadResponse_listener)(struct Scanner_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTReadResponse_listener)(struct Scanner_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTReadResponse_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTReadResponse_listener = _listener;
}
void Scanner_send_ATT_ATTReadResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (Scanner_send_ATT_ATTReadResponse_listener != 0x0) Scanner_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_Scanner_send_ATT_ATTReadResponse_listener != 0x0) external_Scanner_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_Scanner_send_ATT_ATTReadError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_ATT_ATTReadError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
external_Scanner_send_ATT_ATTReadError_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
Scanner_send_ATT_ATTReadError_listener = _listener;
}
void Scanner_send_ATT_ATTReadError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Scanner_send_ATT_ATTReadError_listener != 0x0) Scanner_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Scanner_send_ATT_ATTReadError_listener != 0x0) external_Scanner_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Scanner_send_ATT_ATTReadByGroupTypeRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*Scanner_send_ATT_ATTReadByGroupTypeRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_Scanner_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
Scanner_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void Scanner_send_ATT_ATTReadByGroupTypeRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (Scanner_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) Scanner_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_Scanner_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_Scanner_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_Scanner_send_ATT_ATTReadByGroupTypeResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTReadByGroupTypeResponse_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void Scanner_send_ATT_ATTReadByGroupTypeResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (Scanner_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) Scanner_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_Scanner_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_Scanner_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_Scanner_send_ATT_ATTReadByGroupTypeError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_ATT_ATTReadByGroupTypeError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
external_Scanner_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_Scanner_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
Scanner_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void Scanner_send_ATT_ATTReadByGroupTypeError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Scanner_send_ATT_ATTReadByGroupTypeError_listener != 0x0) Scanner_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Scanner_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_Scanner_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Scanner_send_ATT_ATTWriteRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTWriteRequest_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_Scanner_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTWriteRequest_listener = _listener;
}
void Scanner_send_ATT_ATTWriteRequest(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Scanner_send_ATT_ATTWriteRequest_listener != 0x0) Scanner_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Scanner_send_ATT_ATTWriteRequest_listener != 0x0) external_Scanner_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Scanner_send_ATT_ATTWriteResponse_listener)(struct Scanner_Instance *, uint16_t)= 0x0;
void (*Scanner_send_ATT_ATTWriteResponse_listener)(struct Scanner_Instance *, uint16_t)= 0x0;
void register_external_Scanner_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t)){
external_Scanner_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_Scanner_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Scanner_Instance *, uint16_t)){
Scanner_send_ATT_ATTWriteResponse_listener = _listener;
}
void Scanner_send_ATT_ATTWriteResponse(struct Scanner_Instance *_instance, uint16_t ConnectionHandle){
if (Scanner_send_ATT_ATTWriteResponse_listener != 0x0) Scanner_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_Scanner_send_ATT_ATTWriteResponse_listener != 0x0) external_Scanner_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_Scanner_send_ATT_ATTWriteError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*Scanner_send_ATT_ATTWriteError_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_Scanner_send_ATT_ATTWriteError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
external_Scanner_send_ATT_ATTWriteError_listener = _listener;
}
void register_Scanner_send_ATT_ATTWriteError_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, uint8_t)){
Scanner_send_ATT_ATTWriteError_listener = _listener;
}
void Scanner_send_ATT_ATTWriteError(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (Scanner_send_ATT_ATTWriteError_listener != 0x0) Scanner_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_Scanner_send_ATT_ATTWriteError_listener != 0x0) external_Scanner_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_Scanner_send_ATT_ATTWriteCommand_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTWriteCommand_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_Scanner_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTWriteCommand_listener = _listener;
}
void Scanner_send_ATT_ATTWriteCommand(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Scanner_send_ATT_ATTWriteCommand_listener != 0x0) Scanner_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Scanner_send_ATT_ATTWriteCommand_listener != 0x0) external_Scanner_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Scanner_send_ATT_ATTHandleValueNotification_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTHandleValueNotification_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_Scanner_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void Scanner_send_ATT_ATTHandleValueNotification(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Scanner_send_ATT_ATTHandleValueNotification_listener != 0x0) Scanner_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Scanner_send_ATT_ATTHandleValueNotification_listener != 0x0) external_Scanner_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Scanner_send_ATT_ATTHandleValueIndication_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*Scanner_send_ATT_ATTHandleValueIndication_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_Scanner_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_Scanner_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_Scanner_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Scanner_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
Scanner_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void Scanner_send_ATT_ATTHandleValueIndication(struct Scanner_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (Scanner_send_ATT_ATTHandleValueIndication_listener != 0x0) Scanner_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_Scanner_send_ATT_ATTHandleValueIndication_listener != 0x0) external_Scanner_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_Scanner_send_ATT_ATTHandleValueConfirmation_listener)(struct Scanner_Instance *, uint16_t)= 0x0;
void (*Scanner_send_ATT_ATTHandleValueConfirmation_listener)(struct Scanner_Instance *, uint16_t)= 0x0;
void register_external_Scanner_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t)){
external_Scanner_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_Scanner_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Scanner_Instance *, uint16_t)){
Scanner_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void Scanner_send_ATT_ATTHandleValueConfirmation(struct Scanner_Instance *_instance, uint16_t ConnectionHandle){
if (Scanner_send_ATT_ATTHandleValueConfirmation_listener != 0x0) Scanner_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_Scanner_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_Scanner_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



