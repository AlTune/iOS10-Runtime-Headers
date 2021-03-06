/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCCacheFlushing, FCFetchCoordinatorDelegate> {
    FCCacheCoordinator * _cacheCoordinator;
    FCCKDatabase * _contentDatabase;
    FCFetchCoordinator * _fetchCoordinator;
    FCThreadSafeMutableDictionary * _fetchErrorsByKey;
    FCKeyValueStore * _localStore;
}

@property (nonatomic, readonly) FCCacheCoordinator *cacheCoordinator;
@property (nonatomic, readonly) FCCKDatabase *contentDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFetchCoordinator *fetchCoordinator;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *fetchErrorsByKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (readonly) Class superclass;

+ (id)_localizedKeysByOriginalKey;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (unsigned long long)dataSizeLimit;
+ (unsigned long long)defaultFetchOperationCachePolicy;
+ (double)defaultFetchOperationMaximumCachedAge;
+ (id)desiredKeys;
+ (id)identifierFromCKRecord:(id)arg1;
+ (id)localizableKeys;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;

- (void).cxx_destruct;
- (id)_ckRecordIDFromIdentifier:(id)arg1;
- (id)_faultableRecordsWithIdentifiers:(id)arg1;
- (id)_fetchErrorForKey:(id)arg1;
- (id)_identifierFromCKRecordID:(id)arg1;
- (id)_recordBaseFromCKRecord:(id)arg1;
- (id)_saveCKRecordsWithWriteLock:(id)arg1;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)contentDatabase;
- (void)enableFlushing;
- (id)fetchCoordinator;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 networkPriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 context:(id)arg3;
- (id)fetchErrorsByKey;
- (id)fetchOperationForRecordsWithIDs:(id)arg1;
- (id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)localStore;
- (id)saveRecords:(id)arg1;

@end
