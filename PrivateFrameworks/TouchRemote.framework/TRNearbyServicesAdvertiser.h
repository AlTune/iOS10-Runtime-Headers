/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNearbyServicesAdvertiser : NSObject {
    <TRNearbyServicesAdvertiserDelegateProtocol> * _delegate;
    unsigned long long  _heartbeatInterval;
    NSObject<OS_dispatch_queue> * _nearbyQ;
    SFService * _setupService;
}

@property (nonatomic, retain) <TRNearbyServicesAdvertiserDelegateProtocol> *delegate;
@property (nonatomic) unsigned long long heartbeatInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *nearbyQ;
@property (nonatomic, readonly) SFService *setupService;

+ (bool)isAdvertising;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_configureHeartbeatForSession:(id)arg1;
- (void)_configureNewSession:(id)arg1;
- (void)_sessionReadyForCommunications:(id)arg1;
- (void)_updateHeartbeatState;
- (id)delegate;
- (unsigned long long)heartbeatInterval;
- (id)init;
- (id)nearbyQ;
- (void)setDelegate:(id)arg1;
- (void)setHeartbeatInterval:(unsigned long long)arg1;
- (id)setupService;
- (void)startAdvertisingForNearbyDeviceToProvideSetup;
- (void)stopAdvertisingForNearbyDeviceToProvideSetup;

@end
