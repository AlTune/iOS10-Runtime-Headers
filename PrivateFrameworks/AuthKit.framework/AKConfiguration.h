/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKConfiguration : NSObject {
    NSMutableDictionary * _cachedSettings;
    int  _notificationToken;
    NSObject<OS_dispatch_queue> * _settingsQueue;
}

@property (nonatomic) long long shouldDisablePETs;
@property (nonatomic) long long shouldFakeAuthSuccess;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)configurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
- (void)setShouldDisablePETs:(long long)arg1;
- (void)setShouldFakeAuthSuccess:(long long)arg1;
- (long long)shouldDisablePETs;
- (long long)shouldFakeAuthSuccess;

@end
