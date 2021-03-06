/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageManagerRequest : NSObject {
    PLCPLDownloadContext * _CPLDownloadContext;
    BOOL  _CPLDownloadDegraded;
    NSObject<OS_dispatch_group> * _CPLDownloadWaitGroup;
    <_PLImageLoadingAsset> * _asset;
    NSString * _assetUUID;
    id /* block */  _cancellationHandler;
    BOOL  _cancelled;
    int  _cloudSharedAssetPlaceholderKind;
    NSString * _debugFilename;
    id  _domain;
    BOOL  _isCloudSharedAsset;
    BOOL  _isPartOfBurst;
    PHImageManagerRequest * _nextRequest;
    int  _originalImageOrientation;
    NSString * _pathForAdjustmentFile;
    int  _registrationRefCount;
    int  _requestID;
    PLPreheatItem * _transientPreheatlItem;
}

@property (retain) PLCPLDownloadContext *CPLDownloadContext;
@property BOOL CPLDownloadDegraded;
@property (retain) NSObject<OS_dispatch_group> *CPLDownloadWaitGroup;
@property (nonatomic, readonly) <_PLImageLoadingAsset> *asset;
@property (nonatomic, readonly) NSString *assetUUID;
@property (copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly) int cloudSharedAssetPlaceholderKind;
@property (nonatomic, readonly) NSString *debugFilename;
@property (nonatomic, readonly) id domain;
@property (nonatomic, readonly) BOOL isCloudSharedAsset;
@property (nonatomic, readonly) BOOL isPartOfBurst;
@property (nonatomic, readonly) BOOL isVideo;
@property (retain) PHImageManagerRequest *nextRequest;
@property (nonatomic, readonly) NSString *pathForAdjustmentFile;
@property (nonatomic, readonly) int registrationRefCount;
@property (nonatomic, readonly) int requestID;
@property (retain) PLPreheatItem *transientPreheatlItem;

- (void).cxx_destruct;
- (id)CPLDownloadContext;
- (BOOL)CPLDownloadDegraded;
- (id)CPLDownloadWaitGroup;
- (id)asset;
- (id)assetUUID;
- (bool)atomicDecrementRegistrationRefCountIfOne;
- (bool)atomicIncrementRegistrationRefCountIfZero;
- (id /* block */)cancellationHandler;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (int)cloudSharedAssetPlaceholderKind;
- (id)debugFilename;
- (int)decrementRegistrationRefCount;
- (id)domain;
- (int)incrementRegistrationRefCount;
- (id)init;
- (id)initRequestWithAsset:(id)arg1 domain:(id)arg2;
- (BOOL)isCancelled;
- (BOOL)isCloudSharedAsset;
- (BOOL)isPartOfBurst;
- (BOOL)isVideo;
- (id)nextRequest;
- (int)originalImageOrientation;
- (id)pathForAdjustmentFile;
- (int)registrationRefCount;
- (int)requestID;
- (void)setCPLDownloadContext:(id)arg1;
- (void)setCPLDownloadDegraded:(BOOL)arg1;
- (void)setCPLDownloadWaitGroup:(id)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setNextRequest:(id)arg1;
- (void)setTransientPreheatlItem:(id)arg1;
- (id)transientPreheatlItem;

@end
