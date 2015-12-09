/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin> {
    NSObject<PLIndexMappingCache> * _derivededAlbums;
    BOOL  didRegisteredWithUserInterfaceContext;
    BOOL  isRegisteredForChanges;
}

@property (nonatomic, readonly) unsigned int approximateCount;
@property (nonatomic, readonly, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned int assetsCount;
@property (nonatomic) unsigned int batchSize;
@property (nonatomic, readonly) BOOL canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) BOOL canShowAvalancheStacks;
@property (nonatomic, readonly) BOOL canShowComments;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisteredWithUserInterfaceContext;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSURL *groupURL;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, readonly) BOOL isCameraAlbum;
@property (nonatomic, readonly) BOOL isCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, readonly) BOOL isInTrash;
@property (nonatomic, readonly) BOOL isLibrary;
@property (nonatomic, readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isOwnPhotoStreamAlbum;
@property (nonatomic, readonly) BOOL isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isPanoramasAlbum;
@property (nonatomic, readonly) BOOL isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) BOOL isPhotoStreamAlbum;
@property (nonatomic) BOOL isPinned;
@property (nonatomic, readonly) BOOL isRecentlyAddedAlbum;
@property (nonatomic) BOOL isRegisteredForChanges;
@property (nonatomic, readonly) BOOL isRootFolder;
@property (nonatomic, readonly) BOOL isSmartAlbum;
@property (nonatomic, readonly) BOOL isStandInAlbum;
@property (nonatomic, readonly) BOOL isUserLibraryAlbum;
@property (nonatomic, readonly) BOOL isWallpaperAlbum;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, retain) NSNumber *kind;
@property (nonatomic) int kindValue;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *mutableAssets;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned int photosCount;
@property (nonatomic, readonly, retain) UIImage *posterImage;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) BOOL shouldDeleteWhenEmpty;
@property (nonatomic, retain) NSDictionary *slideshowSettings;
@property (nonatomic, readonly, copy) id /* block */ sortingComparator;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDate *trashedDate;
@property (nonatomic) short trashedState;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned int videosCount;

+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)_predicateForSupportedAlbumTypes;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_unpushedParentsOfAlbums:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned int)arg2;
+ (id)albumsWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)allFavoritesAlbumInLibrary:(id)arg1;
+ (id)allHorizontalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allPanoramasAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allSyncedAlbumsInManagedObjectContext:(id)arg1;
+ (id)allVerticalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allVideosAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)childKeyForOrdering;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned int)arg2;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewSyncedEventIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (BOOL)is1WaySyncKind:(int)arg1;
+ (BOOL)isFolder:(int)arg1;
+ (BOOL)isSmartAlbumForKind:(int)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
+ (id)localizedTitleForAlbumKind:(int)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (void)removeEmptyAlbumsForCloudResetInLibrary:(id)arg1;
+ (void)removeTrashedAlbumsAndFoldersForCloudResetInLibrary:(id)arg1;
+ (void)resetAlbumStateForCloudInLibrary:(id)arg1;
+ (id)rootFolderInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)trashBinAlbumInLibrary:(id)arg1;
+ (id)userLibraryAlbumInLibrary:(id)arg1;
+ (id)uuidFromGroupURL:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;

- (void)_applyTrashedState:(short)arg1 date:(BOOL)arg2 :(id)arg3;
- (id)_compactDebugDescription;
- (id)_itemIdentifier;
- (id)_kindDescription;
- (id)_prettyDescription;
- (void)applyPropertiesFromAlbumChange:(id)arg1;
- (void)applyTrashedState:(short)arg1;
- (unsigned int)approximateCount;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (unsigned int)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canContributeToCloudSharedAlbum;
- (BOOL)canMoveToTrash;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (id)childKeyForOrdering;
- (id)childManagedObject;
- (unsigned int)count;
- (unsigned int)countForAssetsOfKind:(short)arg1;
- (id)cplAlbumChangeInPhotoLibrary:(id)arg1;
- (void)dealloc;
- (void)delete;
- (id)description;
- (BOOL)didRegisteredWithUserInterfaceContext;
- (void)enumerateDerivedAlbums:(id /* block */)arg1;
- (void)enumerateDerivedIndexMappers:(id /* block */)arg1;
- (id)groupURL;
- (BOOL)hasDerivedIndexMappers;
- (BOOL)hasUnseenContentBoolValue;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isFamilyCloudSharedAlbum;
- (BOOL)isFolder;
- (BOOL)isInTrash;
- (BOOL)isLibrary;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnPhotoStreamAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isRecentlyAddedAlbum;
- (BOOL)isRegisteredForChanges;
- (BOOL)isRootFolder;
- (BOOL)isSmartAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isUserLibraryAlbum;
- (BOOL)isWallpaperAlbum;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)name;
- (id)photoLibrary;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)registerDerivedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)registerForChanges;
- (void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setIsRegisteredForChanges:(BOOL)arg1;
- (void)setKindValue:(int)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (id /* block */)sortingComparator;
- (void)unregisterAllDerivedAlbums;
- (void)unregisterForChanges;
- (void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2;
- (unsigned int)videosCount;
- (void)willTurnIntoFault;

@end