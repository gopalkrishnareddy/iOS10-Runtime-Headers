/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVCaptureDeviceInternal, AVCaptureDeviceFormat;

@interface AVCaptureDevice : NSObject  {
    AVCaptureDeviceInternal *_internal;
}

@property(readonly) NSString * uniqueID;
@property(readonly) NSString * modelID;
@property(readonly) NSString * localizedName;
@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) NSArray * formats;
@property(retain) AVCaptureDeviceFormat * activeFormat;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMinFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMaxFrameDuration;

+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(id)arg2;
+ (int)authorizationStatusForMediaType:(id)arg1;
+ (id)_devices;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
+ (void)initialize;

- (void)cancelVideoZoomRamp;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (void)setFlashMode:(int)arg1;
- (float)torchLevel;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (BOOL)isAdjustingExposure;
- (BOOL)isAdjustingFocus;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (BOOL)isFlashActive;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)open:(id*)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (void)setExposureMode:(int)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTorchMode:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (BOOL)isTorchAvailable;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)doesHandleNotification:(id)arg1;
- (void)setFigCaptureStreamFactoryTestProperty:(struct __CFString { }*)arg1 withValue:(void*)arg2 error:(id*)arg3;
- (void*)copyFigCaptureStreamFactoryTestProperty:(struct __CFString { }*)arg1 error:(id*)arg2;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isSISSupported;
- (BOOL)HDRUsesPreBracketedFrameAsEV0;
- (BOOL)isHDRSupported;
- (BOOL)isRampingVideoZoom;
- (void)setVideoZoomFactor:(float)arg1;
- (float)videoZoomFactor;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (void)setImageControlMode:(int)arg1;
- (int)imageControlMode;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isAdjustingWhiteBalance;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (int)whiteBalanceMode;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (BOOL)isManualExposureSupportEnabled;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (int)exposureMode;
- (BOOL)isExposureModeSupported:(int)arg1;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (void)setManualFocusSupportEnabled:(BOOL)arg1;
- (BOOL)isManualFocusSupportEnabled;
- (void)setFocusPosition:(float)arg1;
- (float)focusPosition;
- (int)autoFocusRangeRestriction;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (int)focusMode;
- (BOOL)isFocusModeSupported:(int)arg1;
- (int)torchMode;
- (BOOL)isTorchActive;
- (BOOL)isTorchModeSupported:(int)arg1;
- (BOOL)hasTorch;
- (int)flashMode;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFlashAvailable;
- (BOOL)hasFlash;
- (void)unlockForConfiguration;
- (BOOL)lockForConfiguration:(id*)arg1;
- (BOOL)isLockedForConfiguration;
- (struct OpaqueCMClock { }*)deviceClock;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(BOOL)arg2;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (void)setActiveFormat:(id)arg1;
- (id)formats;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (BOOL)isHighDynamicRangeScene;
- (void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (BOOL)isHighDynamicRangeSceneDetectionEnabled;
- (BOOL)isHighDynamicRangeSceneDetectionSupported;
- (BOOL)isFaceDetectionDebugMetadataReportingEnabled;
- (int)faceRectangleAngle;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionSupported;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)removeInput:(id)arg1;
- (BOOL)addInput:(id)arg1;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
- (id)modelID;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (BOOL)_startUsingDevice:(id*)arg1;
- (void)setActiveInput:(id)arg1;
- (id)activeInput;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (BOOL)isOpen;
- (id)uniqueID;
- (id)init;
- (void)close;
- (id)localizedName;
- (void)dealloc;
- (id)description;
- (id)session;
- (float)contrast;
- (void)setContrast:(float)arg1;
- (int)position;
- (BOOL)isConnected;

@end
