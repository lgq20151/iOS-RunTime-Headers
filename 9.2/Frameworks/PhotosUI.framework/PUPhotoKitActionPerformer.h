/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitActionPerformer : PUAssetActionPerformer {
    PUPhotoKitDataSourceManager * _photoKitDataSourceManager;
}

@property (nonatomic, retain) PUPhotoKitDataSourceManager *photoKitDataSourceManager;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (id)_photosDataSourceFromDataSourceManager:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (void)instantlyInvalidateAssetsInDataSource;
- (id)photoKitDataSourceManager;
- (void)setPhotoKitDataSourceManager:(id)arg1;
- (void)stopExcludingAssetsFromDataSource;

@end