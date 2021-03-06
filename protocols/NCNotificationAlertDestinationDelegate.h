/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>

@required

- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(NCNotificationRequest *)arg2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id <NCNotificationDestination>)arg1;

@optional

- (void)destination:(id <NCNotificationAlertDestination>)arg1 didDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didPresentNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2;

@end
