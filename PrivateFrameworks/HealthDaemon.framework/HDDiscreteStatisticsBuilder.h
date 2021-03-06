/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiscreteStatisticsBuilder : HDStatisticsBuilder

- (void)_addSample:(id)arg1 toStatistics:(id)arg2;
- (id)_collectionCalculatorWithBucketBoundaries:(id)arg1;
- (id)_getQuantitiesBySourceForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 unit:(id)arg4 profile:(id)arg5 database:(id)arg6;
- (id)_initialStatisticsForTimePeriod:(id)arg1 database:(id)arg2 shouldStopProcessing:(id /* block */)arg3 error:(id*)arg4;
- (void)_setDataCount:(long long)arg1 inStatistics:(id)arg2 forSource:(id)arg3;
- (bool)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)_statisticsForPredicate:(id)arg1 database:(id)arg2 shouldStopProcessing:(id /* block */)arg3 error:(id*)arg4;
- (id)_statsBySourceFromIdsAndStats:(id)arg1 unit:(id)arg2;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id*)arg3;

@end
