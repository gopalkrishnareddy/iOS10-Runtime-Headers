/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSNumber, UIImage, NSString, NSURL, <NSObject><NSCopying>, NSMutableOrderedSet, NSDate, NSArray, NSDictionary, NSOrderedSet, NSCache, NSFetchRequest, NSObject<PLIndexMappingCache>, PLManagedAsset, PLManagedAlbum;

@interface PLInFlightAssetsAlbum : NSObject <PLAlbumProtocol, PLIndexMappingCache, PLDerivedAlbumOrigin> {
    NSFetchRequest *_fetchRequest;
    NSMutableOrderedSet *_albumOIDs;
    NSMutableOrderedSet *_inflightAssets;
    unsigned int _photosCount;
    unsigned int _videosCount;
    NSCache *__assetCache;
    PLManagedAlbum *_backingAlbum;
    BOOL _sessionLimited;
    id _weak_assets;
    NSObject<PLIndexMappingCache> *_derivedAlbums[5];
    BOOL __notificationsEnabled;
}

@property(readonly) PLManagedAlbum * backingAlbum;
@property BOOL sessionLimited;
@property NSMutableOrderedSet * _assets;
@property BOOL _notificationsEnabled;
@property(readonly) NSString * uuid;
@property(readonly) NSString * title;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int approximateCount;
@property(readonly) unsigned int assetsCount;
@property(readonly) unsigned int photosCount;
@property(readonly) unsigned int videosCount;
@property(readonly) BOOL isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) BOOL canShowComments;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) NSArray * localizedLocationNames;
@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property BOOL hasUnseenContentBoolValue;
@property(readonly) NSString * name;
@property(readonly) UIImage * posterImage;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(readonly) NSURL * groupURL;
@property(readonly) id sortingComparator;
@property(readonly) id sectioningComparator;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) <NSObject><NSCopying> * cachedIndexMapState;

+ (struct NSObject { Class x1; }*)inFlightAssetsAlbumWithBackingAlbum:(struct NSObject { Class x1; }*)arg1;

- (void)startNewSession;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (void)setUINotificationsEnabled:(BOOL)arg1;
- (BOOL)canContributeToCloudSharedAlbum;
- (id)assets;
- (void)set_notificationsEnabled:(BOOL)arg1;
- (BOOL)_notificationsEnabled;
- (void)removeObjectFromMergedAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMergedAssetsAtIndex:(unsigned int)arg2;
- (void)getMergedAssets:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectInMergedAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInMergedAssetsOfObject:(id)arg1;
- (unsigned int)countOfMergedAssets;
- (void)clearAssetCaches;
- (void)setSessionLimited:(BOOL)arg1;
- (id)managedObjectAtAlbumIndex:(unsigned int)arg1;
- (id)managedObjectsAtAlbumIndexes:(id)arg1;
- (id)managedObjectsForOIDs:(id)arg1;
- (id)managedObjectForOID:(id)arg1;
- (void)_resetAlbumOIDs;
- (id)_albumOIDs;
- (BOOL)sessionLimited;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)cachedIndexMapState;
- (id)currentStateForChange;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)_assets;
- (void)set_assets:(id)arg1;
- (id)backingAlbum;
- (BOOL)hasDerivedIndexMappers;
- (void)registerDerivedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)enumerateDerivedAlbums:(id)arg1;
- (void)unregisterAllDerivedAlbums;
- (unsigned int)countForAssetsOfKind:(short)arg1;
- (unsigned int)_fetchedCountForAssetsOfKind:(short)arg1;
- (unsigned int)batchSize;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (unsigned int)videosCount;
- (unsigned int)assetsCount;
- (unsigned int)approximateCount;
- (BOOL)canPerformEditOperation:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (int)pendingItemsType;
- (void)setPendingItemsCount:(int)arg1;
- (int)pendingItemsCount;
- (id)sectioningComparator;
- (id)sortingComparator;
- (id)groupURL;
- (void)setImportSessionID:(id)arg1;
- (id)importSessionID;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isWallpaperAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isLibrary;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (BOOL)hasUnseenContentBoolValue;
- (id)mutableAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
- (BOOL)isCloudSharedAlbum;
- (int)kindValue;
- (BOOL)isCameraAlbum;
- (void)removeInflightAssets:(id)arg1;
- (void)addInFlightAsset:(id)arg1;
- (id)localizedLocationNames;
- (id)posterImage;
- (unsigned int)photosCount;
- (id)fetchRequest;
- (id)title;
- (id)uuid;
- (BOOL)isEmpty;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)localizedTitle;
- (id)kind;

@end
