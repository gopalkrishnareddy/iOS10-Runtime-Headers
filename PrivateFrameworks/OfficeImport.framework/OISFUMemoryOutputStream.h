/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableData;

@interface OISFUMemoryOutputStream : NSObject <SFUOutputStream> {
    NSMutableData *mData;
}


- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)closeLocalStream;
- (bool)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)inputStream;
- (bool)canSeek;
- (long long)offset;
- (void)close;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end