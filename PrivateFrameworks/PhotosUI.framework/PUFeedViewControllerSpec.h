/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotosGridViewControllerSpec, PUFeedViewControllerSpec, PUPhotoBrowserControllerSpec, PUPhotosPickerViewControllerSpec;

@interface PUFeedViewControllerSpec : NSObject  {
    BOOL _shouldUseAspectThumbnails;
    BOOL _shouldHideBarsInLandscape;
    BOOL _shouldShowInvitationsInPopover;
    BOOL _shouldUseFullscreenLayout;
    int _largeNumberOfSubjectsForLikes;
    PUFeedViewControllerSpec *_popoverFeedViewControllerSpec;
    PUPhotoBrowserControllerSpec *_photoBrowserSpec;
    PUPhotosGridViewControllerSpec *_gridSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerSpec;
    int _promptType;
    struct CGSize { 
        float width; 
        float height; 
    } _minimumVideoTileSize;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
}

@property(readonly) struct CGSize { float x1; float x2; } minimumVideoTileSize;
@property(readonly) int largeNumberOfSubjectsForLikes;
@property(readonly) struct CGSize { float x1; float x2; } thumbnailSize;
@property(readonly) BOOL shouldUseAspectThumbnails;
@property(readonly) BOOL shouldHideBarsInLandscape;
@property(readonly) BOOL shouldShowInvitationsInPopover;
@property(readonly) PUFeedViewControllerSpec * popoverFeedViewControllerSpec;
@property(readonly) PUPhotoBrowserControllerSpec * photoBrowserSpec;
@property(readonly) PUPhotosGridViewControllerSpec * gridSpec;
@property(readonly) PUPhotosPickerViewControllerSpec * photosPickerSpec;
@property(readonly) int promptType;
@property(readonly) BOOL shouldUseFullscreenLayout;

+ (BOOL)shouldAvoidJPEGDecodeWorkDuringScrolling;

- (struct CGSize { float x1; float x2; })thumbnailSizeForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(int)arg2;
- (BOOL)shouldShowSeeAllInSectionFootersInCollectionViewType:(int)arg1;
- (void)getFastImageFormat:(out int*)arg1 qualityImageFormat:(out int*)arg2 forSize:(struct CGSize { float x1; float x2; })arg3 allowCrop:(BOOL)arg4;
- (BOOL)shouldUseFullscreenLayout;
- (int)promptType;
- (id)popoverFeedViewControllerSpec;
- (id)photosPickerSpec;
- (BOOL)shouldShowInvitationsInPopover;
- (BOOL)shouldHideBarsInLandscape;
- (float)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; }*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(BOOL)arg4 collectionViewType:(int)arg5;
- (void)getReferenceMaximumLength:(float*)arg1 minimumNumberOfTilesToOmit:(int*)arg2 forSectionType:(int)arg3 collectionViewType:(int)arg4;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(int)arg3;
- (BOOL)shouldShowDatesInSectionFootersInCollectionViewType:(int)arg1;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(int)arg5 collectionViewType:(int)arg6 animated:(BOOL)arg7;
- (BOOL)shouldShowLikeButtonForCollectionViewType:(int)arg1;
- (BOOL)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(int)arg1;
- (BOOL)shouldUseAspectThumbnails;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; }*)arg1;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;
- (int)largeNumberOfSubjectsForLikes;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;
- (id)emphasizedTextAttributesForCollectionViewType:(int)arg1;
- (id)defaultTextAttributesForCollectionViewType:(int)arg1;
- (BOOL)shouldShowCommentBadgesInCollectionViewType:(int)arg1;
- (struct CGSize { float x1; float x2; })minimumVideoTileSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsetsForSectionType:(int)arg1 collectionViewType:(int)arg2;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(int)arg2;
- (id)photoBrowserSpec;
- (id)gridSpec;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (void).cxx_destruct;

@end
