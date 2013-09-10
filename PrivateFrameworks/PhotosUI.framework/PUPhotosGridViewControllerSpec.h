/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotosPickerViewControllerSpec, PUAlbumPickerViewControllerSpec;

@interface PUPhotosGridViewControllerSpec : NSObject  {
    BOOL _canDisplayOptionsInPopover;
    BOOL _canDisplaySlideshowButton;
    BOOL _canDisplayEditActionsInNavigationBar;
    BOOL _usesStackPopTransition;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    PUAlbumPickerViewControllerSpec *_albumPickerViewControllerSpec;
    struct CGSize { 
        float width; 
        float height; 
    } _baseInterItemSpacing;
}

@property(readonly) struct CGSize { float x1; float x2; } contentSizeForViewInPopover;
@property(readonly) float globalFooterHeight;
@property(readonly) struct CGSize { float x1; float x2; } baseInterItemSpacing;
@property(readonly) int thumbnailImageFormat;
@property(readonly) int cellFillMode;
@property(readonly) BOOL canDisplayOptionsInPopover;
@property(readonly) BOOL canDisplaySlideshowButton;
@property(readonly) BOOL shouldPlaceDeleteInCenterToolbarPosition;
@property(readonly) BOOL canDisplayEditActionsInNavigationBar;
@property(readonly) BOOL usesStackPopTransition;
@property(readonly) BOOL displaysAvalancheStacks;
@property(readonly) PUPhotosPickerViewControllerSpec * photosPickerViewControllerSpec;
@property(readonly) PUAlbumPickerViewControllerSpec * albumPickerViewControllerSpec;


- (id)photosPickerViewControllerSpec;
- (struct CGSize { float x1; float x2; })baseInterItemSpacing;
- (void)protoSettingsDidChange;
- (id)photoBrowserSpec;
- (BOOL)usesStackPopTransition;
- (BOOL)displaysAvalancheStacks;
- (float)globalFooterHeight;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(float)arg2;
- (id)albumPickerViewControllerSpec;
- (BOOL)canDisplaySlideshowButton;
- (BOOL)canDisplayOptionsInPopover;
- (BOOL)canDisplayEditActionsInNavigationBar;
- (BOOL)shouldPlaceDeleteInCenterToolbarPosition;
- (int)cellFillMode;
- (int)thumbnailImageFormat;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (unsigned int)supportedInterfaceOrientations;

@end
