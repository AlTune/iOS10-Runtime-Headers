/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSDictionary *bootTransitionContext;
@property (nonatomic, readonly) bool dontLockAfterCrash;
@property (nonatomic) bool hasAttemptedToSynchronizeCloudCriticalData;
@property (nonatomic, retain) NSString *lastSystemBuildVersion;
@property (nonatomic, retain) NSArray *previousBootLanguages;
@property (nonatomic, readonly) bool recordBootTimeTillDidFinishLaunching;

- (void)_bindAndRegisterDefaults;

@end
