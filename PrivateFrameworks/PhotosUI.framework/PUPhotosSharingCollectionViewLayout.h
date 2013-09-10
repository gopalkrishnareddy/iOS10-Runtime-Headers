/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotosSharingCollectionViewLayoutDelegate>, NSIndexPath;

@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout  {
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _sharingBadgeOffset;
}

@property struct UIOffset { float x1; float x2; } sharingBadgeOffset;
@property(retain) NSIndexPath * zoomingCellIndexPath;
@property <PUPhotosSharingCollectionViewLayoutDelegate> * delegate;


- (void)setSharingBadgeOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setZoomingCellIndexPath:(id)arg1;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_floatingSelectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visibleItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atIndexPath:(id)arg3;
- (id)zoomingCellIndexPath;
- (struct UIOffset { float x1; float x2; })sharingBadgeOffset;
- (void).cxx_destruct;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;

@end
