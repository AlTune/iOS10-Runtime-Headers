/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolConfiguration : NSObject {
    long long  _heuristicOption;
    long long  _heuristicOrder;
    unsigned long long  _heuristicSampleSize;
    unsigned long long  _maxArticleCombos;
    long long  _moveOrder;
    double  _searchBranchDecay;
    unsigned long long  _searchBranchMultiplier;
    double  _searchTimeLimit;
    long long  _tagOrder;
}

@property (nonatomic, readonly) long long heuristicOption;
@property (nonatomic, readonly) long long heuristicOrder;
@property (nonatomic, readonly) unsigned long long heuristicSampleSize;
@property (nonatomic, readonly) unsigned long long maxArticleCombos;
@property (nonatomic, readonly) long long moveOrder;
@property (nonatomic, readonly) double searchBranchDecay;
@property (nonatomic, readonly) unsigned long long searchBranchMultiplier;
@property (nonatomic, readonly) double searchTimeLimit;
@property (nonatomic, readonly) long long tagOrder;

+ (id)defaultConfiguration;

- (long long)heuristicOption;
- (long long)heuristicOrder;
- (unsigned long long)heuristicSampleSize;
- (id)initWithMaxArticleCombos:(unsigned long long)arg1 heuristicSampleSize:(unsigned long long)arg2 searchBranchMultiplier:(unsigned long long)arg3 searchBranchDecay:(double)arg4 searchTimeLimit:(double)arg5 tagOrder:(long long)arg6 moveOrder:(long long)arg7 heuristicOrder:(long long)arg8 heuristicOption:(long long)arg9;
- (unsigned long long)maxArticleCombos;
- (long long)moveOrder;
- (double)searchBranchDecay;
- (unsigned long long)searchBranchMultiplier;
- (double)searchTimeLimit;
- (long long)tagOrder;

@end
