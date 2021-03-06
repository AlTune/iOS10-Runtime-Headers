/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPMessageUnit : NSObject {
    NSString * _bestLanguage;
    NSArray * _features;
    NSArray * _flatMessageThread;
    NSMutableArray * _followups;
    long long  _indexInOriginalMessage;
    IPMessage * _originalMessage;
    IPMessageUnit * _previous;
    NSString * _text;
}

@property (readonly) NSArray *features;
@property (readonly) NSArray *followups;
@property (readonly) long long indexInOriginalMessage;
@property (readonly) IPMessage *originalMessage;
@property (readonly) IPMessageUnit *previous;
@property (readonly, copy) NSString *text;

- (void).cxx_destruct;
- (void)addFollowup:(id)arg1;
- (id)bestLanguageID;
- (id)features;
- (id)followups;
- (long long)indexInOriginalMessage;
- (id)initWithText:(id)arg1 originalMessage:(id)arg2 index:(long long)arg3;
- (id)originalMessage;
- (id)previous;
- (id)text;

@end
