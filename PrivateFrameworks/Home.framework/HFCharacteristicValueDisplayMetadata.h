/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicValueDisplayMetadata : NSObject {
    long long  _primaryState;
    long long  _priority;
    NSString * _sortKey;
}

@property (nonatomic) long long primaryState;
@property (nonatomic) long long priority;
@property (nonatomic, retain) NSString *sortKey;

+ (id)displayMetadataForServiceType:(id)arg1 characteristicReadResponse:(id)arg2;

- (void).cxx_destruct;
- (void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2;
- (void)parseGarageDoorOpenerResponse:(id)arg1;
- (void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2;
- (void)parseLockMechanismResponse:(id)arg1;
- (void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseSecuritySystemResponse:(id)arg1;
- (void)parseThermostatResponse:(id)arg1;
- (void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2;
- (long long)primaryState;
- (long long)priority;
- (void)setPrimaryState:(long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSortKey:(id)arg1;
- (id)sortKey;

@end
