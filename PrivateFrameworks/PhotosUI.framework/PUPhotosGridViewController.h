/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PLAssetContainerList>, UINavigationButton, UIView, UICollectionViewLayout<PUGridLayoutProtocol>, NSMutableArray, PUActivityViewController, PUAlbumListTransitionContext, PUPhotoBrowserController, PUPreheatManager, UIBarButtonItem, UILongPressGestureRecognizer, PUAlbumPickerViewController, PUPopoverController, UICollectionViewLayout, PUSessionInfo, PUPhotoSelectionManager, PLDeletePhotosActionController, PUPhotoPinchGestureRecognizer, NSIndexPath, PUPhotosSinglePickerViewController, PUPhotosGridViewControllerSpec, _UIContentUnavailableView, UIActionSheet;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverControllerDelegate, PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLSlideshowSettingsViewControllerDelegate, PUCollectionViewReorderDelegate, PUActivityViewControllerDelegate, PUSessionInfoObserver, PLDeletePhotosActionControllerDelegate, UIGestureRecognizerDelegate, PLNavigableAssetContainerViewController, PLDismissableViewController, PUStackedAlbumControllerTransition> {
    NSMutableArray *_pendingCollectionListChangeNotifications;
    NSMutableArray *_pendingSingleCollectionChangeNotifications;
    NSIndexPath *_copyPasteIndexPath;
    BOOL _isCopyPasteIndexPathExact;
    BOOL _contentViewInSyncWithModel;
    BOOL _didScrollToInitialPosition;
    UIView *_alternateContentView;
    float _lastUpdateLayoutMetricsCollectionViewWidth;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UINavigationButton *_selectionButton;
    UIBarButtonItem *_shareToolbarButton;
    UIBarButtonItem *_addToolbarButton;
    UIBarButtonItem *_removeToolbarButton;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _onViewDidLayoutSubviewsBlock;

    BOOL _deletesDuplicatesWhenNecessary;
    BOOL _initiallyScrolledToBottom;
    BOOL _alwaysHideTabBar;
    BOOL __hasEditSessionReorderedItems;
    PUPhotosGridViewControllerSpec *_gridSpec;
    <PLAssetContainerList> *_photoCollections;
    PUSessionInfo *_sessionInfo;
    unsigned int _allowedActions;
    UICollectionViewLayout<PUGridLayoutProtocol> *_mainGridLayout;
    PUPhotoSelectionManager *_photoSelectionManager;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _onViewDidAppearCompletion;

    PUPhotoPinchGestureRecognizer *_photoOrStackPinchGestureRecognizer;
    _UIContentUnavailableView *__emptyPlaceholderView;
    unsigned int __previousCollectionsCount;
    UIActionSheet *__removeActionSheet;
    PLDeletePhotosActionController *__deleteActionController;
    PUAlbumPickerViewController *__albumPickerViewController;
    PUPhotosSinglePickerViewController *__sharingPhotosPickerViewController;
    PUActivityViewController *__activityViewController;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    UICollectionViewLayout *__albumListTransitionLayout;
    UIBarButtonItem *_customDoneButtonItem;
    PUPhotoBrowserController *__pushedPhotoBrowserController;
    PUPopoverController *__puPopoverController;
    PUPreheatManager *__defaultPreheatManager;
    struct CGPoint { 
        float x; 
        float y; 
    } __previousPreheatContentOffset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } __previousPreheatRect;
}

@property(retain) PUPhotosGridViewControllerSpec * gridSpec;
@property(retain) <PLAssetContainerList> * photoCollections;
@property(retain) PUSessionInfo * sessionInfo;
@property unsigned int allowedActions;
@property(retain) UICollectionViewLayout<PUGridLayoutProtocol> * mainGridLayout;
@property BOOL deletesDuplicatesWhenNecessary;
@property BOOL initiallyScrolledToBottom;
@property BOOL alwaysHideTabBar;
@property(setter=_setPhotoSelectionManager:,retain) PUPhotoSelectionManager * photoSelectionManager;
@property(copy) id onViewDidAppearCompletion;
@property(setter=_setPhotoOrStackPinchGestureRecognizer:,retain) PUPhotoPinchGestureRecognizer * photoOrStackPinchGestureRecognizer;
@property(setter=_setEmptyPlaceholderView:,retain) _UIContentUnavailableView * _emptyPlaceholderView;
@property(setter=_setPreviousCollectionsCount:) unsigned int _previousCollectionsCount;
@property(setter=_setHasEditSessionReorderedItems:) BOOL _hasEditSessionReorderedItems;
@property(setter=_setRemoveActionSheet:,retain) UIActionSheet * _removeActionSheet;
@property(setter=_setDeleteActionController:,retain) PLDeletePhotosActionController * _deleteActionController;
@property(setter=_setAlbumPickerViewController:,retain) PUAlbumPickerViewController * _albumPickerViewController;
@property(setter=_setSharingPhotosPickerViewController:,retain) PUPhotosSinglePickerViewController * _sharingPhotosPickerViewController;
@property(setter=_setActivityViewController:,retain) PUActivityViewController * _activityViewController;
@property(retain) PUAlbumListTransitionContext * albumListTransitionContext;
@property(setter=setAlbumListTransitionLayout:,retain) UICollectionViewLayout * _albumListTransitionLayout;
@property(retain) UIBarButtonItem * customDoneButtonItem;
@property(setter=_setPushedPhotoBrowserController:,retain) PUPhotoBrowserController * _pushedPhotoBrowserController;
@property(setter=_puSetPopoverController:,retain) PUPopoverController * _puPopoverController;
@property(setter=_setDefaultPreheatManager:,retain) PUPreheatManager * _defaultPreheatManager;
@property(setter=_setPreviousPreheatContentOffset:) struct CGPoint { float x1; float x2; } _previousPreheatContentOffset;
@property(setter=_setPreviousPreheatRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _previousPreheatRect;

+ (void)initialize;

- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (id)_pl_debugItems;
- (id)slideshowSettingsViewController:(id)arg1 slideshowSettingsForAirPlayRoute:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 alternateTransitionLocalizationsForAirPlayRoute:(id)arg2;
- (void)slideshowSettingsViewController:(id)arg1 didSelectAirPlayRoute:(id)arg2;
- (void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)arg1;
- (BOOL)deletesDuplicatesWhenNecessary;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (id)slideshowSettingsViewController:(id)arg1 transitionKeysForAirPlayRoute:(id)arg2;
- (id)assetAtIndexPath:(id)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_setDefaultPreheatManager:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setAlwaysHideTabBar:(BOOL)arg1;
- (void)setInitiallyScrolledToBottom:(BOOL)arg1;
- (void)setGridSpec:(id)arg1;
- (BOOL)pu_handleSecondTabTap;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomDoneButtonItem:(id)arg1;
- (void)sender:(id)arg1 shareAssetsInContainer:(id)arg2 withCompletion:(id)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (id)localizedTitleForAssets:(id)arg1;
- (id)alternateContentView;
- (void)setAlternateContentView:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)activityViewController:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id)arg4;
- (void)protoSettingsDidChange:(id)arg1;
- (id)savedSlideshowSettings;
- (void)_getFirstAsset:(id*)arg1 collection:(id*)arg2;
- (void)saveSlideshowSettings:(id)arg1;
- (id)_sharingPhotosPickerViewController;
- (id)_albumPickerViewController;
- (id)_deleteActionController;
- (id)_removeActionSheet;
- (id)_puPopoverController;
- (id)_activityViewController;
- (void)setDeletesDuplicatesWhenNecessary:(BOOL)arg1;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (id)_albumListTransitionLayout;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (id)albumListTransitionContext;
- (void)didSelectAddPlaceholderInSection:(int)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (unsigned int)_previousCollectionsCount;
- (void)_getInsertedCollectionIndexes:(id*)arg1 deletedIndexes:(id*)arg2 changedIndexes:(id*)arg3 forCollectionListChangeNotifications:(id)arg4;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_handleSelectionButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (id)_emptyPlaceholderView;
- (id)_selectionButton;
- (id)_pickerBannerView;
- (id)newToolbarItems;
- (void)protoSettingsPressed:(id)arg1;
- (BOOL)protoSettingsEnabled;
- (void)_slideshowButtonPressed:(id)arg1;
- (BOOL)_hasEditSessionReorderedItems;
- (id)_selectSessionDoneBarButtonItem;
- (id)customDoneButtonItem;
- (id)localizedSelectionTitle;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateToolbarContentsAnimated:(BOOL)arg1;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (id)_pushedPhotoBrowserController;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)_removeSelectedAssetsWithCompletion:(id)arg1;
- (void)_setRemoveActionSheet:(id)arg1;
- (void)_setDeleteActionController:(id)arg1;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)_setAlbumPickerViewController:(id)arg1;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)_setSharingPhotosPickerViewController:(id)arg1;
- (void)sender:(id)arg1 shareSelectedAssetsWithAggregateKey:(struct __CFString { }*)arg2 completion:(id)arg3;
- (void)_sender:(id)arg1 shareAssets:(id)arg2 aggregateKey:(struct __CFString { }*)arg3 completion:(id)arg4;
- (void)_puSetPopoverController:(id)arg1;
- (void)_setActivityViewController:(id)arg1;
- (BOOL)_areAllAssetsSelected;
- (BOOL)_hasAtLeastOneContainer;
- (BOOL)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (id)gridLayout;
- (id)_assetsAtIndexPaths:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previousPreheatRect;
- (struct CGPoint { float x1; float x2; })_previousPreheatContentOffset;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setPreviousPreheatContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (void)preheatAssets;
- (id)mainGridLayout;
- (BOOL)initiallyScrolledToBottom;
- (void)_updateCollectionViewMultipleSelection;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(BOOL)arg2;
- (void)_setHasEditSessionReorderedItems:(BOOL)arg1;
- (void)_updateGlobalFooterVisibility;
- (void)setOnViewDidAppearCompletion:(id)arg1;
- (id)onViewDidAppearCompletion;
- (void)_setPushedPhotoBrowserController:(id)arg1;
- (void)updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)resetPreheating;
- (void)_updateLayoutMetricsIfNeeded;
- (void)_setPhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)_defaultPreheatManager;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(int)arg1;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)arg1;
- (BOOL)alwaysHideTabBar;
- (void)_setPhotoSelectionManager:(id)arg1;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_addButtonPressed:(id)arg1;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)wantsAddContentInToolbar;
- (id)_barButtonSpacerWithWidth:(float)arg1;
- (id)_assetsAllowingDelete:(BOOL)arg1 orRemove:(BOOL)arg2 fromAssets:(id)arg3;
- (void)_removeButtonPressed:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (void)_shareButtonPressed:(id)arg1;
- (BOOL)isAnyAssetSelected;
- (BOOL)canDeleteContent;
- (BOOL)_canShareContent;
- (BOOL)_canAddContent;
- (BOOL)_canRemoveContent;
- (BOOL)_isAddPlaceholderAtIndexPath:(id)arg1;
- (BOOL)_canShareAsset:(id)arg1;
- (id)_assetsAllowingEditOperation:(int)arg1 fromAssets:(id)arg2;
- (BOOL)_canAllContainersPerformEditOperation:(int)arg1;
- (BOOL)_allowsActions:(unsigned int)arg1;
- (unsigned int)allowedActions;
- (id)photoSelectionManager;
- (void)_setPreviousCollectionsCount:(unsigned int)arg1;
- (unsigned int)_indexForPhotoCollection:(id)arg1;
- (int)cellFillMode;
- (void)updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updatePhotoSelectionManager;
- (void)removeProtoSettingsListener;
- (void)attachProtoSettingsListener;
- (void)setAllowedActions:(unsigned int)arg1;
- (void)setMainGridLayout:(id)arg1;
- (id)bestReferenceItemIndexPath;
- (BOOL)allowSlideshowButton;
- (void)configureGlobalFooterView:(id)arg1;
- (BOOL)wantsGlobalFooter;
- (BOOL)canBeginStackCollapseTransition;
- (void)updateLayoutMetrics;
- (id)newGridLayout;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (void)setContentViewInSyncWithModel:(BOOL)arg1;
- (BOOL)isContentViewInSyncWithModel;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (id)photoCollectionAtIndex:(unsigned int)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1 outClosestMatch:(id*)arg2;
- (id)photoOrStackPinchGestureRecognizer;
- (id)longPressGestureRecognizer;
- (id)sessionInfo;
- (id)preheatManager;
- (struct CGSize { float x1; float x2; })contentSizeForPreheating;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (BOOL)canBeginZoomIntoPhotoTransition;
- (BOOL)canDisplayEditButton;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(int)arg3 animated:(BOOL)arg4;
- (void)updateInterfaceForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (void)processPendingModelChangeNotifications;
- (BOOL)shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (void)setPhotoCollections:(id)arg1;
- (id)photoCollections;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (id)initWithSpec:(id)arg1;
- (id)gridSpec;
- (id)_cancelButtonItem;
- (void)assetContainerListDidChange:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)updateTitle;
- (BOOL)isEmpty;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { float x1; float x2; })arg2 contentSize:(struct CGSize { float x1; float x2; })arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (unsigned int)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end
