/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, UIView;

@interface CAMAvalancheIndicatorView : UIView  {
    BOOL _showsWhenStarted;
    UIView *__backgroundView;
    UILabel *__countLabel;
    int __numberOfPhotos;
}

@property BOOL showsWhenStarted;
@property(readonly) UIView * _backgroundView;
@property(readonly) UILabel * _countLabel;
@property(readonly) int _numberOfPhotos;


- (id)_countLabel;
- (void)setShowsWhenStarted:(BOOL)arg1;
- (void)incrementWithCaptureAnimation:(BOOL)arg1;
- (void)finishIncrementingWithCompletionHandler:(id)arg1;
- (BOOL)showsWhenStarted;
- (void)_performCaptureAnimation;
- (void)_commonCAMAvalancheIndicatorViewInitialization;
- (void)_updateCountLabelWithNumberOfPhotos;
- (int)_numberOfPhotos;
- (void)reset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_backgroundView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end
