/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent> {
    BOOL  _batchedTransactionDequeueIsScheduled;
    NSMutableArray * _batchedTransactions;
    NSObject<OS_dispatch_queue> * _batchedTransactionsQueue;
    CPLEngineClientCache * _clientCache;
    CPLEngineCloudCache * _cloudCache;
    CPLEngineChangePipe * _deletePushQueue;
    CPLEngineResourceDownloadQueue * _downloadQueue;
    CPLEngineLibrary * _engineLibrary;
    CPLEngineIDMapping * _idMapping;
    CPLPlatformObject * _platformObject;
    CPLEngineChangePipe * _pullQueue;
    CPLEngineChangePipe * _pushQueue;
    CPLEngineQuarantinedRecords * _quarantinedRecords;
    CPLEngineRemappedDeletes * _remappedDeletes;
    NSMutableArray * _resetEvents;
    NSURL * _resetEventsURL;
    CPLEngineResourceStorage * _resourceStorage;
    unsigned int  _state;
    NSHashTable * _storages;
    CPLEngineTransientRepository * _transientPullRepository;
    CPLEngineResourceUploadQueue * _uploadQueue;
}

@property (nonatomic, readonly) CPLEngineClientCache *clientCache;
@property (nonatomic, readonly) CPLEngineCloudCache *cloudCache;
@property (nonatomic, readonly) id corruptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CPLEngineChangePipe *deletePushQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineResourceDownloadQueue *downloadQueue;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLEngineIDMapping *idMapping;
@property (readonly) NSDate *libraryCreationDate;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) CPLEngineChangePipe *pullQueue;
@property (nonatomic, readonly) CPLEngineChangePipe *pushQueue;
@property (nonatomic, readonly) BOOL pushQueuesAreFull;
@property (nonatomic, readonly) CPLEngineQuarantinedRecords *quarantinedRecords;
@property (nonatomic, readonly) CPLEngineRemappedDeletes *remappedDeletes;
@property (nonatomic, readonly) CPLEngineResourceStorage *resourceStorage;
@property (nonatomic) unsigned int state;
@property (nonatomic, readonly) NSArray *storages;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLEngineTransientRepository *transientPullRepository;
@property (nonatomic, readonly) CPLEngineResourceUploadQueue *uploadQueue;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned int)arg1;

- (void).cxx_destruct;
- (BOOL)_canRead;
- (BOOL)_canWrite;
- (id)_currentTransaction;
- (void)_performTransaction:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (id)_resetEventsDescriptions;
- (BOOL)_resetLocalSyncStateWithError:(id*)arg1;
- (void)_scheduleBatchedTransactionsLocked;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (void)_storeResetEvent:(id)arg1 cause:(id)arg2;
- (void)assertCanRead;
- (void)assertCanWrite;
- (id)clientCache;
- (id)clientCacheIdentifier;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudCache;
- (id)componentName;
- (id)corruptionInfo;
- (id)createNewLibraryVersion;
- (void)dealloc;
- (id)deletePushQueue;
- (id)description;
- (id)downloadQueue;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)idMapping;
- (id)initWithEngineLibrary:(id)arg1;
- (BOOL)isClientInSyncWithClientCache;
- (id)libraryCreationDate;
- (id)libraryVersion;
- (id)libraryZoneName;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)performBatchedWriteTransactionWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)performReadTransactionWithBlock:(id /* block */)arg1;
- (id)performWriteTransactionWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)platformObject;
- (id)pullQueue;
- (id)pushQueue;
- (BOOL)pushQueuesAreFull;
- (id)quarantinedRecords;
- (void)registerStorage:(id)arg1;
- (id)remappedDeletes;
- (BOOL)resetCompleteSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (BOOL)resetLocalSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (BOOL)resetSyncAnchorWithCause:(id)arg1 error:(id*)arg2;
- (id)resourceStorage;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)storages;
- (BOOL)storeClientIsInSyncWithClientCacheWithError:(id*)arg1;
- (BOOL)storeLibraryVersion:(id)arg1 withError:(id*)arg2;
- (BOOL)storeLibraryZoneName:(id)arg1 error:(id*)arg2;
- (BOOL)storeSupportedFeatureVersionInLastSync:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)storeUserIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned int)supportedFeatureVersionInLastSync;
- (id)transientPullRepository;
- (id)uploadQueue;
- (id)userIdentifier;

@end
