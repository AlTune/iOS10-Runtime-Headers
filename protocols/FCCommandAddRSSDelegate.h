/* Generated by RuntimeBrowser.
 */

@protocol FCCommandAddRSSDelegate <FCCommandDelegate>

@required

- (void)command:(FCCommand *)arg1 didReceivepollingURL:(NSURL *)arg2 error:(NSError *)arg3 feedURL:(NSURL *)arg4 title:(NSString *)arg5;
- (void)commandDidStartExecuting:(FCCommand *)arg1;

@end