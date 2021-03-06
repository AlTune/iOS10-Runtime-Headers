/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute> {
    bool  _failed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFailed, nonatomic) bool failed;
@property (readonly) unsigned long long hash;
@property (getter=navigationWasInterrupted, nonatomic) bool navigationInterrupted;
@property (nonatomic, copy) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (readonly) Class superclass;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)endWaypoint;
- (id)initWithStorage:(id)arg1;
- (bool)isFailed;
- (bool)navigationWasInterrupted;
- (id)routeRequestStorage;
- (void)setFailed:(bool)arg1;
- (void)setNavigationInterrupted:(bool)arg1;
- (void)setRouteRequestStorage:(id)arg1;
- (id)startWaypoint;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;
- (int)transportType;

@end
