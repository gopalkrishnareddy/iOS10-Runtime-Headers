/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

@interface UINavigationItemButtonView : UINavigationItemView  {
    int _style;
    BOOL _pressed;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    BOOL _customBackgroundImageChangedToOrFromNil;
    UIImageView *_imageView;
    unsigned int _abbreviatedTitleIndex;
}

@property(setter=_setAbbreviatedTitleIndex:) unsigned int _abbreviatedTitleIndex;
@property(setter=_setTintColor:,retain) UIColor * _tintColor;


- (id)title;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)image;
- (void)dealloc;
- (struct UIOffset { float x1; float x2; })_backButtonTitlePositionAdjustmentForBarMetrics:(int)arg1;
- (float)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_drawBackground;
- (id)_currentCustomBackgroundNeedsDarkening:(BOOL*)arg1;
- (float)_titleYAdjustmentCustomization;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })_currentTextShadowOffsetForBarStyle:(int)arg1;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (id)_tintColor;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (id)_defaultFont;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (BOOL)hasCustomBackgroundImage;
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
- (void)_setTintColor:(id)arg1;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (BOOL)pressed;
- (void)setPressed:(BOOL)arg1 initialPress:(BOOL)arg2;
- (BOOL)customBackgroundImageChangedToOrFromNil;
- (id)_backButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_appearanceStorage;
- (void)setPressed:(BOOL)arg1;
- (void)_setAbbreviatedTitleIndex:(unsigned int)arg1;
- (unsigned int)_abbreviatedTitleIndex;
- (id)_scriptingInfo;
- (void)tintColorDidChange;
- (Class)_appearanceGuideClass;
- (BOOL)_canDrawContent;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
