/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface ASScorer : NSObject {
    ASScorerContext * _context;
}

@property (nonatomic, retain) ASScorerContext *context;

+ (id)scorerWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)initWithContext:(id)arg1;
- (void)scoreMessageWithCompletionHandler:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (id)settingsFromContext:(id)arg1;

@end
