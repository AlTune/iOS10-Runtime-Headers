/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPPort : NSObject {
    unsigned int  _interestNotification;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    unsigned int  _service;
}

@property (getter=isASCapable, nonatomic, readonly) bool asCapable;
@property (nonatomic, readonly) unsigned int propagationDelay;
@property (nonatomic, readonly) unsigned long long remoteClockIdentity;
@property (nonatomic, readonly) unsigned short remotePortNumber;
@property (nonatomic, readonly) unsigned int service;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;

- (void)_registryPropertyChanged;
- (void)dealloc;
- (id)init;
- (id)initWithMatchingDictionary:(id)arg1;
- (bool)isASCapable;
- (unsigned int)propagationDelay;
- (unsigned long long)remoteClockIdentity;
- (unsigned short)remotePortNumber;
- (unsigned int)service;
- (void)serviceTerminated;

@end