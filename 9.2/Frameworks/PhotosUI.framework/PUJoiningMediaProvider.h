/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUJoiningMediaProvider : PUMediaProvider {
    NSMapTable * __mediaProviderByClass;
    NSMutableArray * __mediaProviderPredicateRecords;
}

@property (nonatomic, readonly) NSMapTable *_mediaProviderByClass;
@property (nonatomic, readonly) NSMutableArray *_mediaProviderPredicateRecords;

- (void).cxx_destruct;
- (id)_mediaProviderByClass;
- (id)_mediaProviderForAsset:(id)arg1 requestType:(int)arg2;
- (id)_mediaProviderPredicateRecords;
- (void)cancelImageRequest:(int)arg1;
- (id)init;
- (void)registerMediaProvider:(id)arg1 forAssetClass:(Class)arg2;
- (void)registerMediaProvider:(id)arg1 forAssetPassingTest:(id /* block */)arg2;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2 contentMode:(int)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end