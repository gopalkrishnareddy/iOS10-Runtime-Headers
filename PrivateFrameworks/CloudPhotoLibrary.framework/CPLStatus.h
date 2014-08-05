/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSMutableDictionary, <CPLStatusDelegate>, NSURL, NSObject<OS_dispatch_queue>, NSDate;

@interface CPLStatus : NSObject  {
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
    <CPLStatusDelegate> *_delegate;
}

@property NSDate * lastSuccessfulSyncDate;
@property bool hasChangesToProcess;
@property bool isExceedingQuota;
@property NSDate * exitDeleteTime;
@property bool iCloudLibraryHasBeenWiped;
@property bool iCloudLibraryExists;
@property <CPLStatusDelegate> * delegate;

+ (id)statusForSharedLibrary;

- (id)statusDescription;
- (void)_statusDidChange;
- (void)setICloudLibraryExists:(bool)arg1;
- (bool)iCloudLibraryExists;
- (void)setICloudLibraryHasBeenWiped:(bool)arg1;
- (bool)iCloudLibraryHasBeenWiped;
- (void)setExitDeleteTime:(id)arg1;
- (id)exitDeleteTime;
- (void)setIsExceedingQuota:(bool)arg1;
- (bool)isExceedingQuota;
- (void)setLastSuccessfulSyncDate:(id)arg1;
- (void)refetchFromDisk;
- (void)_loadIfNecessary;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (void)setHasChangesToProcess:(bool)arg1;
- (bool)hasChangesToProcess;
- (id)lastSuccessfulSyncDate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)_save;

@end