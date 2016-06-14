/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchClient : NSObject <CLLocationManagerDelegate, WBSParsecGlobalFeedbackDispatcher> {
    WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor * _autoFillCrowdsourcedCorrectionsProcessor;
    WBSFormAutoFillParsecDomainPolicyProvider * _autoFillFeedbackDomainPolicyProvider;
    NSString * _bagForceFetchVersion;
    NSMutableDictionary * _bagImageData;
    NSMutableDictionary * _bagImages;
    double  _configurationUpdateInterval;
    bool  _creatingMescalSession;
    NSString * _customFlight;
    NSString * _deviceIP;
    bool  _enabled;
    NSArray * _enabledDomains;
    bool  _feedbackEnabled;
    NSObject<OS_dispatch_queue> * _feedbackQueue;
    NSMutableArray * _feedbackQueuedWhileCreatingMescalSession;
    NSURL * _feedbackURL;
    NSString * _firstUseDescriptionText;
    NSString * _firstUseLearnMoreText;
    NSString * _geoUserSessionEntitySessionIDString;
    bool  _hasCompletedBagFetch;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { 
        struct duration<long long, std::__1::ratio<1, 1000000000> > { 
            long long __rep_; 
        } __d_; 
    }  _latestQueryTimestamp;
    CLLocation * _location;
    double  _locationCachingInterval;
    CLLocationManager * _locationManager;
    NSThread * _locationThread;
    unsigned long long  _maximumCachedQueriesToSend;
    NSURL * _mescalCertificateURL;
    bool  _mescalEnabled;
    WBSParsecSearchMescalSession * _mescalSession;
    NSURL * _mescalSetupURL;
    unsigned long long  _mescalVersionNumber;
    double  _minimumIntervalBetweenQueriesFromBag;
    double  _minimumIntervalBetweenQueriesFromSearchResponse;
    unsigned long long  _minimumQueryLength;
    unsigned long long  _mode;
    NSArray * _optionalQueryItems;
    NSNumber * _otherRenderTimeout;
    NSString * _recentlyUsedAppIdentifierListString;
    NSArray * _recentlyUsedAppIdentifierWhitelist;
    bool  _safeModeEnabled;
    NSMutableDictionary * _screenScaleToSpriteImageDictionary;
    NSMutableDictionary * _screenScaleToSpriteMapDictionary;
    NSNumber * _searchRenderTimeout;
    NSURL * _searchURL;
    NSDate * _sharedURLSessionExpirationTime;
    <WBSParsecSearchClientStorage> * _storage;
    NSString * _storeFrontIdentifier;
    NSArray * _subscriptionProviderBundleIdentifierWhitelist;
    NSArray * _subscriptionProviderDomainWhitelist;
    double  _subscriptionTTL;
    NSArray * _supportedDomainIdentifiers;
    NSArray * _supportedGeolocationServices;
    double  _timeAfterWhichLocationShouldBeUpdated;
    NSTimer * _updateTimer;
    bool  _updatingLocation;
    NSURLSessionConfiguration * _urlSessionConfiguration;
    NSURLSession * _urlSessionForSearchSessions;
    NSString * _userAgent;
    NSString * _userGUID;
    bool  _userGUIDEnabled;
    NSTimer * _userGUIDExpirationTimer;
    NSURL * _userGUIDURL;
    bool  _valid;
    int  ipChangeNotificationToken;
}

@property (nonatomic, readonly) WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor *autoFillCrowdsourcedCorrectionsProcessor;
@property (nonatomic, readonly) WBSFormAutoFillParsecDomainPolicyProvider *autoFillFeedbackDomainPolicyProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *debuggingQueryItems;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSArray *enabledDomains;
@property (nonatomic, readonly) bool feedbackEnabled;
@property (nonatomic, readonly) NSString *firstUseDescriptionText;
@property (nonatomic, readonly) NSString *firstUseLearnMoreText;
@property (nonatomic, readonly) NSString *geoUserSessionEntitySessionIDString;
@property (nonatomic, readonly) bool hasCompletedBagFetch;
@property (readonly) unsigned long long hash;
@property (nonatomic) /* Warning: unhandled struct encoding: '{time_point<std::__1::chrono::steady_clock' */ struct  latestQueryTimestamp; /* unknown property attribute:  1000000000> >=q}} */
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic) double locationCachingInterval;
@property (nonatomic, readonly) unsigned long long maximumCachedQueriesToSend;
@property (nonatomic, readonly) double minimumIntervalBetweenQueriesFromBag;
@property (nonatomic) double minimumIntervalBetweenQueriesFromSearchResponse;
@property (nonatomic, readonly) unsigned long long minimumQueryLength;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, readonly) NSArray *optionalQueryItems;
@property (nonatomic, readonly) NSNumber *otherRenderTimeout;
@property (nonatomic) bool safeModeEnabled;
@property (nonatomic, readonly) NSNumber *searchRenderTimeout;
@property (nonatomic, readonly) NSURL *searchURL;
@property (nonatomic, readonly) NSURLQueryItem *secretKeyQueryItem;
@property (nonatomic, readonly) <WBSParsecSearchClientStorage> *storage;
@property (nonatomic, readonly) NSArray *subscriptionProviderBundleIdentifierWhitelist;
@property (nonatomic, readonly) NSArray *subscriptionProviderDomainWhitelist;
@property (nonatomic, readonly) double subscriptionTTL;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedDomainIdentifiers;
@property (nonatomic, readonly) NSURLSessionConfiguration *urlSessionConfiguration;
@property (nonatomic, retain) NSURLSession *urlSessionForSearchSessions;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)_preferredLanguages;
+ (id)applicationNameForUserAgent;
+ (id)existingSharedClient;
+ (id)sharedClient;
+ (bool)shouldUseParsecD;
+ (Class)storageClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_configurationForFeedbackSessionFullyAnonymize:(bool)arg1;
- (void)_configureMescalFromDictionary:(id)arg1;
- (void)_createMescalSession;
- (void)_createMescalSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_customFlightQueryItem;
- (void)_downloadAutoFillJSONDataAtURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchConfiguration;
- (void)_fetchUserGUIDIfNeeded;
- (void)_generateSpriteImagesFromArray:(id)arg1;
- (bool)_hasLocationServicesEffectiveBundleEntitlement;
- (id)_initForTesting;
- (id)_localeQueryItem;
- (id)_locationSourceForLocation:(id)arg1;
- (void)_locationThread;
- (void)_performBlock:(id /* block */)arg1;
- (void)_performBlockOnLocationThread:(id /* block */)arg1;
- (void)_performBlockOnLocationThread:(id /* block */)arg1 wait:(bool)arg2;
- (void)_performBlockOnLocationThreadAndWait:(id /* block */)arg1;
- (void)_processBagFetchResponseData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_processMescalCertificatePropertyListData:(id)arg1 error:(id)arg2 withURLSession:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_processMescalSetupPropertyListData:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_refreshGEOUserSession;
- (void)_setUpLocationServicesWithBagInfo:(id)arg1;
- (void)_setUserGUID:(id)arg1 expirationDate:(id)arg2;
- (void)_storeFrontIdentifierDidChange:(id)arg1;
- (void)_updateAutoFillCorrectionSetsIfNeededWithURLString:(id)arg1;
- (void)_updateAutoFillDomainWhitelistIfNeededWithURLString:(id)arg1;
- (void)_updateBagFetchInterval:(id)arg1;
- (void)_updateOptionalQueryItems;
- (void)_updateStoreFrontIdentifier;
- (void)_updateUserGUIDExpirationTimerWithDate:(id)arg1;
- (id)_urlFromBag:(id)arg1 forKey:(id)arg2 fallbackURLKey:(id)arg3;
- (void)_userGUIDExpirationTimerDidFire:(id)arg1;
- (id)autoFillCrowdsourcedCorrectionsProcessor;
- (id)autoFillFeedbackDomainPolicyProvider;
- (id)debuggingQueryItems;
- (id)enabledDomains;
- (bool)feedbackEnabled;
- (id)firstUseDescriptionText;
- (id)firstUseLearnMoreText;
- (id)geoUserSessionEntitySessionIDString;
- (bool)hasCompletedBagFetch;
- (id)imageForIdentifier:(id)arg1 withScale:(double)arg2;
- (id)init;
- (void)invalidate;
- (bool)isEnabled;
- (bool)isValid;
- (struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })latestQueryTimestamp;
- (id)location;
- (double)locationCachingInterval;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationSource;
- (unsigned long long)maximumCachedQueriesToSend;
- (double)minimumIntervalBetweenQueriesFromBag;
- (double)minimumIntervalBetweenQueriesFromSearchResponse;
- (unsigned long long)minimumQueryLength;
- (unsigned long long)mode;
- (void)networkRequestDidFailWithError:(id)arg1 response:(id)arg2;
- (id)optionalQueryItems;
- (id)otherRenderTimeout;
- (void)reinitialize;
- (void)resetUserGUID;
- (bool)safeModeEnabled;
- (id)searchRenderTimeout;
- (id)searchURL;
- (id)secretKeyQueryItem;
- (void)sendCrowdsourcedAutoFillFeedback:(id)arg1;
- (void)sendGeneratedFeedback:(id)arg1;
- (void)sendGeneratedFeedback:(id)arg1 fullyAnonymize:(bool)arg2;
- (void)sessionDidReceiveForceFetchRequest:(id)arg1;
- (void)setLatestQueryTimestamp:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1;
- (void)setLocationCachingInterval:(double)arg1;
- (void)setMinimumIntervalBetweenQueriesFromSearchResponse:(double)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSafeModeEnabled:(bool)arg1;
- (void)setSupportedDomainIdentifiers:(id)arg1;
- (void)setUrlSessionForSearchSessions:(id)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (id)storage;
- (id)subscriptionProviderBundleIdentifierWhitelist;
- (id)subscriptionProviderDomainWhitelist;
- (double)subscriptionTTL;
- (id)supportedDomainIdentifiers;
- (void)test_processMescalSetupPropertyListData:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateRecentlyUsedAppIdentifiers;
- (void)updateURLSessionConfiguration;
- (id)urlSessionConfiguration;
- (id)urlSessionForSearchSessions;

@end