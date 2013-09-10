/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSlalomUtilities : NSObject  {
}

+ (id)regionsForStartTime:(double)arg1 endTime:(double)arg2;
+ (id)adjustRegions:(id)arg1 forNewStartTime:(double)arg2 endTime:(double)arg3;
+ (int)preferredTimeScale;
+ (id)_setVolume:(float)arg1 forSlalomRegionsInTrack:(id)arg2 timeRangeMapper:(id)arg3;
+ (float)_slalomVolume;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })_timeRangeFromTime:(float)arg1 toTime:(float)arg2;
+ (float)_slalomRampVolume;
+ (BOOL)_scaleComposition:(id)arg1 regions:(id)arg2 forExport:(BOOL)arg3 outTimeRangeMapper:(id*)arg4;
+ (id)audioMixForScaledComposition:(id)arg1 timeRangeMapper:(id)arg2;
+ (id)scaledCompositionForAsset:(id)arg1 regions:(id)arg2 forExport:(BOOL)arg3 outTimeRangeMapper:(id*)arg4;
+ (id)_assetFromSourceAsset:(id)arg1 sourceDuration:(double)arg2 slalomRegions:(id)arg3 forExport:(BOOL)arg4 outDuration:(double*)arg5 outAudioMix:(id*)arg6;
+ (void)configureExportSession:(id)arg1 forcePreciseConversion:(BOOL)arg2;
+ (id)exportPresetForAsset:(id)arg1 preferredPreset:(id)arg2;
+ (id)assetFromVideoFilePath:(id)arg1 slalomRegions:(id)arg2 forExport:(BOOL)arg3 outDuration:(double*)arg4 outAudioMix:(id*)arg5;
+ (id)assetFromManagedAsset:(id)arg1 applySlalomRegions:(BOOL)arg2 forExport:(BOOL)arg3 outDuration:(double*)arg4 outAudioMix:(id*)arg5;
+ (double)durationForManagedAsset:(id)arg1 applySlalomRegions:(BOOL)arg2;
+ (double)durationForBaseDuration:(double)arg1 slalomRegions:(id)arg2;
+ (id)regionsFromPlist:(id)arg1;
+ (id)plistFromRegions:(id)arg1;
+ (id)defaultRegionsForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)regionsFromPath:(id)arg1;
+ (BOOL)writeRegions:(id)arg1 toPath:(id)arg2;
+ (id)sharedConfiguration;


@end
