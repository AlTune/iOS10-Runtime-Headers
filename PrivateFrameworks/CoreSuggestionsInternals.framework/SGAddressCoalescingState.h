/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGAddressCoalescingState : NSObject {
    long long  _lastAddressEndPos;
    long long  _lastAddressIndex;
    struct __DDResult { } * _lastResult;
    NSMutableArray * _matches;
}

@property (retain) NSArray *matches;

- (void).cxx_destruct;
- (void)coalesceAddress:(struct __DDResult { }*)arg1 orAppendMatch:(id)arg2;
- (id)init;
- (id)matches;
- (void)setMatches:(id)arg1;

@end
