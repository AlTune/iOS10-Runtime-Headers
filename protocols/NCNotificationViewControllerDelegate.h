/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationViewControllerDelegate <NSObject>

@required

- (void)notificationViewController:(NCNotificationViewController *)arg1 executeAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3;

@optional

- (UIView *)colorInfusingViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })notificationViewController:(NCNotificationViewController *)arg1 convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toLocalWindowSpaceFromView:(UIView *)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToLongLookPresentation:(bool)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToShortLookPresentation:(bool)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissLongLook:(bool)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissShortLook:(bool)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didPresentLongLook:(bool)arg2;
- (UIViewController *)notificationViewController:(NCNotificationViewController *)arg1 preferredViewControllerForPresentingFromViewController:(UIViewController *)arg2;
- (void)notificationViewController:(void *)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: NCNotificationViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (void)notificationViewControllerDidEndDragging:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldAllowInteractionGesture:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldBlurShortLook:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillBeginDragging:(NCNotificationViewController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationFrameForNotificationViewController:(NCNotificationViewController *)arg1;
- (bool)shouldAddHintTextForNotificationViewController:(NCNotificationViewController *)arg1;

@end
