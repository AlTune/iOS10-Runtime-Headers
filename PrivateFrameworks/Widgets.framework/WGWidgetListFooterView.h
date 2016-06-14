/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetListFooterView : UIView {
    WGShortLookStyleButton * _editButton;
    long long  _layoutMode;
    UIFont * _referenceFont;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) long long layoutMode;

- (void).cxx_destruct;
- (void)_availableWidgetsUpdated:(id)arg1;
- (id)_referenceFont;
- (void)_updateForContentCategorySizeDidChange;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)backgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutMode;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end