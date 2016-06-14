/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentMeshStorage : NSObject {
    NSMutableSet * _accessoryUUIDs;
    HMDDevice * _device;
    NSUUID * _deviceUUID;
    bool  _disabled;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSMutableSet *accessoryUUIDs;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) NSUUID *deviceUUID;
@property (nonatomic) bool disabled;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)accessoryUUIDs;
- (id)device;
- (id)deviceUUID;
- (bool)disabled;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 accessories:(id)arg2;
- (id)initWithDeviceUUID:(id)arg1;
- (void)setAccessoryUUIDs:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end