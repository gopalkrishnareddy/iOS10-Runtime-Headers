/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRImage : NSObject  {
    unsigned int width;
    unsigned int height;
    unsigned int bytesPerRow;
    char *rawDataBuffer;
    char *alignedDataBuffer;
    BOOL freeBufferWhenDone;
}

@property unsigned int width;
@property unsigned int height;
@property unsigned int bytesPerRow;


- (void)setBytesPerRow:(unsigned int)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (char *)getAlignedImageData;
- (unsigned int)height;
- (unsigned int)width;
- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 buffer:(char *)arg4 freeBufferWhenDone:(BOOL)arg5;
- (unsigned int)bytesPerRow;
- (void)dealloc;

@end
