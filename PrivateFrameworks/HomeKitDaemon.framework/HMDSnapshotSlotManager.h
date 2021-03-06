/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotSlotManager : NSObject <HMFLogging, HMFTimerDelegate> {
    HMDSnapshotFile * _mostRecentSnapshot;
    HMFTimer * _mostRecentSnapshotInvalidationTimer;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    CAContext * _snapshotContext;
    NSMutableDictionary * _snapshotSlots;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDSnapshotFile *mostRecentSnapshot;
@property (nonatomic, retain) HMFTimer *mostRecentSnapshotInvalidationTimer;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) CAContext *snapshotContext;
@property (nonatomic, readonly) NSMutableDictionary *snapshotSlots;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2;
- (void)handleForegroundAppsNotification:(id)arg1;
- (void)handleReleaseSnapshot:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 msgDispatcher:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)logIdentifier;
- (id)mostRecentSnapshot;
- (id)mostRecentSnapshotInvalidationTimer;
- (id)msgDispatcher;
- (id)payloadForSnapshotFile:(id)arg1;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)setMostRecentSnapshot:(id)arg1;
- (void)setMostRecentSnapshotInvalidationTimer:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setSnapshotContext:(id)arg1;
- (id)snapshotContext;
- (id)snapshotSlots;
- (void)timerDidFire:(id)arg1;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
