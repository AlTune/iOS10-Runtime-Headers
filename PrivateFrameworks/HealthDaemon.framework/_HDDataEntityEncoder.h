/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataEntityEncoder : HDEntityEncoder {
    HDDataProvenanceCache * _dataProvenanceCache;
    id /* block */  _metadataKeyFilter;
    HDMetadataValueStatement * _metadataValueStatement;
}

@property (nonatomic, readonly) HDDataProvenanceCache *dataProvenanceCache;
@property (nonatomic, readonly, copy) id /* block */ metadataKeyFilter;
@property (nonatomic, readonly) HDMetadataValueStatement *metadataValueStatement;

- (void).cxx_destruct;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)dataProvenanceCache;
- (void)finish;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(id /* block */)arg6;
- (id /* block */)metadataKeyFilter;
- (id)metadataValueStatement;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)orderedProperties;

@end
