/* Generated by RuntimeBrowser.
 */

@protocol AFSpeechServiceDelegate <NSObject>

@required

- (oneway void)speechServiceDidFinishRecognitionWithError:(NSError *)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizePhrases:(NSArray *)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1;

@end
