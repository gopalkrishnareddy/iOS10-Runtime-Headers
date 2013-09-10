/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIImage, UIView, NSArray;

@interface PLCameraButton : UIButton  {
    UIView *_rotationHolder;
    UIImageView *_iconView;
    BOOL _lockEnabled;
    BOOL _isLandscape;
    BOOL _dontDrawDisabled;
    UIImage *_cameraIcon;
    UIImage *_cameraIconLandscape;
    NSArray *_videoRecordingIcons;
    UIImage *_panoRecordingIcon;
    UIImage *_panoRecordingIconLandscape;
    int _buttonMode;
    BOOL _isCapturing;
    int _orientation;
    BOOL _watchingOrientationChanges;
}

+ (id)backgroundPanoOnPressedImageName;
+ (id)backgroundPanoOnImageName;
+ (id)backgroundPanoOffPressedImageName;
+ (id)backgroundPanoOffImageName;
+ (id)backgroundVideoPressedImageName;
+ (id)backgroundVideoImageName;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectExtension;
+ (id)videoOnIconName;
+ (id)videoOffIconName;
+ (id)photoIconLandscapeName;
+ (id)photoIconPortraitName;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundResizableEdgeInsets;
+ (id)defaultIconName;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;
+ (id)backgroundPressedImageName;
+ (id)backgroundImageName;

- (void)_startWatchingDeviceOrientationChanges;
- (void)setLockEnabled:(BOOL)arg1;
- (void)setButtonMode:(int)arg1;
- (void)setDontShowDisabledState:(BOOL)arg1;
- (void)_loadPanoResources;
- (void)_loadPanoLandscapeResources;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_loadVideoResources;
- (void)_loadStillResources;
- (void)_loadStillLandscapeResources;
- (void)setIsCapturing:(BOOL)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_setIcon:(id)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (int)orientation;
- (void)dealloc;
- (id)initWithDefaultSize;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
