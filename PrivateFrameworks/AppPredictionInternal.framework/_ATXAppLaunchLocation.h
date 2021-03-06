/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchLocation : NSObject {
    NSDictionary * _appLaunchCountMap;
    NSUUID * _currentLOI;
    Class  _deviceState;
    _ATXDuetHelper * _duetHelper;
    NSObject<OS_os_transaction> * _keepAliveUntilTrainingComplete;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    id  _lockStateNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> * _queue;
    <_ATXRoutineManagerWrapperProtocol> * _routineManager;
    NSDictionary * _totalLaunchCountMap;
    bool  _waitingLoad;
}

+ (id)defaultPath;
+ (id)generateRangeArrayAndUUIDLookupFromLocationsOfInterest:(id)arg1 withStartDate:(id)arg2;
+ (id)mergeAppLaunches:(id)arg1 withLocationOfInterestVisits:(id)arg2 withIntervalToLocationMap:(id)arg3;
+ (id)sortTimeIntervals:(id)arg1;

- (void).cxx_destruct;
- (id)_getAppLaunchCountMap;
- (id)_getCurrentLocation;
- (id)_getTotalLaunchCountMap;
- (int)_launchCountAtCurrentLOIOfBundle:(id)arg1;
- (void)_registerClassAUnlockHandler;
- (void)_setCurrentLocation:(id)arg1;
- (int)_totalLaunchCountAtCurrentLOI;
- (void)dealloc;
- (void)fetchCurrentLOI;
- (void)finishTrainWithCallback:(id /* block */)arg1;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 routineManager:(id)arg2 andLockState:(Class)arg3;
- (int)launchCountAtCurrentLOIOfBundle:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForBundle:(id)arg1;
- (void)listenForLocationVisits;
- (unsigned long long)loadModel;
- (void)loadOrTrain;
- (int)totalLaunchCountAtCurrentLOI;
- (void)train;
- (void)trainModelWithLocationsOfInterest:(id)arg1 withStartDate:(id)arg2 callback:(id /* block */)arg3;
- (void)trainWithCallback:(id /* block */)arg1;
- (void)writeModel;

@end
