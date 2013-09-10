/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScreen, NSString;

@interface UIKBScreenTraits : NSObject  {
    UIScreen *_screen;
    int _orientation;
    NSString *_orientationKey;
}

@property(readonly) UIScreen * screen;
@property(readonly) int idiom;
@property int orientation;
@property(retain) NSString * orientationKey;

+ (id)traitsWithScreen:(id)arg1 orientation:(int)arg2;

- (void)setOrientation:(int)arg1;
- (int)orientation;
- (id)screen;
- (void)dealloc;
- (id)orientationKey;
- (int)idiom;
- (id)initWithScreen:(id)arg1 orientation:(int)arg2;
- (void)setOrientationKey:(id)arg1;

@end
