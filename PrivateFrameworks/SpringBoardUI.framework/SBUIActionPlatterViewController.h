/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIActionPlatterViewController : UIViewController <UIGestureRecognizerDelegate> {
    NSArray * _actions;
    <SBUIActionPlatterViewControllerDelegate> * _delegate;
    struct { 
        unsigned int actionPlatterViewControllerShouldRespondToTouches : 1; 
    }  _delegateRespondsTo;
    UILongPressGestureRecognizer * _gestureRecognizer;
    SBUIIconForceTouchController * _iconForceTouchController;
    long long  _imagePosition;
    UIView * _keylinesContainerView;
    bool  _reversesActions;
    UIStackView * _stackView;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIActionPlatterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBUIIconForceTouchController *iconForceTouchController;
@property (nonatomic) long long imagePosition;
@property (nonatomic) bool reversesActions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_updateKeylineViews;
- (id)actions;
- (void)addAction:(id)arg1;
- (id)delegate;
- (id)gestureRecognizer;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)iconForceTouchController;
- (long long)imagePosition;
- (id)init;
- (id)initWithActions:(id)arg1 gestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (bool)reversesActions;
- (void)setDelegate:(id)arg1;
- (void)setIconForceTouchController:(id)arg1;
- (void)setImagePosition:(long long)arg1;
- (void)setReversesActions:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
