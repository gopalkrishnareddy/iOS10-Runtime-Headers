/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAMHDRBadge, PLCropOverlay, NSObject<OS_dispatch_queue>, CAMHDRButton, PLCameraSettingsView, PLCameraController, PLCameraPreviewView, PLCameraVideoStillCaptureButton, PLPhotoLibrary, NSMutableSet, CAMAvalancheSession, CAMFlashButton, PLCameraPanoramaView, CAMSlalomIndicatorView, NSMutableArray, CAMFilterButton, PLCameraIrisAnimationView, CAMZoomSlider, PLCameraToggleButton, UIImageView, CAMShutterButton, PLCameraElapsedTimeView, UISwipeGestureRecognizer, CAMAvalancheIndicatorView, CAMElapsedTimeView, PLCameraGuideView, PLPhotoTileViewController, CAMModeDial, CAMFlipButton, PLVideoView, PLLowDiskSpaceAlertView, CALayer, PLCameraOverlayTextLabelView, UILongPressGestureRecognizer, UITapGestureRecognizer, NSDictionary, PLCameraProgressView, UIImage, NSObject<OS_dispatch_source>, CAMTopBar, PLCameraOptionsButton, UIAlertView, UIToolbar, CAMBottomBar, PLPreviewOverlayView, NSTimer, CAMHardwareLockIndicatorView, CAMCameraSpec, CAMBlurredSnapshotView, UIView, NSString, NSData, CAMImageWell;

@interface PLCameraView : UIView <CAMModeDialDataSource, CAMZoomSliderDelegate, CAMFlashButtonDelegate, CAMAvalancheSessionDelegate, PLCameraControllerDelegate, PLVideoViewDelegate, PLCameraPanoramaViewDelegate, UIGestureRecognizerDelegate, UIAccelerometerDelegate> {
    BOOL _isTallScreen;
    UIToolbar *_bottomButtonBar;
    int _captureOrientation;
    int _photoSavingOptions;
    BOOL _manipulatingCrop;
    BOOL _retakePhotoAfterPreview;
    NSDictionary *_videoMetadata;
    PLCameraController *_cameraController;
    PLCameraPreviewView *_previewView;
    PLPhotoLibrary *_library;
    UIView *_previewContainerView;
    PLPreviewOverlayView *_overlayView;
    CALayer *_panoramaPreviewLayer;
    PLCameraPanoramaView *_panoramaView;
    float _panoramaProgress;
    struct CGSize { 
        float width; 
        float height; 
    } _previewContentSize;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _previewTransform;
    BOOL _previewOriginShouldBeZero;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _unzoomedPreviewFrame;
    int _previewViewAspectMode;
    int _flashModeBeforeCapture;
    int _flashModeBeforeHDR;
    int _photoFlashMode;
    int _videoFlashMode;
    PLCameraToggleButton *_toggleCameraButton;
    UIView *_previewViewSnapshotView;
    UIView *_flipView;
    PLCameraElapsedTimeView *_timeView;
    PLCameraVideoStillCaptureButton *_stillCaptureButton;
    float _initialPinchZoomValue;
    UIView *_textOverlayView;
    BOOL _hdrIsOn;
    PLCameraProgressView *_hdrProgressView;
    PLCameraOverlayTextLabelView *_hdrTextLabel;
    PLCameraSettingsView *_settingsView;
    PLCameraOptionsButton *_optionsButton;
    BOOL _optionsAreVisible;
    BOOL _previewPaused;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    PLCameraOverlayTextLabelView *_aeafLockView;
    NSTimer *_aeafLockTimer;
    BOOL _focusIsLocked;
    BOOL _focusTapIsDown;
    BOOL _shouldEndFocusOnTapUp;
    BOOL _showFaceTracking;
    unsigned int _currentFacesCount;
    NSTimer *_faceFadeOutTimer;
    PLCameraGuideView *_guideView;
    PLCameraIrisAnimationView *_irisView;
    UIImageView *_staticIrisView;
    BOOL _delayStaticClosedIrisLoading;
    UIImageView *_bottomShadowView;
    UIImage *_temporaryThumbnailImage;
    BOOL _irisIsClosed;
    BOOL _irisWillOpen;
    NSMutableArray *_openIrisDidFinishSelectors;
    NSMutableArray *_closeIrisDidFinishSelectors;
    int _modeToOpenIris;
    PLCropOverlay *_cropOverlay;
    PLPhotoTileViewController *_imageTile;
    PLVideoView *_videoView;
    NSDictionary *_imagePickerOptions;
    UIAlertView *_torchDisabledAlert;
    PLLowDiskSpaceAlertView *_diskSpaceAlert;
    BOOL _gridIsOn;
    BOOL _internalOnlyDisableIrisViews;
    id _delegate;
    int _enabledGestures;
    unsigned int _showsCropOverlay : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _cropOverlayUsesTelephonyUI : 1;
    unsigned int _showsCropRegion : 1;
    unsigned int _needToShowDiskSpaceWarning : 1;
    unsigned int _controlsAreVisible : 1;
    unsigned int _shouldShowFocus : 1;
    unsigned int _skipCaptureReview : 1;
    unsigned int _allowsMultipleModes : 1;
    unsigned int _capturePhotoWhenFocusFinished : 1;
    unsigned int _isMidSuspension : 1;
    unsigned int _capturingPhoto : 1;
    unsigned int _fastIrisAnimation : 1;
    unsigned int _currentCaptureIsExtendedDuration : 1;
    unsigned int _flashModeDidChangeDuringCapture : 1;
    unsigned int _imageWriterQueueIsFull : 1;
    unsigned int _isCameraApp : 1;
    unsigned int _staticIrisIsClosing : 1;
    unsigned int _irisIsOpening : 1;
    unsigned int _wasInterrupted : 1;
    unsigned int _suppressIrisAnimations : 1;
    unsigned int _shouldAnimateIrisClosed : 1;
    unsigned int _enableCameraAfterDidMoveToWindow : 1;
    unsigned int _previewStartedBeforeViewMovedToWindow : 1;
    unsigned int _didEverMoveToWindow : 1;
    NSString *_cropTitle;
    NSString *_cropButtonTitle;
    NSData *_lastCapturedImageData;
    unsigned int _imagePickerWantsImageData : 1;
    NSDictionary *_lastCapturedMetadata;
    int _rotationStyle;
    int _windowEdgeClippingMask;
    BOOL _isDisplayedInPopover;
    unsigned int _keepAliveCounter;
    NSTimer *_keepAliveTimer;
    NSTimer *_keepAliveFailsafeTimer;
    BOOL _enableAutorotationAfterRecording;
    BOOL _maskSetBeforeModeChange;
    BOOL _squareMaskActive;
    BOOL _gridVisible;
    BOOL _userInteractionLoggingEnabled;
    BOOL __capturingFromVolumeButtons;
    BOOL __receivedInitialPreviewDidStartNotification;
    BOOL __cameraEnabled;
    BOOL __capturing;
    BOOL __waitingForStillImageCaptureToComplete;
    BOOL __hasMaximumNumberOfInflightImageRequests;
    BOOL __preparingToRecord;
    BOOL __postprocessing;
    BOOL __processingHDR;
    BOOL __changingModes;
    BOOL __flipping;
    BOOL __performingFilterTransition;
    BOOL __hidingHDRBadgeForFilterUI;
    BOOL __viewingCameraRoll;
    BOOL __reviewingImagePickerCapture;
    BOOL __blurredFromSuspension;
    BOOL __switchingBetweenCameras;
    BOOL __processingModeChange;
    BOOL __capturingUsingTimer;
    BOOL __avalancheIndicatorVisible;
    BOOL __ignoringSubsequentTimedCaptureRequests;
    BOOL __needToStartAvalancheSound;
    BOOL __hideFocusForFilterSelection;
    BOOL __hideGridViewForFilterSelection;
    BOOL __numFilterSelectionsBeforeCapture;
    CAMCameraSpec *_spec;
    int __numberOfInflightStillImageRequests;
    UIView *__previewMaskingView;
    UIView *__previewCounterRotatingView;
    CAMTopBar *__topBar;
    CAMFlashButton *__flashButton;
    CAMHDRButton *__HDRButton;
    CAMHDRBadge *__HDRBadge;
    CAMElapsedTimeView *__elapsedTimeView;
    CAMFlipButton *__flipButton;
    CAMBottomBar *__bottomBar;
    CAMModeDial *__modeDial;
    CAMImageWell *__imageWell;
    CAMShutterButton *__stillDuringVideoButton;
    CAMShutterButton *__shutterButton;
    CAMFilterButton *__filterButton;
    CAMZoomSlider *__zoomSlider;
    CAMAvalancheIndicatorView *__avalancheIndicator;
    CAMSlalomIndicatorView *__slalomIndicator;
    CAMHardwareLockIndicatorView *__hardwareLockIndicator;
    CAMBlurredSnapshotView *__suspensionSnapshotView;
    CAMBlurredSnapshotView *__captureSnapshotView;
    CAMBlurredSnapshotView *__currentDeviceFrontSnapshotView;
    CAMBlurredSnapshotView *__currentDeviceBackSnapshotView;
    CAMBlurredSnapshotView *__targetDeviceSnapshotView;
    UISwipeGestureRecognizer *__nextModeGestureRecognizer;
    UISwipeGestureRecognizer *__previousModeGestureRecognizer;
    CAMBlurredSnapshotView *__modeSwitchingSnapshotView;
    int _selectedModeIndex;
    int __pendingModeIndex;
    int __deferredModeIndex;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSObject<OS_dispatch_queue> *__timedCaptureQueue;
    CAMAvalancheSession *__avalancheSession;
    NSMutableSet *__filterNamesSelectedBeforeCapture;
    double __timeIntervalOfTouchDown;
}

@property(readonly) CAMCameraSpec * spec;
@property(getter=isTallScreen) BOOL tallScreen;
@property(retain) UIToolbar * bottomButtonBar;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unzoomedPreviewFrame;
@property int cameraDevice;
@property int cameraMode;
@property int flashMode;
@property int previewViewAspectMode;
@property int rotationStyle;
@property(getter=isDisplayedInPopover) BOOL displayedInPopover;
@property(readonly) int windowEdgeClippingMask;
@property int photoFlashMode;
@property int photoFlashModeBeforeHDR;
@property int videoFlashMode;
@property BOOL HDRIsOn;
@property(getter=isGridVisible) BOOL gridVisible;
@property(readonly) BOOL isCameraReady;
@property(getter=isUserInteractionLoggingEnabled) BOOL userInteractionLoggingEnabled;
@property(readonly) double _timeIntervalOfTouchDown;
@property(readonly) int _numberOfInflightStillImageRequests;
@property(readonly) BOOL _capturingFromVolumeButtons;
@property(readonly) BOOL _receivedInitialPreviewDidStartNotification;
@property(readonly) UIView * _previewMaskingView;
@property(readonly) UIView * _previewCounterRotatingView;
@property(readonly) CAMCameraSpec * _spec;
@property(readonly) CAMTopBar * _topBar;
@property(readonly) CAMFlashButton * _flashButton;
@property(readonly) CAMHDRButton * _HDRButton;
@property(readonly) CAMHDRBadge * _HDRBadge;
@property(readonly) CAMElapsedTimeView * _elapsedTimeView;
@property(readonly) CAMFlipButton * _flipButton;
@property(readonly) CAMBottomBar * _bottomBar;
@property(readonly) CAMModeDial * _modeDial;
@property(readonly) CAMImageWell * _imageWell;
@property(readonly) CAMShutterButton * _stillDuringVideoButton;
@property(readonly) CAMShutterButton * _shutterButton;
@property(readonly) CAMFilterButton * _filterButton;
@property(readonly) CAMZoomSlider * _zoomSlider;
@property(readonly) CAMAvalancheIndicatorView * _avalancheIndicator;
@property(readonly) CAMSlalomIndicatorView * _slalomIndicator;
@property(readonly) CAMHardwareLockIndicatorView * _hardwareLockIndicator;
@property(getter=_isCameraEnabled,setter=_setCameraEnabled:) BOOL _cameraEnabled;
@property(getter=_isCapturing,setter=_setCapturing:) BOOL _capturing;
@property(getter=_isWaitingForStillImageCaptureToComplete,setter=_setWaitingForStillImageCaptureToComplete:) BOOL _waitingForStillImageCaptureToComplete;
@property(getter=_hasMaximumNumberOfInflightImageRequests,setter=_setHasMaximumNumberOfInflightImageRequests:) BOOL _hasMaximumNumberOfInflightImageRequests;
@property(getter=_isPreparingToRecord,setter=_setPreparingToRecord:) BOOL _preparingToRecord;
@property(getter=_isPostprocessing,setter=_setPostprocessing:) BOOL _postprocessing;
@property(getter=_isProcessingHDR,setter=_setProcessingHDR:) BOOL _processingHDR;
@property(getter=_isChangingModes,setter=_setChangingModes:) BOOL _changingModes;
@property(getter=_isFlipping,setter=_setFlipping:) BOOL _flipping;
@property(getter=_isPerformingFilterTransition,setter=_setPerformingFilterTransition:) BOOL _performingFilterTransition;
@property(getter=_isHidingHDRBadgeForFilterUI,setter=_setHidingHDRBadgeForFilterUI:) BOOL _hidingHDRBadgeForFilterUI;
@property(getter=_isViewingCameraRoll,setter=_setViewingCameraRoll:) BOOL _viewingCameraRoll;
@property(getter=_isReviewingImagePickerCapture,setter=_setReviewingImagePickerCapture:) BOOL _reviewingImagePickerCapture;
@property(setter=_setBlurredFromSuspension:) BOOL _blurredFromSuspension;
@property(readonly) CAMBlurredSnapshotView * _suspensionSnapshotView;
@property(readonly) CAMBlurredSnapshotView * _captureSnapshotView;
@property(readonly) BOOL _switchingBetweenCameras;
@property(readonly) CAMBlurredSnapshotView * _currentDeviceFrontSnapshotView;
@property(readonly) CAMBlurredSnapshotView * _currentDeviceBackSnapshotView;
@property(readonly) CAMBlurredSnapshotView * _targetDeviceSnapshotView;
@property(getter=_isSwipeToModeSwitchEnabled,setter=_setSwipeToModeSwitchEnabled:) BOOL _swipeToModeSwitchEnabled;
@property(readonly) UISwipeGestureRecognizer * _nextModeGestureRecognizer;
@property(readonly) UISwipeGestureRecognizer * _previousModeGestureRecognizer;
@property(readonly) CAMBlurredSnapshotView * _modeSwitchingSnapshotView;
@property int selectedModeIndex;
@property(setter=_setPendingModeIndex:) int _pendingModeIndex;
@property(setter=_setDeferredModeIndex:) int _deferredModeIndex;
@property(getter=_isProcessingModeChange,readonly) BOOL _processingModeChange;
@property(readonly) BOOL _capturingUsingTimer;
@property(readonly) NSObject<OS_dispatch_source> * _captureTimer;
@property(readonly) NSObject<OS_dispatch_queue> * _timedCaptureQueue;
@property(getter=_isAvalancheIndicatorVisible,setter=_setAvalancheIndicatorVisible:) BOOL _avalancheIndicatorVisible;
@property(readonly) BOOL _ignoringSubsequentTimedCaptureRequests;
@property(readonly) CAMAvalancheSession * _avalancheSession;
@property(readonly) BOOL _needToStartAvalancheSound;
@property(setter=_setHideFocusForFilterSelection:) BOOL _hideFocusForFilterSelection;
@property(setter=_setHideGridViewForFilterSelection:) BOOL _hideGridViewForFilterSelection;
@property(setter=_setNumFilterSelectionsBeforeCapture:) BOOL _numFilterSelectionsBeforeCapture;
@property(readonly) NSMutableSet * _filterNamesSelectedBeforeCapture;

+ (BOOL)_shouldExtractDiagnostics;

- (BOOL)_needToStartAvalancheSound;
- (BOOL)_ignoringSubsequentTimedCaptureRequests;
- (BOOL)_isAvalancheIndicatorVisible;
- (id)_timedCaptureQueue;
- (id)_captureTimer;
- (BOOL)_capturingUsingTimer;
- (void)setSelectedModeIndex:(int)arg1;
- (id)_modeSwitchingSnapshotView;
- (id)_previousModeGestureRecognizer;
- (id)_nextModeGestureRecognizer;
- (id)_targetDeviceSnapshotView;
- (id)_currentDeviceBackSnapshotView;
- (id)_currentDeviceFrontSnapshotView;
- (BOOL)_switchingBetweenCameras;
- (id)_captureSnapshotView;
- (id)_suspensionSnapshotView;
- (BOOL)_isHidingHDRBadgeForFilterUI;
- (id)_hardwareLockIndicator;
- (id)_slalomIndicator;
- (id)_previewCounterRotatingView;
- (id)_previewMaskingView;
- (BOOL)_receivedInitialPreviewDidStartNotification;
- (BOOL)_capturingFromVolumeButtons;
- (int)_numberOfInflightStillImageRequests;
- (double)_timeIntervalOfTouchDown;
- (BOOL)isUserInteractionLoggingEnabled;
- (BOOL)isGridVisible;
- (int)videoFlashMode;
- (void)setBottomButtonBar:(id)arg1;
- (id)bottomButtonBar;
- (BOOL)HDRIsOn;
- (BOOL)isDisplayedInPopover;
- (int)rotationStyle;
- (float)_statusBarOffset;
- (BOOL)isCameraReady;
- (BOOL)_isSwipeToModeSwitchEnabled;
- (void)_ensureValidAvalancheSession;
- (void)setUserInteractionLoggingEnabled:(BOOL)arg1;
- (void)_flipToBlurredPreviewWithCompletionBlock:(id)arg1;
- (void)_snapshotAndAbsorbPreviewWithCompletionBlock:(id)arg1;
- (BOOL)_shouldAbsorbPreviewImage;
- (void)updateImageWellImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3;
- (void)_setHideGridViewForFilterSelection:(BOOL)arg1;
- (void)setGridVisible:(BOOL)arg1;
- (void)HDRSettingDidChange:(BOOL)arg1;
- (void)_setHDRProgressHUDVisible:(BOOL)arg1;
- (void)setVideoFlashMode:(int)arg1;
- (void)setPhotoFlashMode:(int)arg1;
- (int)photoFlashMode;
- (BOOL)_cameraButtonOrientationIsLandscape;
- (void)_createHDRBadgeIfNecessary;
- (void)animateBlurForSuspension;
- (BOOL)_pointIsOnPanoControls:(struct CGPoint { float x1; float x2; })arg1;
- (int)previewViewAspectMode;
- (void)cropOverlayWasToggled:(id)arg1;
- (void)suspendCamera;
- (void)resumeCamera;
- (BOOL)_didEverMoveToWindow;
- (void)hideZoomSlider;
- (void)_startZoomSliderTimer;
- (BOOL)_gridLinesShouldBeHidden;
- (BOOL)_toggleButtonShouldBeHidden;
- (BOOL)_optionsButtonShouldBeHidden;
- (BOOL)_flashButtonShouldBeHidden;
- (void)didPlayVideoRecordingSound;
- (void)timeLapseTimerFired;
- (id)_previewImageWell;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_floatingShutterButtonFrame;
- (int)photoSavingOptions;
- (void)_updatePreviewWellImage:(id)arg1;
- (BOOL)hasInFlightCaptures;
- (void)clearImageWellForNewSessionAlbum;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_containerRectForPreview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_overlayRectForPreview;
- (void)panoramaView:(id)arg1 didChangeDirection:(int)arg2;
- (void)zoomSliderDidEndAutozooming:(id)arg1;
- (void)zoomSliderDidBeginAutozooming:(id)arg1;
- (id)modeDial:(id)arg1 titleForItemAtIndex:(unsigned int)arg2;
- (int)numberOfItemsInModeDial:(id)arg1;
- (void)_updateFilterAggregateDictionaries;
- (struct __CFString { }*)_aggregateDictionaryKeyForCameraMode:(int)arg1 device:(int)arg2;
- (id)_flashButton;
- (void)_updateForStartTransitionToShowFilterSelection:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_rotateCameraControlsAndInterface;
- (void)_updateHardwareLockIndicatorOrientationWithDeviceOrientation:(int)arg1;
- (int)_glyphOrientationForCameraOrientation:(int)arg1;
- (void)_updateTopBarOrientationWithDeviceOrientation:(int)arg1;
- (void)_updateTopBarStyleForDeviceOrientation:(int)arg1;
- (int)_deferredModeIndex;
- (int)_pendingModeIndex;
- (int)selectedModeIndex;
- (void)_setDeferredModeIndex:(int)arg1;
- (BOOL)_processPendingModeChange;
- (void)_applyModeSwitchingBlurAnimated:(BOOL)arg1 targetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withCompletionBlock:(id)arg3;
- (BOOL)_isProcessingModeChange;
- (void)_switchFromCameraModeAtIndex:(int)arg1 toCameraModeAtIndex:(int)arg2;
- (BOOL)_isSwipeToModeSwitchAllowed;
- (void)_setAvalancheIndicatorVisible:(BOOL)arg1;
- (int)_currentFlashMode;
- (void)_setupCaptureTimer;
- (void)_captureTimerFired;
- (double)_avalancheInterval;
- (void)_teardownCaptureTimer;
- (void)_finalizeExistingAvalancheSession;
- (void)_finalizeAndBeginNewAvalancheSession;
- (id)_debugEnabledDescriptionForControl:(id)arg1 withReason:(id)arg2;
- (BOOL)_shouldEnableZoomSlider;
- (BOOL)_shouldEnableModeDial;
- (BOOL)_shouldEnableFilterButton;
- (BOOL)_shouldEnableImageWell;
- (BOOL)_shouldEnableFlipButton;
- (BOOL)_shouldEnableHDRButton;
- (BOOL)_shouldEnableFlashButton;
- (void)_updateEnabledControlsWithReason:(id)arg1 forceLog:(BOOL)arg2;
- (BOOL)_isPostprocessing;
- (BOOL)_isWaitingForStillImageCaptureToComplete;
- (BOOL)_isProcessingHDR;
- (BOOL)_isChangingModes;
- (BOOL)_isFlipping;
- (BOOL)_isPreparingToRecord;
- (BOOL)_isViewingCameraRoll;
- (BOOL)_isCameraEnabled;
- (void)_setHideFocusForFilterSelection:(BOOL)arg1;
- (void)_setHidingHDRBadgeForFilterUI:(BOOL)arg1;
- (BOOL)_shouldHideSlalomIndicatorForMode:(int)arg1;
- (BOOL)_shouldHidePanoramaViewForMode:(int)arg1;
- (BOOL)_shouldHideFilterButtonForMode:(int)arg1;
- (BOOL)_shouldHideShutterButtonForMode:(int)arg1;
- (BOOL)_shouldHideStillDuringVideoButtonForMode:(int)arg1;
- (BOOL)_shouldHideImageWellForMode:(int)arg1;
- (BOOL)_shouldHideModeDialForMode:(int)arg1;
- (BOOL)_shouldHideFlipButtonForMode:(int)arg1;
- (BOOL)_shouldHideElapsedTimeViewForMode:(int)arg1;
- (BOOL)_shouldHideHDRButtonForMode:(int)arg1;
- (BOOL)_shouldHideFlashButtonForMode:(int)arg1;
- (BOOL)_shouldHideTopBarForMode:(int)arg1;
- (int)_bottomBarBackgroundStyleForMode:(int)arg1;
- (int)_topBarBackgroundStyleForMode:(int)arg1;
- (BOOL)_hideGridViewForFilterSelection;
- (BOOL)_blurredFromSuspension;
- (void)_showControlsForReturningFromSuspensionAnimated:(BOOL)arg1;
- (void)_hideControlsForSuspensionAnimated:(BOOL)arg1;
- (void)_setBlurredFromSuspension:(BOOL)arg1;
- (id)_newSnapshotView;
- (void)_performCaptureBlink;
- (id)_snapshotOfPreviewView;
- (BOOL)_shouldHideGridView;
- (void)_setHideGridViewForFilterSelection:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateGridVisibilityAnimated:(BOOL)arg1;
- (void)_layoutHardwareLockIndicatorForOrientation:(int)arg1;
- (void)_createHardwareLockIndicatorIfNecessary;
- (BOOL)_shouldHideHDRBadgeForMode:(int)arg1;
- (int)photoFlashModeBeforeHDR;
- (void)setPhotoFlashModeBeforeHDR:(int)arg1;
- (void)toggleHDR:(BOOL)arg1;
- (void)_updateHDR:(BOOL)arg1;
- (void)_updateFlashMode:(int)arg1;
- (void)_updateIsNonDefaultFlashMode:(int)arg1;
- (void)setHDRIsOn:(BOOL)arg1;
- (void)_snapshotAndHideTopBarAnimated:(BOOL)arg1;
- (void)_destroyAllControls;
- (void)_createSlalomIndicatorIfNecessary;
- (void)_createElapsedTimeViewIfNecessary;
- (void)_createStillDuringVideoButtonIfNecessary;
- (void)_createAvalancheIndicatorIfNecessary;
- (void)_createFilterButtonIfNecessary;
- (void)_createHDRButtonIfNecessary;
- (void)_createPanoControlsIfNecessary;
- (void)_createVideoControlsIfNecessary;
- (void)_createSlalomControlsIfNecessary;
- (void)_createStillImageControlsIfNecessary;
- (void)_createFlipButtonIfNecessary;
- (void)_createFlashButtonIfNecessary;
- (void)_createShutterButtonIfNecessary;
- (void)_createImageWellIfNecessary;
- (void)_createModeDialIfNecessary;
- (void)_createBottomBarIfNecessary;
- (void)_createTopBarIfNecessary;
- (BOOL)_shouldHideHardwareLockIndicatorForMode:(int)arg1;
- (void)toggleHDRMode:(id)arg1;
- (void)_zoomSliderDidEndDragging:(id)arg1;
- (void)_zoomSliderValueDidChange:(id)arg1 forEvent:(id)arg2;
- (void)_filterButtonTapped:(id)arg1;
- (void)cameraShutterCancelled:(id)arg1;
- (void)_stillDuringVideoPressed:(id)arg1;
- (void)_imageWellTapped:(id)arg1;
- (void)modeDialWasTapped:(id)arg1;
- (void)aeafLockTimerDidFire;
- (void)_clearAEAFLockTimer;
- (void)togglePreviewViewAspectMode;
- (BOOL)_pointIsWithinOverlayView:(struct CGPoint { float x1; float x2; })arg1;
- (void)_finishCommonTapGesture;
- (void)focusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_previewView:(id)arg1 shouldFocusAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)_handleFocusTap:(id)arg1;
- (BOOL)_handleEffectsGridTap:(id)arg1;
- (BOOL)_pointIsWithinOverlayView:(struct CGPoint { float x1; float x2; })arg1 hitView:(id*)arg2;
- (void)setPreviewViewAspectMode:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 angle:(float)arg2;
- (void)_startFaceFadeOutTimerWithTimeInterval:(double)arg1;
- (void)_updateFocus;
- (BOOL)_hideFocusForFilterSelection;
- (struct CGPoint { float x1; float x2; })convertToPointOfInterestFromViewCoordinates:(struct CGPoint { float x1; float x2; })arg1 pointIsInsideContent:(BOOL*)arg2;
- (BOOL)_shouldShowFocus;
- (void)_teardownPanoUI;
- (void)_setupPanoUI;
- (void)_setCameraEnabled:(BOOL)arg1;
- (void)_pinchZoomWithScale:(float)arg1;
- (void)showZoomSlider;
- (void)_setZoomFactor:(float)arg1;
- (void)_createZoomSliderIfNecessary;
- (BOOL)_zoomIsAllowed;
- (BOOL)_isReviewingImagePickerCapture;
- (BOOL)_isPerformingFilterTransition;
- (void)_reallyToggleCamera;
- (void)_toggleCameraButtonWasPressed:(id)arg1;
- (void)_showTorchDisabledAlert;
- (void)_handlePanoramaIssue:(int)arg1;
- (void)_hideControlsForCapturingPanoramaAnimated:(BOOL)arg1;
- (void)_performPanoramaCapture;
- (void)_showControlsForCapturingPanoramaAnimated:(BOOL)arg1;
- (void)_commonPostVideoCaptureCleanup;
- (void)_postCaptureCleanup;
- (void)_processCapturedVideo;
- (void)_previewVideoAtPath:(id)arg1;
- (void)_prepareVideoThumbnailFromPreviewImage:(id)arg1;
- (void)_removeVideoCaptureFileAtPath:(id)arg1;
- (void)_clearUnsavedVideoCaptureState;
- (void)_cleanupPostVideoCaptureState;
- (void)_removeVideoCaptureControls;
- (void)_showVideoCaptureControls;
- (void)_updateFilterButtonOnState;
- (void)_clearAEAFLock;
- (void)_resetInflightImageRequests;
- (void)_showControlsForChangeToMode:(int)arg1 animated:(BOOL)arg2;
- (void)_hideControlsForChangeToMode:(int)arg1 animated:(BOOL)arg2;
- (void)_removeModeSwitchingBlurAnimated:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_updatePanoramaImageQueue;
- (void)_createOrDestroyPanoramaViewIfNecessary;
- (void)_applyTopBarRotationForDeviceOrientation:(int)arg1;
- (BOOL)_processDeferredModeChange;
- (void)_setPendingModeIndex:(int)arg1;
- (void)_finishTimedCapture;
- (void)startPanorama;
- (void)stopPanorama;
- (void)_fadeOutFaceRects;
- (void)_showControlsForCapturingVideoAnimated:(BOOL)arg1;
- (void)_hideControlsForCapturingVideoAnimated:(BOOL)arg1;
- (void)_beginTimedCapture;
- (void)_performVideoCapture;
- (void)_setNumFilterSelectionsBeforeCapture:(BOOL)arg1;
- (void)_resetAggregateInfoForPhotoFilters;
- (id)_filterNamesSelectedBeforeCapture;
- (BOOL)_numFilterSelectionsBeforeCapture;
- (BOOL)_isStillImageMode:(int)arg1;
- (void)_shutterButtonClicked;
- (void)_incrementInflightImageRequests;
- (void)_extendAvalancheSession;
- (int)_getCaptureOrientation;
- (void)_updateModeSwitchingAvailability;
- (void)_completeTimedCapture;
- (void)_updateCaptureAggregateDictionaries;
- (void)_updateImageEditability;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unzoomedPreviewFrame;
- (void)_decrementInflightImageRequests;
- (id)_avalancheSession;
- (void)_setKeepAlive:(BOOL)arg1 forVideoCapture:(BOOL)arg2;
- (void)_handleVolumeUpEvents:(unsigned int)arg1;
- (BOOL)_shouldEnableShutterButton;
- (BOOL)cameraShutterReleased:(id)arg1;
- (void)cameraShutterPressed:(id)arg1;
- (void)_setHasMaximumNumberOfInflightImageRequests:(BOOL)arg1;
- (BOOL)_hasMaximumNumberOfInflightImageRequests;
- (void)_forceKeepAliveFailsafeTimeout;
- (void)_checkKeepAliveStatus;
- (void)_setReviewingImagePickerCapture:(BOOL)arg1;
- (BOOL)_canEditVideo;
- (void)_prepareForNextCapture;
- (void)_setPerformingFilterTransition:(BOOL)arg1;
- (void)_setChangingModes:(BOOL)arg1;
- (void)_setProcessingHDR:(BOOL)arg1;
- (void)_setPostprocessing:(BOOL)arg1;
- (void)_setPreparingToRecord:(BOOL)arg1;
- (void)_setWaitingForStillImageCaptureToComplete:(BOOL)arg1;
- (void)_setCapturing:(BOOL)arg1;
- (void)_enableKeepAliveFailsafeTimer;
- (void)_blurForSuspensionWithCompletionBlock:(id)arg1;
- (void)_clearFocusViews;
- (void)_updateEnabledControlsWithReason:(id)arg1;
- (void)_updateFlashModeIfNecessary;
- (void)_fadeAndUnblurPreviewWithCompletionBlock:(id)arg1;
- (void)_setFlipping:(BOOL)arg1;
- (void)_setupTargetDeviceSnapshotView;
- (void)_cleanupAfterZPositionAnimations;
- (void)_updateHardwareLockIndicatorVisibility;
- (void)_setShouldShowFocus:(BOOL)arg1;
- (void)_unblurForSuspensionWithCompletionBlock:(id)arg1;
- (void)_setViewingCameraRoll:(BOOL)arg1;
- (BOOL)_shouldHideZoomSliderForMode:(int)arg1;
- (void)_updatePreviewContentSizeWithCleanAperture:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateToggleAspectModeAbility;
- (void)_setPreviewViewAspectMode:(int)arg1;
- (BOOL)_isPreviewViewAspectModeAllowed:(int)arg1;
- (void)stopPreviewAnimated:(BOOL)arg1;
- (void)_layoutTopBarForOrientation:(int)arg1;
- (BOOL)_shouldApplyRotationDirectlyToTopBarForOrientation:(int)arg1 cameraMode:(int)arg2;
- (id)_avalancheIndicator;
- (id)_HDRBadge;
- (id)_zoomSlider;
- (id)_topBar;
- (void)_createPreviewViewAndContainerView;
- (void)_updateMaskingViewForCameraMode:(int)arg1 animated:(BOOL)arg2;
- (void)_adjustPreviewViewSize;
- (void)_updateModeSwitchingGestureRecognizersForCameraOrientation:(int)arg1;
- (void)swipedToNextCameraMode;
- (void)swipedToPreviousCameraMode;
- (void)_handleOverlayViewLongPress:(id)arg1;
- (void)_handlePreviewPinchGestureRecognizer:(id)arg1;
- (void)_handleOverlayViewSingleTap:(id)arg1;
- (void)_handleOverlayViewDoubleTap:(id)arg1;
- (void)_attachVideoPreviewToEffectsRenderer;
- (void)_resetZoom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previewContainerViewFrameForCameraMode:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gridLinesFrameForCameraMode:(int)arg1;
- (void)_adjustPreviewViewSizeForCameraMode:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previewMaskingViewFrameForCameraMode:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bottomBarFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_topBarFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_displayRectForPreviewForCameraMode:(int)arg1;
- (struct CGPoint { float x1; float x2; })_displayOriginForPreviewForCameraMode:(int)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })_displaySizeForPreviewForCameraMode:(int)arg1;
- (BOOL)_previewShouldFillScreenForCameraMode:(int)arg1;
- (BOOL)isTallScreen;
- (void)verifyViewOrdering;
- (void)disableCamera;
- (void)_windowWillAnimateRotationToOrientation:(int)arg1;
- (void)_setupPreviewLayer;
- (void)_setupPreviewView;
- (void)_setSwipeToModeSwitchEnabled:(BOOL)arg1;
- (void)_showDiskSpaceWarning;
- (void)_setupSuspensionSnapshotViewWithBlur:(BOOL)arg1;
- (void)_resetDiskSpaceWarning;
- (void)setManipulatingCrop:(BOOL)arg1;
- (void)_clearFaceFadeOutTimer;
- (void)_cancelZoomSliderTimer;
- (void)enableCamera;
- (void)_windowDidRotate:(id)arg1;
- (void)_windowWillAnimateRotation:(id)arg1;
- (void)_resetImageTile;
- (void)_teardownKeepAliveFailsafeTimer;
- (void)_teardownKeepAliveTimer;
- (id)videoPreviewView;
- (void)setImagePickerWantsVolumeButtonEvents:(BOOL)arg1;
- (void)_registerForSystemSound;
- (void)_resetFaceTracking;
- (void)_createControlsForCurrentModeIfNecessary;
- (void)_createDefaultControlsIfNecessary;
- (void)_handleVolumeButtonUp;
- (void)_handleVolumeButtonDown;
- (void)_beginSuspendAnimation:(id)arg1;
- (void)_applicationDidEnterBackground;
- (void)_cameraOrientationChanged:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_checkDiskSpaceAfterCapture;
- (void)_assetContainerDidChange:(id)arg1;
- (void)_performCaptureAnimation;
- (id)spec;
- (void)pressShutterButton;
- (void)setPreviewViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setOverlayView:(id)arg1;
- (void)setAllowsMultipleCameraModes:(BOOL)arg1;
- (void)setImagePickerWantsImageData:(BOOL)arg1;
- (void)setCropTitle:(id)arg1 buttonTitle:(id)arg2;
- (void)viewWillBeDisplayed;
- (void)setDisplayedInPopover:(BOOL)arg1;
- (void)setRotationStyle:(int)arg1;
- (void)embedControlsIntoNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)setImagePickerOptions:(id)arg1;
- (void)setPhotoSavingOptions:(int)arg1;
- (void)setTallScreen:(BOOL)arg1;
- (void)setShowsCropOverlay:(BOOL)arg1;
- (void)setCropOverlayUsesTelephonyUI:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 spec:(id)arg2;
- (void)flashButtonDidCollapse:(id)arg1;
- (void)flashButtonWillExpand:(id)arg1;
- (void)flashButtonWasPressed:(id)arg1;
- (void)flashButtonModeDidChange:(id)arg1;
- (id)_cropOverlay;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (int)windowEdgeClippingMask;
- (void)viewWillBeRemoved;
- (BOOL)_isCapturing;
- (id)_HDRButton;
- (id)_elapsedTimeView;
- (id)_flipButton;
- (id)_filterButton;
- (id)_shutterButton;
- (id)_stillDuringVideoButton;
- (id)_imageWell;
- (id)_modeDial;
- (id)_optionsButton;
- (void)resumePreview;
- (void)pausePreview;
- (void)_pptTestSetAutofocusDisabled:(BOOL)arg1;
- (BOOL)isFocusAllowed;
- (void)startPreview:(id)arg1;
- (void)cameraController:(id)arg1 didFinishTransitionToShowEffectsGrid:(BOOL)arg2;
- (void)cameraController:(id)arg1 didStartTransitionToShowEffectsGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraController:(id)arg1 willTransitionToShowEffectsGrid:(BOOL)arg2;
- (void)_setPreviewPaused:(BOOL)arg1;
- (void)cameraControllerDidChangeEffectFilterIndex:(id)arg1;
- (void)setFlashMode:(int)arg1;
- (void)_startPreview:(id)arg1;
- (void)cameraControllerDidChangeHDRSuggestion:(id)arg1;
- (void)cameraControllerTorchAvailabilityChanged:(id)arg1;
- (void)cameraController:(id)arg1 videoZoomFactorDidChange:(float)arg2;
- (void)cameraController:(id)arg1 faceMetadataDidChange:(id)arg2;
- (void)cameraControllerFocusDidEnd:(id)arg1;
- (void)cameraControllerFocusDidStart:(id)arg1;
- (void)cameraControllerWillStartAutofocus:(id)arg1;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;
- (void)cameraControllerDidStopVideoCapture:(id)arg1;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)cameraController:(id)arg1 capturedPanorama:(id)arg2 error:(id)arg3;
- (void)cameraControllerPanoramaWillStartProcessing:(id)arg1;
- (void)cameraControllerWillStopPanoramaCapture:(id)arg1;
- (void)cameraControllerDidStartPanoramaCapture:(id)arg1;
- (void)cameraController:(id)arg1 didReceivePanoramaIssue:(int)arg2;
- (void)cameraController:(id)arg1 didUpdatePanoramaPreview:(id)arg2;
- (void)cameraControllerDidChangePanoramaConfiguration:(id)arg1;
- (void)cameraController:(id)arg1 capturedPhoto:(id)arg2 error:(id)arg3;
- (void)cameraControllerDidTakePhoto:(id)arg1;
- (void)cameraControllerWillTakePhoto:(id)arg1;
- (void)cameraControllerServerDied:(id)arg1;
- (void)cameraControllerSessionInterruptionEnded:(id)arg1;
- (void)cameraControllerSessionWasInterrupted:(id)arg1;
- (void)cameraControllerWillStopSession:(id)arg1;
- (void)cameraControllerPreviewDidStart:(id)arg1;
- (void)cameraControllerSessionDidStop:(id)arg1;
- (void)cameraControllerSessionDidStart:(id)arg1;
- (void)cameraControllerWillStartPreview:(id)arg1;
- (void)cameraControllerDidSetupSession:(id)arg1;
- (int)cameraMode;
- (void)cameraController:(id)arg1 cleanApertureDidChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)cameraControllerModeDidChange:(id)arg1;
- (void)setCameraMode:(int)arg1;
- (void)cameraController:(id)arg1 willChangeToMode:(int)arg2 device:(int)arg3;
- (void)cameraController:(id)arg1 didChangeCaptureAbility:(BOOL)arg2;
- (BOOL)_isVideoMode:(int)arg1;
- (void)_inCallStatusChanged:(id)arg1;
- (void)setControlsAreVisible:(BOOL)arg1;
- (BOOL)controlsAreVisible;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (id)_bottomBar;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)avalancheSession:(id)arg1 didChangeToState:(int)arg2;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2;
- (id)imageTile;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)startPreview;
- (void)stopPreview;
- (void)_applicationSuspended:(id)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)viewDidAppear;
- (void)_setFlashMode:(int)arg1;
- (int)flashMode;
- (void)lockFocus;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)overlayView;
- (void)setCameraDevice:(int)arg1;
- (int)cameraDevice;
- (void)stopVideoCapture;
- (BOOL)startVideoCapture;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)setEnabledGestures:(int)arg1;
- (id)_scriptingInfo;
- (void)didMoveToSuperview;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)prepareForDefaultImageSnapshot;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
