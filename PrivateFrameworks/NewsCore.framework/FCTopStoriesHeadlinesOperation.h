/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesHeadlinesOperation : FCOperation {
    FCFeedCursor * _bottomCursor;
    <FCContentContext> * _context;
    FCTopStoriesFeedLimit * _feedLimit;
    <FCFeedTransforming> * _filterTransformation;
    id /* block */  _headlinesCompletionHandler;
    <FCFeedPersonalizing> * _personalizer;
    FCFeedRange * _resultCursor;
    NSArray * _resultHeadlines;
    NSObject<FCTagProviding> * _resultTopStoriesTag;
    FCFeedCursor * _topCursor;
}

@property (nonatomic, copy) FCFeedCursor *bottomCursor;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) FCTopStoriesFeedLimit *feedLimit;
@property (nonatomic, retain) <FCFeedTransforming> *filterTransformation;
@property (copy) id /* block */ headlinesCompletionHandler;
@property (nonatomic, retain) <FCFeedPersonalizing> *personalizer;
@property (nonatomic, copy) FCFeedRange *resultCursor;
@property (nonatomic, copy) NSArray *resultHeadlines;
@property (nonatomic, copy) NSObject<FCTagProviding> *resultTopStoriesTag;
@property (nonatomic, copy) FCFeedCursor *topCursor;

- (void).cxx_destruct;
- (id)bottomCursor;
- (id)context;
- (id)feedLimit;
- (id)filterTransformation;
- (id /* block */)headlinesCompletionHandler;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)personalizer;
- (id)resultCursor;
- (id)resultHeadlines;
- (id)resultTopStoriesTag;
- (void)setBottomCursor:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFeedLimit:(id)arg1;
- (void)setFilterTransformation:(id)arg1;
- (void)setHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setPersonalizer:(id)arg1;
- (void)setResultCursor:(id)arg1;
- (void)setResultHeadlines:(id)arg1;
- (void)setResultTopStoriesTag:(id)arg1;
- (void)setTopCursor:(id)arg1;
- (id)topCursor;
- (bool)validateOperation;

@end
