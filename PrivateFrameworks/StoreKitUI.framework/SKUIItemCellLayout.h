/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemOfferButton, SKUIItemOffer, SKUIItemState, UIView, UIImage, SKUICellImageView, SKUIItemOfferButtonAppearance;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {
    BOOL _iconImageHidden;
    BOOL _hidesItemOfferButton;
    BOOL _highlighted;
    SKUICellImageView *_iconImageView;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    SKUIItemState *_itemState;
    BOOL _restricted;
    BOOL _selected;
    UIView *_removeControlView;
}

@property(retain) UIImage * iconImage;
@property(getter=isIconImageHidden) BOOL iconImageHidden;
@property BOOL displaysItemOfferButton;
@property(getter=isRestricted) BOOL restricted;
@property(retain) SKUIItemOffer * itemOffer;
@property(retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;
@property(copy) SKUIItemState * itemState;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;
@property(readonly) UIView * iconImageView;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property(readonly) UIView * removeControlView;


- (id)itemOfferButton;
- (id)removeControlView;
- (BOOL)_useCloudButtonForItemState:(id)arg1;
- (void)setDisplaysItemOfferButton:(BOOL)arg1;
- (BOOL)displaysItemOfferButton;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)_showItemOfferConfirmationAction:(id)arg1;
- (void)_cancelItemOfferConfirmationAction:(id)arg1;
- (id)_parentCollectionViewCell;
- (void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2;
- (void)layoutForItemOfferChange;
- (void)_reloadItemOfferVisibility;
- (BOOL)isIconImageHidden;
- (void)_reloadItemOfferButton:(BOOL)arg1;
- (void)resetLayout;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)setIconImageHidden:(BOOL)arg1;
- (void)setRestricted:(BOOL)arg1;
- (id)itemOfferButtonAppearance;
- (void)_itemOfferConfirmAction:(id)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (id)itemState;
- (id)itemOffer;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1;
- (id)iconImageView;
- (void)setIconImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)isRestricted;
- (void)dealloc;
- (void).cxx_destruct;
- (id)iconImage;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;

@end
