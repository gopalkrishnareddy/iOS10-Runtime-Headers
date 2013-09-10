/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImage, PLPhotoTilePlaceholderView, NSObject<OS_dispatch_source>, UIGestureRecognizer, PLExpandableImageView, PLPhotoTileBadgeView, PLTileContainerView, <PLPhotoTileViewControllerDelegate>, PLImageScrollView, PLCommentsViewController, PLVideoView, PLManagedAsset, UIImageView;

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLCommentsViewControllerDelegate> {
    UIImage *_image;
    UIImage *_pendingImage;
    UIImage *_unscaledImage;
    PLManagedAsset *_modelPhoto;
    PLImageScrollView *_scrollView;
    PLExpandableImageView *_imageView;
    PLVideoView *_videoView;
    UIImageView *_gradientView;
    PLPhotoTileBadgeView *_badgeView;
    UIImageView *_reviewCheckmarkImageView;
    PLPhotoTilePlaceholderView *_placeholderView;
    PLCommentsViewController *_commentsViewController;
    UIGestureRecognizer *_singleTapGestureRecognizer;
    UIGestureRecognizer *_doubleTapGestureRecognizer;
    <PLPhotoTileViewControllerDelegate> *_tileDelegate;
    int _imageOrientation;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _tileFrame;
    BOOL _zoomToFillInsteadOfToFit;
    BOOL _useLessThanMinZoomForZoomedOutTest;
    BOOL _allowZoomToFill;
    id _orientationDelegate;
    float _cropRectZoomScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropOverlayRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    float _doubleTapZoomScale;
    float _minZoomScale;
    float _zoomToFillScale;
    int _mode;
    int _lastDisplayedOrientation;
    BOOL _clientIsTemporarilyWallpaper;
    BOOL _userDidAdjustWallpaper;
    float _wallpaperPortraitZoomScale;
    float _wallpaperLandscapeZoomScale;
    float _zoomScaleBeforeZooming;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRectBeforeDragging;
    BOOL _force1XCroppedImage;
    BOOL _forceNativeScreenScale;
    BOOL _centerContentVertically;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didEndZoomingBlock;

    NSObject<OS_dispatch_source> *_dispatchTimer;
    double _dispatchStartTime;
    double _dispatchTimeElapsed;
    BOOL _hasNotedZoom;
    unsigned int _imageIsThumbnail : 1;
    unsigned int _isTVOut : 1;
    unsigned int _zooming : 1;
    unsigned int _autoZooming : 1;
    unsigned int _zoomGesturesEnabled : 1;
    unsigned int _userDidZoom : 1;
    unsigned int _ignoreZoomChange : 1;
    unsigned int _tileParentIsPageController : 1;
    unsigned int _lockedUnderCropOverlay : 1;
    unsigned int _viewDidAppear : 1;
    unsigned int _viewWillAppear : 1;
    unsigned int _didRequestFullSizeImage : 1;
    unsigned int _useZoomScaleForCropRect : 1;
    unsigned int _photoShouldBeHDRBadged : 1;
    unsigned int _HDRBadgeShouldBeHidden : 1;
    unsigned int _avalancheBadgeShouldBeHidden : 1;
    unsigned int _photoShouldBeAvalancheBadged : 1;
    unsigned int _badgeShouldBeVisible : 1;
    unsigned int _didSetHDRForModelPhoto : 1;
    unsigned int _commentsTableVisible : 1;
    PLTileContainerView *_containerView;
    BOOL _reviewing;
    BOOL _picked;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _overlayInsets;
}

@property(readonly) PLManagedAsset * photo;
@property(retain) UIImage * thumbnailImage;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } tileFrame;
@property(retain) UIImage * unscaledImage;
@property BOOL centerContentVertically;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } overlayInsets;
@property BOOL forceNativeScreenScale;
@property BOOL force1XCroppedImage;
@property(readonly) PLCommentsViewController * commentsViewController;
@property(readonly) BOOL commentsTableIsVisible;
@property BOOL reviewing;
@property BOOL picked;

+ (BOOL)shouldShowPlaceholderForAsset:(id)arg1 useOpaquePlaceholder:(BOOL*)arg2;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 modelPhoto:(id)arg2 mode:(int)arg3;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 image:(id)arg2 allowZoomToFill:(BOOL)arg3 mode:(int)arg4;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageRef:(struct CGImage { }*)arg2 imageOrientation:(int)arg3 allowZoomToFill:(BOOL)arg4 mode:(int)arg5;
+ (struct CGSize { float x1; float x2; })tvOutTileSize;
+ (struct CGSize { float x1; float x2; })tileSize;

- (BOOL)picked;
- (BOOL)reviewing;
- (void)setUnscaledImage:(id)arg1;
- (void)setCenterContentVertically:(BOOL)arg1;
- (BOOL)centerContentVertically;
- (void)setReviewing:(BOOL)arg1;
- (void)setLockedUnderCropOverlay:(BOOL)arg1;
- (void)setAllowsZoomToFill:(BOOL)arg1;
- (float)currentToDefaultZoomRatio;
- (id)dictionaryWithCroppedImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 minimalCropDimension:(float)arg2 withOptions:(int)arg3;
- (BOOL)didRequestFullSizeImage;
- (void)setHDRBadgesHidden:(BOOL)arg1;
- (void)setClientIsWallpaper:(BOOL)arg1;
- (BOOL)userDidAdjustWallpaper;
- (id)tileDelegate;
- (id)expandableImageView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tileFrame;
- (id)initForPageController;
- (void)commentsControllerWillBeginScrolling:(id)arg1;
- (void)commentsControllerDidDisplayUnreadComment:(id)arg1;
- (void)commentsControllerDidExitEditMode:(id)arg1;
- (void)commentsControllerWillEnterEditMode:(id)arg1;
- (void)commentsControllerInactiveAreaWasTapped:(id)arg1;
- (void)_setupReviewCheckmark;
- (void)setReviewing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_adjustZoomForEnteringMode:(BOOL)arg1;
- (BOOL)isZoomedOut;
- (void)_adjustScrollViewContentOffsetForInsets;
- (float)minZoomScale;
- (float)zoomToFillScale;
- (void)_setDidEndZoomingBlock:(id)arg1;
- (id)newImageWithCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 minimalCropDimension:(float)arg2 croppedImageData:(id*)arg3 fullScreenImageData:(id*)arg4 fullScreenImage:(struct CGImage {}**)arg5 imageCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg6 intersectCropWithFullRect:(BOOL)arg7;
- (BOOL)forceNativeScreenScale;
- (BOOL)force1XCroppedImage;
- (void)_resetZoomCommon;
- (float)_calculateZoomScale:(BOOL)arg1 inView:(id)arg2;
- (float)minRotatedScale;
- (void)_requestFullSizeImage;
- (void)_performDidEndZoomBlock;
- (void)initializeCommentsTable;
- (void)setBadgeVisible:(BOOL)arg1;
- (BOOL)tileIsOnScreen;
- (void)_updateAggdKeys;
- (void)_setDefaultZoomScale;
- (void)updateZoomScales;
- (void)_updateModelPhotoWithImage:(id)arg1;
- (void)_updateReviewCheckmark;
- (void)_setupBadgeView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })overlayInsets;
- (BOOL)_clientIsWallpaper;
- (void)_updatePlaceholderViewAnimated:(BOOL)arg1;
- (void)_installSubview:(id)arg1;
- (BOOL)photoShouldHaveAvalancheBadge;
- (void)_repositionBadgeView;
- (void)_showBadgeViewIfAppropriate;
- (void)_centerImageInScrollView;
- (void)_teardownDispatchTimer;
- (id)initWithPhoto:(id)arg1 image:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 isThumbnail:(BOOL)arg4 imageOrientation:(int)arg5 allowZoomToFill:(BOOL)arg6 mode:(int)arg7;
- (void)_configureViews;
- (void)_setImage:(id)arg1 isThumbnail:(BOOL)arg2 preserveFrame:(BOOL)arg3;
- (void)setTileFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setPhoto:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_updateContentInset;
- (void)_viewWillMoveToSuperView:(id)arg1;
- (id)_newOriginalImageForPickerFromCachedData;
- (id)unscaledImage;
- (void)noteParentViewControllerDidDisappear;
- (void)setOverlayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setCropOverlayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setForce1XCroppedImage:(BOOL)arg1;
- (void)setForceNativeScreenScale:(BOOL)arg1;
- (void)setBadgeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (id)newCGImageBackedUIImage;
- (BOOL)hasFullSizeImage;
- (void)zoomToScale:(float)arg1 completionBlock:(id)arg2;
- (float)defaultZoomScale;
- (float)zoomToFitScale;
- (float)currentToMinZoomRatio;
- (BOOL)isTVOut;
- (void)setFullSizeImage:(id)arg1;
- (void)installVideoOverlay:(id)arg1;
- (void)resetZoom;
- (void)ensureFullSizeImageLoaded;
- (void)updateAfterCollapse;
- (id)commentsViewController;
- (BOOL)commentsTableIsVisible;
- (void)setZoomingGesturesEnabled:(BOOL)arg1;
- (void)setCommentsTableVisibility:(BOOL)arg1 duration:(float)arg2;
- (id)commentsView;
- (void)forceZoomingGesturesEnabled;
- (void)refreshTileWithFullScreenImage:(id)arg1;
- (BOOL)photoShouldHaveHDRBadge;
- (void)showContentView;
- (void)hideContentView;
- (void)setAvalancheBadgesHidden:(BOOL)arg1;
- (void)setOrientationDelegate:(id)arg1;
- (void)setTileDelegate:(id)arg1;
- (void)setTVOut:(BOOL)arg1;
- (id)initWithPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)updateForVisibleOverlays:(BOOL)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setVideoView:(id)arg1;
- (id)videoView;
- (void)setThumbnailImage:(id)arg1;
- (id)photo;
- (id)image;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)thumbnailImage;
- (BOOL)allowsEditing;
- (id)scrollView;
- (id)imageView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setZoomScale:(float)arg1;
- (struct CGSize { float x1; float x2; })scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(struct CGSize { float x1; float x2; })arg3;
- (void)viewDidLayoutSubviews;
- (void)setGesturesEnabled:(BOOL)arg1;
- (BOOL)gesturesEnabled;
- (int)_imageOrientation;
- (int)imageOrientation;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;

@end
