/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAnalysisProgress : NSObject {
    NSDictionary * _countDictionariesByWorkerType;
    NSDictionary * _countOfDeletionsByWorkerType;
}

+ (void)requestCurrentProgressWithLibrary:(id)arg1 includeDeletedAssetsCount:(bool)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (float)_progressFromProcessedCount:(long long)arg1 outOfPossibleCount:(long long)arg2;
- (unsigned long long)countOfDeletionsForWorkerType:(short)arg1;
- (id)description;
- (id)init;
- (id)initWithCounts:(id)arg1 countOfDeletionsByWorkerType:(id)arg2;
- (float)localPercentAnalyzedForWorkerType:(short)arg1;
- (float)percentAnalyzedForWorkerType:(short)arg1;
- (id)statusAsDictionary;

@end
