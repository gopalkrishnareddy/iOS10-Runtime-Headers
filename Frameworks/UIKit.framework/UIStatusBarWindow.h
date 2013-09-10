/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarCorners, UIStatusBar;

@interface UIStatusBarWindow : UIWindow  {
    UIStatusBar *_statusBar;
    int _orientation;
    UIStatusBarCorners *_topCorners;
    float _topCornersOffset;
    UIStatusBarCorners *_bottomCorners;
    BOOL _cornersHidden;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarWindowFrame;
+ (BOOL)isIncludedInClassicJail;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)orientation;
- (void)dealloc;
- (void)setTopCornerStyle:(int)arg1 topCornersOffset:(float)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4;
- (void)setCornersHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)_rotate;
- (BOOL)_disableViewScaling;
- (BOOL)_isStatusBarWindow;
- (BOOL)_disableGroupOpacity;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)_shouldZoom;
- (void)setOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
