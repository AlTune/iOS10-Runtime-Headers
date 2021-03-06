/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateSubtitleView : UIView {
    UIView * _accessoryView;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) double baselineOffsetFromOrigin;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (id)_labelFont;
- (id)accessoryView;
- (double)baselineOffsetFromBottom;
- (double)baselineOffsetFromOrigin;
- (id)font;
- (id)init;
- (id)initWithString:(id)arg1 accessoryView:(id)arg2;
- (double)interItemSpacing;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setAccessoryView:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setString:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)string;

@end
