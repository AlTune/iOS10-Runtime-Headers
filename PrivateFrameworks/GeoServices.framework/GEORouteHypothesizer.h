/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizer : NSObject {
    NSString * _activityIdentifier;
    NSError * _currentError;
    GEORouteHypothesis * _currentHypothesis;
    GEOPlannedDestination * _plannedDestination;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned long long  _state;
    bool  _unableToFindRouteForOriginalTransportType;
    id /* block */  _updateHandler;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSError *currentError;
@property (nonatomic, readonly) GEORouteHypothesis *currentHypothesis;
@property (nonatomic, readonly) GEOPlannedDestination *plannedDestination;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) bool unableToFindRouteForOriginalTransportType;
@property (nonatomic, readonly) double willBeginHypothesizingInterval;
@property (nonatomic, readonly) double willEndHypothesizingInterval;

+ (id)hypothesizerForPlannedDestination:(id)arg1;

- (bool)_wontHypothesizeAgain;
- (id)currentError;
- (id)currentHypothesis;
- (void)dealloc;
- (void)delayStarting;
- (id)description;
- (void)didPostUINotification:(unsigned long long)arg1;
- (id)initWithPlannedDestination:(id)arg1;
- (void)onlyPerformLocalUpdates;
- (id)plannedDestination;
- (void)requestRefresh;
- (void)setState:(unsigned long long)arg1;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)arg1;
- (unsigned long long)state;
- (void)stopHypothesizing;
- (bool)unableToFindRouteForOriginalTransportType;
- (double)willBeginHypothesizingInterval;
- (double)willEndHypothesizingInterval;

@end