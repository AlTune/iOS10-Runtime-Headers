/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSearchViewAppearFeedback : SFFeedback {
    bool  _isOnLockScreen;
    bool  _isOverApp;
    unsigned long long  _viewAppearEvent;
}

@property (nonatomic) bool isOnLockScreen;
@property (nonatomic) bool isOverApp;
@property (nonatomic) unsigned long long viewAppearEvent;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;
- (bool)isOnLockScreen;
- (bool)isOverApp;
- (void)setIsOnLockScreen:(bool)arg1;
- (void)setIsOverApp:(bool)arg1;
- (void)setViewAppearEvent:(unsigned long long)arg1;
- (unsigned long long)viewAppearEvent;

@end