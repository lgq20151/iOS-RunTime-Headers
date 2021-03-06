/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient> {
    struct weak_ptr<__CFURLCache> { 
        struct __CFURLCache {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _cfWeakCacheCpp;
    NSXPCInterface * _netStoreInterface;
    NSXPCConnection * _networkStorageConnection;
    BOOL  _networkStorageConnectionInterrupted;
    NSString * _path;
    NSData * _sandboxExtensionToken;
    int  _storageSize;
    NSString * _taskManagerIdentifier;
}

@property BOOL networkStorageConnectionInterrupted;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_invalidateNSXPCConnection;
- (void)_reconnectWithStorageServer;
- (void)addCachedResponse:(id)arg1 key:(id)arg2;
- (void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2;
- (void)cachedResponseDictionaryForKey:(id)arg1 handler:(id /* block */)arg2;
- (void)copyAllPartitionNamesWithCompletionHandler:(id /* block */)arg1;
- (void)copyHostNamesForOptionalPartition:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)createStorageTaskManagerForPath:(id)arg1 maxSize:(int)arg2 extension:(id)arg3 withIdentifier:(id)arg4;
- (int)currentDiskUsage;
- (void)dealloc;
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;
- (void)deleteAllResponses;
- (void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)deleteResponsesSinceDate:(id)arg1;
- (BOOL)ensureNetworkStorageDaemonConnection;
- (id)getPath;
- (id)initWithCache:(struct shared_ptr<__CFURLCache> { struct __CFURLCache {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (BOOL)networkStorageConnectionInterrupted;
- (void)notifyCacheClientOfTimeRelativeResponses:(id)arg1;
- (void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3;
- (void)setMaxSize:(int)arg1;
- (void)setMinSizeForVMCachedResource:(int)arg1;
- (void)setNetworkStorageConnectionInterrupted:(BOOL)arg1;

@end
