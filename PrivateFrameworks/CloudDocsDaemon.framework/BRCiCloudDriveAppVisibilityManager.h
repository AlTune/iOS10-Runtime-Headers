/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCiCloudDriveAppVisibilityManager : NSObject <BRCCloudDocsAppsObserver> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)installiCloudDriveApp;
+ (bool)isiCloudDriveAppInstalled;
+ (id)sharedManager;
+ (bool)uninstalliCloudDriveApp;

- (void).cxx_destruct;
- (id)_descriptionForDSID:(id)arg1;
- (id)_init;
- (void)_setDefaultVisibility:(id)arg1 forDSID:(id)arg2;
- (bool)_unsafe_setDefaultVisibility:(id)arg1 forDSID:(id)arg2;
- (id)_unsafe_visibilityForCurrentAccount;
- (id)_unsafe_visibilityForDSID:(id)arg1;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)init;
- (bool)setVisibilityForCurrentAccount:(id)arg1;
- (bool)updateVisibilityForCurrentAccount;
- (id)visibilityForCurrentAccount;

@end
