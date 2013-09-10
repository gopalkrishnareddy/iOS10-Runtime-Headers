/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUHorizontalCollectionViewLayoutDelegate>, NSArray;

@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout  {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    NSArray *_cachedItemLayoutAttributes;
    NSArray *_cachedSectionFrames;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastRequestedRect;
    NSArray *_lastRequestedLayoutAttributesInRect;
    float _interitemSpacing;
    <PUHorizontalCollectionViewLayoutDelegate> *_delegate;
    struct CGSize { 
        float width; 
        float height; 
    } _itemSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _itemsContentInset;
}

@property struct CGSize { float x1; float x2; } itemSize;
@property float interitemSpacing;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } itemsContentInset;
@property <PUHorizontalCollectionViewLayoutDelegate> * delegate;

+ (Class)invalidationContextClass;

- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItemsContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })itemsContentInset;
- (float)interitemSpacing;
- (void)setInteritemSpacing:(float)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })itemSize;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;

@end
