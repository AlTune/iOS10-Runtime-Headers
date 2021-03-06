/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCellActionButtonsView : UIView {
    bool  _backgroundBlurred;
    UIStackView * _buttonsStackView;
    UIView * _clippingView;
    double  _defaultWidth;
    double  _stretchedWidth;
}

@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, retain) UIStackView *buttonsStackView;
@property (nonatomic, retain) UIView *clippingView;
@property (nonatomic, readonly) double defaultWidth;
@property (nonatomic) double stretchedWidth;

- (void).cxx_destruct;
- (void)_configureButtonsStackViewIfNecessary;
- (void)_configureClippingViewIfNecessary;
- (void)_configureDefaultWidth;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (id)buttonsStackView;
- (id)clippingView;
- (void)configureCellActionButtonsForNotificationRequest:(id)arg1 cell:(id)arg2;
- (double)defaultWidth;
- (bool)isBackgroundBlurred;
- (void)layoutSubviews;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setButtonsStackView:(id)arg1;
- (void)setClippingView:(id)arg1;
- (void)setStretchedWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)stretchedWidth;
- (void)willMoveToSuperview:(id)arg1;

@end
