/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing BLEEncryptionImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "BLEEncryptionImpl.h"

/*****************************************************************************
 * Implementation for type : BLEEncryptionImpl
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLEEncryptionImpl_States_OnExit(int state, struct BLEEncryptionImpl_Instance *_instance);
//Prototypes: Message Sending
void BLEEncryptionImpl_send_Encrypter_Started(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_Encrypter_Failure(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Random);
void BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Confirm);
void BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted(struct BLEEncryptionImpl_Instance *_instance, uint8_t Correct);
void BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t STK);
void BLEEncryptionImpl_send_Socket_Open(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_Socket_Close(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_HCICommands_Reset(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_HCICommands_SetEventMask(struct BLEEncryptionImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEEncryptionImpl_send_HCICommands_SetEventMaskAll(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_HCICommands_SetLocalName(struct BLEEncryptionImpl_Instance *_instance, change_local_name_cp Name);
void BLEEncryptionImpl_send_HCICommands_Disconnect(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason);
void BLEEncryptionImpl_send_HCICommands_SetLEEventMask(struct BLEEncryptionImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEEncryptionImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy);
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEEncryptionImpl_Instance *_instance, uint8_t Enable);
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData(struct BLEEncryptionImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData(struct BLEEncryptionImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEEncryptionImpl_send_HCICommands_SetLEScanParameters(struct BLEEncryptionImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy);
void BLEEncryptionImpl_send_HCICommands_SetLEScanEnable(struct BLEEncryptionImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates);
void BLEEncryptionImpl_send_HCICommands_LECreateConnection(struct BLEEncryptionImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax);
void BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_HCICommands_LERand(struct BLEEncryptionImpl_Instance *_instance);
void BLEEncryptionImpl_send_HCICommands_LEEncrypt(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext);
void BLEEncryptionImpl_send_HCICommands_LEStartEncryption(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK);
void BLEEncryptionImpl_send_SMP_SMPPairingRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEEncryptionImpl_send_SMP_SMPPairingResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEEncryptionImpl_send_SMP_SMPPairingConfirm(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void BLEEncryptionImpl_send_SMP_SMPPairingRandom(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void BLEEncryptionImpl_send_SMP_SMPPairingFailed(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Reason);
void BLEEncryptionImpl_send_SMP_SMPPairingPublicKey(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void BLEEncryptionImpl_send_SMP_SMPKeypressNotification(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Type);
void BLEEncryptionImpl_send_SMP_SMPEncryptionInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void BLEEncryptionImpl_send_SMP_SMPMasterIdentification(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void BLEEncryptionImpl_send_SMP_SMPIdentityInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void BLEEncryptionImpl_send_SMP_SMPSigningInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
void BLEEncryptionImpl_send_SMP_SMPSecurityRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void BLEEncryptionImpl_send_ATT_ATTFindInformationRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void BLEEncryptionImpl_send_ATT_ATTFindInformationResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void BLEEncryptionImpl_send_ATT_ATTFindInformationError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEEncryptionImpl_send_ATT_ATTReadByTypeError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEEncryptionImpl_send_ATT_ATTReadRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void BLEEncryptionImpl_send_ATT_ATTReadResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void BLEEncryptionImpl_send_ATT_ATTReadError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEEncryptionImpl_send_ATT_ATTWriteRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEEncryptionImpl_send_ATT_ATTWriteResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle);
void BLEEncryptionImpl_send_ATT_ATTWriteError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEEncryptionImpl_send_ATT_ATTWriteCommand(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEEncryptionImpl_send_ATT_ATTHandleValueNotification(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEEncryptionImpl_send_ATT_ATTHandleValueIndication(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_random_number_t f_BLEEncryptionImpl_GenerateP1(struct BLEEncryptionImpl_Instance *_instance);
ble_random_number_t f_BLEEncryptionImpl_GenerateP2(struct BLEEncryptionImpl_Instance *_instance);
ble_uuid_t f_BLEEncryptionImpl_ReadUUID(struct BLEEncryptionImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_BLEEncryptionImpl_MakeUUID(struct BLEEncryptionImpl_Instance *_instance, const char * Text);
void f_BLEEncryptionImpl_PrintUUID(struct BLEEncryptionImpl_Instance *_instance, ble_uuid_t ID);
//Debug fonction
void BLEEncryptionImpl_print_debug(struct BLEEncryptionImpl_Instance * _instance, char * str) {
if(_instance->debug) {
printf("%s%s", _instance->name, str);
}
}

// Declaration of functions:
// Definition of function GenerateP1
ble_random_number_t f_BLEEncryptionImpl_GenerateP1(struct BLEEncryptionImpl_Instance *_instance) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Start GenerateP1\n");
;ble_random_number_t p1;
;uint8_t IOCapability = SMPIOCAPABILITIES_NO_INPUT_NO_OUTPUT;
;uint8_t OOBDataPresent = 0;
;uint8_t Bonding = 1;
;uint8_t MITM = 0;
;uint8_t SecureConnection = 0;
;uint8_t Keypress = 0;
;uint8_t MaximumEncryptionKeySize = 16;
;uint8_t InitiatorKeyDistribution = SMPKEYDISTRIBUTION_ENCKEY_IDKEY_NOSIGN_NOLINKKEY;
;uint8_t ResponderKeyDistribution = SMPKEYDISTRIBUTION_ENCKEY_IDKEY_NOSIGN_NOLINKKEY;

      // Pairing response
      uint8_t pres[7];
      pres[0] = 0x02;
      pres[1] = IOCapability;
      pres[2] = (OOBDataPresent) ? 0x01 : 0x00;
      pres[3] = ( ((Bonding) ? 0x01 : 0x00) | ((MITM) ? 0x04 : 0x00) | ((SecureConnection) ? 0x08 : 0x00) | ((Keypress) ? 0x10 : 0x00) );
      pres[4] = MaximumEncryptionKeySize;
      pres[5] = InitiatorKeyDistribution;
      pres[6] = ResponderKeyDistribution;
      // Pairing response
      uint8_t preq[7];
      preq[0] = 0x01;
      preq[1] = IOCapability;
      preq[2] = (OOBDataPresent) ? 0x01 : 0x00;
      preq[3] = ( ((Bonding) ? 0x01 : 0x00) | ((MITM) ? 0x04 : 0x00) | ((SecureConnection) ? 0x08 : 0x00) | ((Keypress) ? 0x10 : 0x00) );
      preq[4] = MaximumEncryptionKeySize;
      preq[5] = InitiatorKeyDistribution;
      preq[6] = ResponderKeyDistribution;
      // Address types
      uint8_t rat = _instance->BLEEncryptionImpl_RAT_var & 0x01;
      uint8_t iat = _instance->BLEEncryptionImpl_IAT_var & 0x01;

      // Concatenate
      p1.bytes[ 0] = iat;
      p1.bytes[ 1] = rat;
      p1.bytes[ 2] = preq[0];
      p1.bytes[ 3] = preq[1];
      p1.bytes[ 4] = preq[2];
      p1.bytes[ 5] = preq[3];
      p1.bytes[ 6] = preq[4];
      p1.bytes[ 7] = preq[5];
      p1.bytes[ 8] = preq[6];
      p1.bytes[ 9] = pres[0];
      p1.bytes[10] = pres[1];
      p1.bytes[11] = pres[2];
      p1.bytes[12] = pres[3];
      p1.bytes[13] = pres[4];
      p1.bytes[14] = pres[5];
      p1.bytes[15] = pres[6];
    
return p1;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): GenerateP1 Done.\n");
}
// Definition of function GenerateP2
ble_random_number_t f_BLEEncryptionImpl_GenerateP2(struct BLEEncryptionImpl_Instance *_instance) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Start GenerateP2\n");
;ble_random_number_t p2;

     // Concatenate
     p2.bytes[ 0] = _instance->BLEEncryptionImpl_RA_var.b[0];
     p2.bytes[ 1] = _instance->BLEEncryptionImpl_RA_var.b[1];
     p2.bytes[ 2] = _instance->BLEEncryptionImpl_RA_var.b[2];
     p2.bytes[ 3] = _instance->BLEEncryptionImpl_RA_var.b[3];
     p2.bytes[ 4] = _instance->BLEEncryptionImpl_RA_var.b[4];
     p2.bytes[ 5] = _instance->BLEEncryptionImpl_RA_var.b[5];
     p2.bytes[ 6] = _instance->BLEEncryptionImpl_IA_var.b[0];
     p2.bytes[ 7] = _instance->BLEEncryptionImpl_IA_var.b[1];
     p2.bytes[ 8] = _instance->BLEEncryptionImpl_IA_var.b[2];
     p2.bytes[ 9] = _instance->BLEEncryptionImpl_IA_var.b[3];
     p2.bytes[10] = _instance->BLEEncryptionImpl_IA_var.b[4];
     p2.bytes[11] = _instance->BLEEncryptionImpl_IA_var.b[5];
     p2.bytes[12] = 0x00;
     p2.bytes[13] = 0x00;
     p2.bytes[14] = 0x00;
     p2.bytes[15] = 0x00;
    
return p2;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): GenerateP2 Done.\n");
}
// Definition of function ReadUUID
ble_uuid_t f_BLEEncryptionImpl_ReadUUID(struct BLEEncryptionImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Start ReadUUID\n");
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
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ReadUUID Done.\n");
}
// Definition of function MakeUUID
ble_uuid_t f_BLEEncryptionImpl_MakeUUID(struct BLEEncryptionImpl_Instance *_instance, const char * Text) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Start MakeUUID\n");
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
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): MakeUUID Done.\n");
}
// Definition of function PrintUUID
void f_BLEEncryptionImpl_PrintUUID(struct BLEEncryptionImpl_Instance *_instance, ble_uuid_t ID) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Start PrintUUID\n");

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): PrintUUID Done.\n");
}

// Sessions functionss:


// On Entry Actions:
void BLEEncryptionImpl_States_OnEntry(int state, struct BLEEncryptionImpl_Instance *_instance) {
switch(state) {
case BLEENCRYPTIONIMPL_STATES_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States\n");
_instance->BLEEncryptionImpl_States_State = BLEENCRYPTIONIMPL_STATES_WAITFORSOCKET_STATE;
BLEEncryptionImpl_States_OnEntry(_instance->BLEEncryptionImpl_States_State, _instance);
break;
}
case BLEENCRYPTIONIMPL_STATES_READY_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States\n");
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE;
BLEEncryptionImpl_States_OnEntry(_instance->BLEEncryptionImpl_States_Ready_State, _instance);
break;
}
case BLEENCRYPTIONIMPL_STATES_WAITFORSOCKET_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:WaitForSocket\n");
break;
}
case BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:Waiting\n");
break;
}
case BLEENCRYPTIONIMPL_STATES_READY_CONFIRMFIRSTPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:ConfirmFirstPart\n");
;ble_random_number_t k = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
;ble_random_number_t r = _instance->BLEEncryptionImpl_Rand_var;
;ble_random_number_t p1 = f_BLEEncryptionImpl_GenerateP1(_instance);
;ble_random_number_t plaintext;

            // r XOR p1
            uint8_t i;
            for (i = 0; i < 16; i++)
              plaintext.bytes[i] = r.bytes[i] ^ p1.bytes[i];
          
BLEEncryptionImpl_send_HCICommands_LEEncrypt(_instance, k, plaintext);
break;
}
case BLEENCRYPTIONIMPL_STATES_READY_RANDOMSECONDPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:RandomSecondPart\n");
break;
}
case BLEENCRYPTIONIMPL_STATES_READY_RANDOMFIRSTPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:RandomFirstPart\n");
break;
}
case BLEENCRYPTIONIMPL_STATES_FAILED_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:Failed\n");
BLEEncryptionImpl_send_Encrypter_Failure(_instance);
break;
}
case BLEENCRYPTIONIMPL_STATES_READY_CONFIRMSECONDPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:ConfirmSecondPart\n");
break;
}
case BLEENCRYPTIONIMPL_STATES_READY_GENERATESTK_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Enters States:GenerateSTK\n");
;ble_random_number_t k = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
;ble_random_number_t r1 = _instance->BLEEncryptionImpl_Srand_var;
;ble_random_number_t r2 = _instance->BLEEncryptionImpl_Mrand_var;
;ble_random_number_t r;

            // Concatenate
            r.bytes[ 0] = r2.bytes[ 0];
            r.bytes[ 1] = r2.bytes[ 1];
            r.bytes[ 2] = r2.bytes[ 2];
            r.bytes[ 3] = r2.bytes[ 3];
            r.bytes[ 4] = r2.bytes[ 4];
            r.bytes[ 5] = r2.bytes[ 5];
            r.bytes[ 6] = r2.bytes[ 6];
            r.bytes[ 7] = r2.bytes[ 7];
            r.bytes[ 8] = r1.bytes[ 0];
            r.bytes[ 9] = r1.bytes[ 1];
            r.bytes[10] = r1.bytes[ 2];
            r.bytes[11] = r1.bytes[ 3];
            r.bytes[12] = r1.bytes[ 4];
            r.bytes[13] = r1.bytes[ 5];
            r.bytes[14] = r1.bytes[ 6];
            r.bytes[15] = r1.bytes[ 7];
          
BLEEncryptionImpl_send_HCICommands_LEEncrypt(_instance, k, r);
break;
}
default: break;
}
}

// On Exit Actions:
void BLEEncryptionImpl_States_OnExit(int state, struct BLEEncryptionImpl_Instance *_instance) {
switch(state) {
case BLEENCRYPTIONIMPL_STATES_STATE:{
BLEEncryptionImpl_States_OnExit(_instance->BLEEncryptionImpl_States_State, _instance);
break;}
case BLEENCRYPTIONIMPL_STATES_READY_STATE:{
BLEEncryptionImpl_States_OnExit(_instance->BLEEncryptionImpl_States_Ready_State, _instance);
break;}
case BLEENCRYPTIONIMPL_STATES_WAITFORSOCKET_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:WaitForSocket\n");
break;}
case BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:Waiting\n");
break;}
case BLEENCRYPTIONIMPL_STATES_READY_CONFIRMFIRSTPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:ConfirmFirstPart\n");
break;}
case BLEENCRYPTIONIMPL_STATES_READY_RANDOMSECONDPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:RandomSecondPart\n");
break;}
case BLEENCRYPTIONIMPL_STATES_READY_RANDOMFIRSTPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:RandomFirstPart\n");
break;}
case BLEENCRYPTIONIMPL_STATES_FAILED_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:Failed\n");
break;}
case BLEENCRYPTIONIMPL_STATES_READY_CONFIRMSECONDPART_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:ConfirmSecondPart\n");
break;}
case BLEENCRYPTIONIMPL_STATES_READY_GENERATESTK_STATE:{
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Exits States:GenerateSTK\n");
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLEEncryptionImpl_handle_HCIEvents_LERandCompleted(struct BLEEncryptionImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCIEvents?LERandCompleted\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_RANDOMFIRSTPART_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && (Status == 0)) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition RandomFirstPart -> RandomSecondPart event HCIEvents?LERandCompleted\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_RANDOMFIRSTPART_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_RANDOMSECONDPART_STATE;
memcpy(&_instance->BLEEncryptionImpl_GeneratedRandomNumber_var.bytes[0], &Random.bytes[0], 8);
BLEEncryptionImpl_send_HCICommands_LERand(_instance);
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_RANDOMSECONDPART_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
else if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_RANDOMSECONDPART_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && (Status == 0)) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition RandomSecondPart -> Waiting event HCIEvents?LERandCompleted\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_RANDOMSECONDPART_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE;
memcpy(&_instance->BLEEncryptionImpl_GeneratedRandomNumber_var.bytes[8], &Random.bytes[0], 8);
fprintf(stdout, "[INFO]: Generated 128-bit random number on controller.\n");
BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted(_instance, _instance->BLEEncryptionImpl_GeneratedRandomNumber_var);
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
if (BLEEncryptionImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition Ready -> Failed event HCIEvents?LERandCompleted\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_STATE, _instance);
_instance->BLEEncryptionImpl_States_State = BLEENCRYPTIONIMPL_STATES_FAILED_STATE;
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_FAILED_STATE, _instance);
BLEEncryptionImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_HCIEvents_LEEncryptCompleted(struct BLEEncryptionImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCIEvents?LEEncryptCompleted\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_CONFIRMFIRSTPART_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && (Status == 0)) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition ConfirmFirstPart -> ConfirmSecondPart event HCIEvents?LEEncryptCompleted\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_CONFIRMFIRSTPART_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_CONFIRMSECONDPART_STATE;
;ble_random_number_t k = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
;ble_random_number_t p2 = f_BLEEncryptionImpl_GenerateP2(_instance);
;ble_random_number_t plaintext;

            // first_encrypted XOR p2
            uint8_t i;
            for (i = 0; i < 16; i++)
              plaintext.bytes[i] = Encrypted.bytes[i] ^ p2.bytes[i];
          
BLEEncryptionImpl_send_HCICommands_LEEncrypt(_instance, k, plaintext);
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_CONFIRMSECONDPART_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
else if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_CONFIRMSECONDPART_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && (Status == 0)) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition ConfirmSecondPart -> Waiting event HCIEvents?LEEncryptCompleted\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_CONFIRMSECONDPART_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE;
fprintf(stdout, "[INFO]: Encrypted Confirm on controller.\n");
BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted(_instance, Encrypted);
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
else if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_GENERATESTK_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && (Status == 0)) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition GenerateSTK -> Waiting event HCIEvents?LEEncryptCompleted\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_GENERATESTK_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE;
fprintf(stdout, "[INFO]: Encrypted Confirm on controller.\n");
BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted(_instance, Encrypted);
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
if (BLEEncryptionImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition Ready -> Failed event HCIEvents?LEEncryptCompleted\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_STATE, _instance);
_instance->BLEEncryptionImpl_States_State = BLEENCRYPTIONIMPL_STATES_FAILED_STATE;
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_FAILED_STATE, _instance);
BLEEncryptionImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_Socket_Closed(struct BLEEncryptionImpl_Instance *_instance) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Socket?Closed\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
if (BLEEncryptionImpl_States_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition Ready -> Failed event Socket?Closed\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_STATE, _instance);
_instance->BLEEncryptionImpl_States_State = BLEENCRYPTIONIMPL_STATES_FAILED_STATE;
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_FAILED_STATE, _instance);
BLEEncryptionImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_Socket_Opened(struct BLEEncryptionImpl_Instance *_instance, bdaddr_t Address) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Socket?Opened\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_WAITFORSOCKET_STATE) {
if (BLEEncryptionImpl_States_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition WaitForSocket -> Ready event Socket?Opened\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_WAITFORSOCKET_STATE, _instance);
_instance->BLEEncryptionImpl_States_State = BLEENCRYPTIONIMPL_STATES_READY_STATE;
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_STATE, _instance);
BLEEncryptionImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_Encrypter_CheckConfirm(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Received, ble_random_number_t Calculated) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter?CheckConfirm\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): internal event Encrypter?CheckConfirm\n");
;uint8_t Result = 1;

            uint8_t i;
            for (i = 0; i < 16; i++)
              Result = (Result && (Received.bytes[i] == Calculated.bytes[i]));
          
BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted(_instance, Result);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_Encrypter_Start(struct BLEEncryptionImpl_Instance *_instance) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter?Start\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
if (BLEEncryptionImpl_States_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): internal event Encrypter?Start\n");
BLEEncryptionImpl_send_Encrypter_Started(_instance);
BLEEncryptionImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_FAILED_STATE) {
if (BLEEncryptionImpl_States_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): internal event Encrypter?Start\n");
BLEEncryptionImpl_send_Encrypter_Failure(_instance);
BLEEncryptionImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_Encrypter_GenerateConfirm(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Rand, uint8_t IAT, bdaddr_t IA, uint8_t RAT, bdaddr_t RA) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter?GenerateConfirm\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition Waiting -> ConfirmFirstPart event Encrypter?GenerateConfirm\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_CONFIRMFIRSTPART_STATE;
_instance->BLEEncryptionImpl_Rand_var = Rand;
_instance->BLEEncryptionImpl_IAT_var = IAT;
_instance->BLEEncryptionImpl_IA_var = IA;
_instance->BLEEncryptionImpl_RAT_var = RAT;
_instance->BLEEncryptionImpl_RA_var = RA;
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_CONFIRMFIRSTPART_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_Encrypter_GenerateRandomNumber(struct BLEEncryptionImpl_Instance *_instance) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter?GenerateRandomNumber\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition Waiting -> RandomFirstPart event Encrypter?GenerateRandomNumber\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_RANDOMFIRSTPART_STATE;
BLEEncryptionImpl_send_HCICommands_LERand(_instance);
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_RANDOMFIRSTPART_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEEncryptionImpl_handle_Encrypter_GenerateSTK(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Srand, ble_random_number_t Mrand) {
if(!(_instance->active)) return;
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter?GenerateSTK\n");
//Region States
uint8_t BLEEncryptionImpl_States_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_State == BLEENCRYPTIONIMPL_STATES_READY_STATE) {
//Region Ready
uint8_t BLEEncryptionImpl_States_Ready_State_event_consumed = 0;
if (_instance->BLEEncryptionImpl_States_Ready_State == BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE) {
if (BLEEncryptionImpl_States_Ready_State_event_consumed == 0 && 1) {
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): transition Waiting -> GenerateSTK event Encrypter?GenerateSTK\n");
BLEEncryptionImpl_States_OnExit(BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE, _instance);
_instance->BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_GENERATESTK_STATE;
_instance->BLEEncryptionImpl_Srand_var = Srand;
_instance->BLEEncryptionImpl_Mrand_var = Mrand;
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_READY_GENERATESTK_STATE, _instance);
BLEEncryptionImpl_States_Ready_State_event_consumed = 1;
}
}
//End Region Ready
BLEEncryptionImpl_States_State_event_consumed = 0 | BLEEncryptionImpl_States_Ready_State_event_consumed ;
//End dsregion Ready
}
//End Region States
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_BLEEncryptionImpl_send_Encrypter_Started_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_Encrypter_Started_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_Encrypter_Started_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_Encrypter_Started_listener = _listener;
}
void register_BLEEncryptionImpl_send_Encrypter_Started_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_Encrypter_Started_listener = _listener;
}
void BLEEncryptionImpl_send_Encrypter_Started(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter!Started\n");
if (BLEEncryptionImpl_send_Encrypter_Started_listener != 0x0) BLEEncryptionImpl_send_Encrypter_Started_listener(_instance);
if (external_BLEEncryptionImpl_send_Encrypter_Started_listener != 0x0) external_BLEEncryptionImpl_send_Encrypter_Started_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_Encrypter_Failure_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_Encrypter_Failure_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_Encrypter_Failure_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_Encrypter_Failure_listener = _listener;
}
void register_BLEEncryptionImpl_send_Encrypter_Failure_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_Encrypter_Failure_listener = _listener;
}
void BLEEncryptionImpl_send_Encrypter_Failure(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter!Failure\n");
if (BLEEncryptionImpl_send_Encrypter_Failure_listener != 0x0) BLEEncryptionImpl_send_Encrypter_Failure_listener(_instance);
if (external_BLEEncryptionImpl_send_Encrypter_Failure_listener != 0x0) external_BLEEncryptionImpl_send_Encrypter_Failure_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)){
external_BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener = _listener;
}
void register_BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)){
BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener = _listener;
}
void BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Random){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter!GenerateRandomNumberCompleted\n");
if (BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener != 0x0) BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener(_instance, Random);
if (external_BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener != 0x0) external_BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener(_instance, Random);
;
}
void (*external_BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)){
external_BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener = _listener;
}
void register_BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)){
BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener = _listener;
}
void BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Confirm){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter!GenerateConfirmCompleted\n");
if (BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener != 0x0) BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener(_instance, Confirm);
if (external_BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener != 0x0) external_BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener(_instance, Confirm);
;
}
void (*external_BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)){
external_BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener = _listener;
}
void register_BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)){
BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener = _listener;
}
void BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted(struct BLEEncryptionImpl_Instance *_instance, uint8_t Correct){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter!CheckConfirmCompleted\n");
if (BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener != 0x0) BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener(_instance, Correct);
if (external_BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener != 0x0) external_BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener(_instance, Correct);
;
}
void (*external_BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)){
external_BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener = _listener;
}
void register_BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t)){
BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener = _listener;
}
void BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t STK){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Encrypter!GenerateSTKCompleted\n");
if (BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener != 0x0) BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener(_instance, STK);
if (external_BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener != 0x0) external_BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener(_instance, STK);
;
}
void (*external_BLEEncryptionImpl_send_Socket_Open_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_Socket_Open_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_Socket_Open_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_Socket_Open_listener = _listener;
}
void register_BLEEncryptionImpl_send_Socket_Open_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_Socket_Open_listener = _listener;
}
void BLEEncryptionImpl_send_Socket_Open(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Socket!Open\n");
if (BLEEncryptionImpl_send_Socket_Open_listener != 0x0) BLEEncryptionImpl_send_Socket_Open_listener(_instance);
if (external_BLEEncryptionImpl_send_Socket_Open_listener != 0x0) external_BLEEncryptionImpl_send_Socket_Open_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_Socket_Close_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_Socket_Close_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_Socket_Close_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_Socket_Close_listener = _listener;
}
void register_BLEEncryptionImpl_send_Socket_Close_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_Socket_Close_listener = _listener;
}
void BLEEncryptionImpl_send_Socket_Close(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): Socket!Close\n");
if (BLEEncryptionImpl_send_Socket_Close_listener != 0x0) BLEEncryptionImpl_send_Socket_Close_listener(_instance);
if (external_BLEEncryptionImpl_send_Socket_Close_listener != 0x0) external_BLEEncryptionImpl_send_Socket_Close_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_Reset_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_Reset_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_HCICommands_Reset_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_HCICommands_Reset_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_Reset(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!Reset\n");
if (BLEEncryptionImpl_send_HCICommands_Reset_listener != 0x0) BLEEncryptionImpl_send_HCICommands_Reset_listener(_instance);
if (external_BLEEncryptionImpl_send_HCICommands_Reset_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_Reset_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetEventMask_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetEventMask_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)){
external_BLEEncryptionImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)){
BLEEncryptionImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetEventMask(struct BLEEncryptionImpl_Instance *_instance, set_event_mask_cp Mask){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetEventMask\n");
if (BLEEncryptionImpl_send_HCICommands_SetEventMask_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
if (external_BLEEncryptionImpl_send_HCICommands_SetEventMask_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetEventMaskAll(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetEventMaskAll\n");
if (BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
if (external_BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLocalName_listener)(struct BLEEncryptionImpl_Instance *, change_local_name_cp)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLocalName_listener)(struct BLEEncryptionImpl_Instance *, change_local_name_cp)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, change_local_name_cp)){
external_BLEEncryptionImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, change_local_name_cp)){
BLEEncryptionImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLocalName(struct BLEEncryptionImpl_Instance *_instance, change_local_name_cp Name){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLocalName\n");
if (BLEEncryptionImpl_send_HCICommands_SetLocalName_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
if (external_BLEEncryptionImpl_send_HCICommands_SetLocalName_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_Disconnect_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_Disconnect_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_HCICommands_Disconnect_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)){
BLEEncryptionImpl_send_HCICommands_Disconnect_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_Disconnect(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!Disconnect\n");
if (BLEEncryptionImpl_send_HCICommands_Disconnect_listener != 0x0) BLEEncryptionImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
if (external_BLEEncryptionImpl_send_HCICommands_Disconnect_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)){
external_BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, set_event_mask_cp)){
BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEEventMask(struct BLEEncryptionImpl_Instance *_instance, set_event_mask_cp Mask){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEEventMask\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEEventMaskAll\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEEncryptionImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEAdvertisementParameters\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)){
external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t)){
BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEEncryptionImpl_Instance *_instance, uint8_t Enable){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEAdvertiseEnable\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData(struct BLEEncryptionImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEAdvertisingData\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData(struct BLEEncryptionImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEScanResponseData\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
external_BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEScanParameters(struct BLEEncryptionImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEScanParameters\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint8_t)){
external_BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint8_t, uint8_t)){
BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_SetLEScanEnable(struct BLEEncryptionImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!SetLEScanEnable\n");
if (BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
if (external_BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
external_BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_LECreateConnection(struct BLEEncryptionImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!LECreateConnection\n");
if (BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener != 0x0) BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
if (external_BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!LECreateConnectionCancel\n");
if (BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
if (external_BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_LERand_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_LERand_listener)(struct BLEEncryptionImpl_Instance *)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
external_BLEEncryptionImpl_send_HCICommands_LERand_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *)){
BLEEncryptionImpl_send_HCICommands_LERand_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_LERand(struct BLEEncryptionImpl_Instance *_instance){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!LERand\n");
if (BLEEncryptionImpl_send_HCICommands_LERand_listener != 0x0) BLEEncryptionImpl_send_HCICommands_LERand_listener(_instance);
if (external_BLEEncryptionImpl_send_HCICommands_LERand_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_LERand_listener(_instance);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, ble_random_number_t, ble_random_number_t)){
BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_LEEncrypt(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!LEEncrypt\n");
if (BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener != 0x0) BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
if (external_BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
;
}
void (*external_BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void register_BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void BLEEncryptionImpl_send_HCICommands_LEStartEncryption(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): HCICommands!LEStartEncryption\n");
if (BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener != 0x0) BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
if (external_BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener != 0x0) external_BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPPairingRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPPairingRequest\n");
if (BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPPairingResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPPairingResponse\n");
if (BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPPairingConfirm(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPPairingConfirm\n");
if (BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
if (external_BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPPairingRandom(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPPairingRandom\n");
if (BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
if (external_BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)){
BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPPairingFailed(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPPairingFailed\n");
if (BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
if (external_BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
external_BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPPairingPublicKey(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPPairingPublicKey\n");
if (BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
if (external_BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPPairingDHKeyCheck\n");
if (BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
if (external_BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t)){
BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPKeypressNotification(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPKeypressNotification\n");
if (BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
if (external_BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPEncryptionInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPEncryptionInformation\n");
if (BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
if (external_BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
external_BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPMasterIdentification(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPMasterIdentification\n");
if (BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
if (external_BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPIdentityInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPIdentityInformation\n");
if (BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
if (external_BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPIdentityAddressInformation\n");
if (BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
if (external_BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_random_number_t)){
BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPSigningInformation(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPSigningInformation\n");
if (BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
if (external_BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
;
}
void (*external_BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void register_BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void BLEEncryptionImpl_send_SMP_SMPSecurityRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): SMP!SMPSecurityRequest\n");
if (BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener != 0x0) BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
if (external_BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener != 0x0) external_BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t)){
BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTFindInformationRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTFindInformationRequest\n");
if (BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTFindInformationResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTFindInformationResponse\n");
if (BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTFindInformationError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTFindInformationError\n");
if (BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadByTypeRequest\n");
if (BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadByTypeResponse\n");
if (BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadByTypeError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadByTypeError\n");
if (BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t)){
BLEEncryptionImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadRequest\n");
if (BLEEncryptionImpl_send_ATT_ATTReadRequest_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_BLEEncryptionImpl_send_ATT_ATTReadRequest_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadResponse\n");
if (BLEEncryptionImpl_send_ATT_ATTReadResponse_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_BLEEncryptionImpl_send_ATT_ATTReadResponse_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEEncryptionImpl_send_ATT_ATTReadError_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadError\n");
if (BLEEncryptionImpl_send_ATT_ATTReadError_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEEncryptionImpl_send_ATT_ATTReadError_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadByGroupTypeRequest\n");
if (BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadByGroupTypeResponse\n");
if (BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTReadByGroupTypeError\n");
if (BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTWriteRequest(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTWriteRequest\n");
if (BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)){
external_BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)){
BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTWriteResponse(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTWriteResponse\n");
if (BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTWriteError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTWriteError_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEEncryptionImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEEncryptionImpl_send_ATT_ATTWriteError_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTWriteError(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTWriteError\n");
if (BLEEncryptionImpl_send_ATT_ATTWriteError_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEEncryptionImpl_send_ATT_ATTWriteError_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTWriteCommand(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTWriteCommand\n");
if (BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTHandleValueNotification(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTHandleValueNotification\n");
if (BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTHandleValueIndication(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTHandleValueIndication\n");
if (BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)= 0x0;
void (*BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)){
external_BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEEncryptionImpl_Instance *, uint16_t)){
BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle){
BLEEncryptionImpl_print_debug(_instance, " (BLEEncryptionImpl): ATT!ATTHandleValueConfirmation\n");
if (BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



