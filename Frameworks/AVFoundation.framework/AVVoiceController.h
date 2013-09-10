/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, <AVVoiceControllerRecordDelegate>, <Endpointer>, NSDictionary, <AVVoiceControllerPlaybackDelegate>;

@interface AVVoiceController : NSObject  {
    void *_impl;
}

@property(getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;
@property(getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;
@property(readonly) NSString * recordRoute;
@property(readonly) unsigned long long lastRecordStartTime;
@property(readonly) NSDictionary * recordSettings;
@property(getter=isRecording,readonly) BOOL recording;
@property <Endpointer> * endpointerDelegate;
@property int recordEndpointMode;
@property double recordStartWaitTime;
@property double recordInterspeechWaitTime;
@property double recordEndWaitTime;
@property <AVVoiceControllerRecordDelegate> * recordDelegate;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property(readonly) NSDictionary * playbackSettings;
@property(getter=isPlaying,readonly) BOOL playing;
@property <AVVoiceControllerPlaybackDelegate> * playbackDelegate;
@property float playbackVolume;
@property(getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;
@property float alertVolume;


- (BOOL)isPlaying;
- (void)stopPlaying;
- (void)setStopOnEndpointEnabled:(BOOL)arg1;
- (BOOL)isStopOnEndpointEnabled;
- (float)averagePowerForChannel:(unsigned int)arg1;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)isMeteringEnabled;
- (float)playbackVolume;
- (void)setPlaybackVolume:(float)arg1;
- (float)alertVolume;
- (void)setAlertVolume:(float)arg1;
- (BOOL)setPlaybackBufferDuration:(double)arg1;
- (double)getPlaybackBufferDuration;
- (id)playbackSettings;
- (void)setPlaybackDelegate:(id)arg1;
- (id)playbackDelegate;
- (void)setRecordEndWaitTime:(double)arg1;
- (double)recordEndWaitTime;
- (void)setRecordInterspeechWaitTime:(double)arg1;
- (double)recordInterspeechWaitTime;
- (void)setRecordStartWaitTime:(double)arg1;
- (double)recordStartWaitTime;
- (void)setRecordEndpointMode:(int)arg1;
- (int)recordEndpointMode;
- (void)setEndpointerDelegate:(id)arg1;
- (id)endpointerDelegate;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (double)getRecordBufferDuration;
- (id)recordSettings;
- (void)setRecordDelegate:(id)arg1;
- (id)recordDelegate;
- (BOOL)startPlaying;
- (BOOL)preparePlaybackFromURL:(id)arg1 error:(id*)arg2;
- (BOOL)preparePlaybackWithSettings:(id)arg1 error:(id*)arg2;
- (BOOL)startRecording;
- (BOOL)playAlertSoundForType:(int)arg1;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2;
- (BOOL)setCurrentContext:(id)arg1 error:(id*)arg2;
- (void)releaseAudioSession;
- (void)prewarmAudioSession;
- (id)initWithContext:(id)arg1 error:(id*)arg2;
- (BOOL)isRecording;
- (void)setStopOnBargeInEnabled:(BOOL)arg1;
- (BOOL)isStopOnBargeInEnabled;
- (void)setBargeInDetectEnabled:(BOOL)arg1;
- (BOOL)isBargeInDetectEnabled;
- (unsigned long long)lastRecordStartTime;
- (id)recordRoute;
- (void)endPlaybackInterruption;
- (void)beginPlaybackInterruption;
- (void)endRecordInterruption;
- (void)beginRecordInterruption;
- (void)decodeError;
- (void)finishedPlaying;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (void)beganPlaying;
- (void)encodeError;
- (void)endpointDetected;
- (void)interspeechPointDetected;
- (void)startpointDetected;
- (void)finishedRecording;
- (void)recordBufferReceived:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (void)beganRecording;
- (void)hardwareConfigChanged;
- (void)removeSessionNotifications;
- (void)setSessionNotifications;
- (struct ControllerImpl { int (**x1)(); id x2; id x3; struct CAStreamBasicDescription { double x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; } x4; double x5; boolx6; struct AudioQueueLevelMeterState {} *x7; struct OpaqueAudioQueue {} *x8; int x9; struct OpaqueAudioConverter {} *x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct AudioQueueBuffer {} **x15; unsigned long long x16; int x17; int x18; boolx19; struct MemorySyncBool { boolx_20_1_1; } x20; boolx21; float x22; id x23; unsigned int x24; id x25; id x26; struct CAStreamBasicDescription { double x_27_1_1; unsigned int x_27_1_2; unsigned int x_27_1_3; unsigned int x_27_1_4; unsigned int x_27_1_5; unsigned int x_27_1_6; unsigned int x_27_1_7; unsigned int x_27_1_8; unsigned int x_27_1_9; } x27; double x28; struct OpaqueAudioQueue {} *x29; int x30; id x31; unsigned int x32; struct AudioQueueBuffer {} **x33; int x34; boolx35; boolx36; boolx37; boolx38; struct MemorySyncBool { boolx_39_1_1; } x39; boolx40; float x41; unsigned int x42; struct CAStreamBasicDescription { double x_43_1_1; unsigned int x_43_1_2; unsigned int x_43_1_3; unsigned int x_43_1_4; unsigned int x_43_1_5; unsigned int x_43_1_6; unsigned int x_43_1_7; unsigned int x_43_1_8; unsigned int x_43_1_9; } x43; long long x44; struct OpaqueAudioQueue {} *x45; struct map<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, NSURL *> > > { struct __tree<std::__1::pair<AVVoiceAlertType, NSURL *>, std::__1::__map_value_compare<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::pair<AVVoiceAlertType, NSURL *> > > { struct __tree_node<std::__1::pair<AVVoiceAlertType, NSURL *>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<AVVoiceAlertType, NSURL *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_46_1_1; } x46; struct map<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, AudioQueueBuffer *> > > { struct __tree<std::__1::pair<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::__map_value_compare<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::pair<AVVoiceAlertType, AudioQueueBuffer *> > > { struct __tree_node<std::__1::pair<AVVoiceAlertType, AudioQueueBuffer *>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<AVVoiceAlertType, AudioQueueBuffer *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_47_1_1; } x47; boolx48; int x49; float x50; double x51; unsigned long long x52; float x53; float x54; id x55; struct OpaqueAudioFileID {} *x56; unsigned int x57; struct AudioFormatListItem {} *x58; unsigned int x59; unsigned int x60; char *x61; struct AudioFilePacketTableInfo { long long x_62_1_1; int x_62_1_2; int x_62_1_3; } x62; long long x63; long long x64; boolx65; int x66; int x67; id x68; boolx69; boolx70; boolx71; boolx72; int x73; double x74; double x75; double x76; boolx77; boolx78; id x79; unsigned char x80; int x81; boolx82; int x83; boolx84; boolx85; struct _opaque_pthread_mutex_t { long x_86_1_1; BOOL x_86_1_2[40]; } x86[5]; int x87; }*)impl;
- (void)handleMediaServerReset:(id)arg1;
- (void)handleMediaServerDeath:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)stopRecording;

@end
