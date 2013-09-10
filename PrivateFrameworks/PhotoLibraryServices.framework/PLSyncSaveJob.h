/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSNumber, NSSet, CLLocation, NSString, NSURL, NSDate, NSArray;

@interface PLSyncSaveJob : NSObject  {
    BOOL isVideo;
    BOOL isSyncComplete;
    BOOL _cleanupSyncState;
    NSArray *facesInfo;
    NSURL *originalAssetURL;
    NSString *uuid;
    NSDate *creationDate;
    NSDate *modificationDate;
    NSSet *albumURIs;
    CLLocation *location;
    NSNumber *sortToken;
    NSString *originalFileName;
    NSDate *_cleanupBeforeDate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedBlock;

}

@property(retain) NSURL * originalAssetURL;
@property BOOL isVideo;
@property(copy) NSString * uuid;
@property(copy) NSDate * creationDate;
@property(copy) NSDate * modificationDate;
@property(copy) NSSet * albumURIs;
@property(copy) CLLocation * location;
@property(retain) NSArray * facesInfo;
@property(retain) NSNumber * sortToken;
@property(retain) NSString * originalFileName;
@property BOOL isSyncComplete;
@property BOOL cleanupSyncState;
@property(copy) NSDate * cleanupBeforeDate;
@property(copy) id finishedBlock;


- (void)setFinishedBlock:(id)arg1;
- (id)finishedBlock;
- (void)setCleanupBeforeDate:(id)arg1;
- (void)setCleanupSyncState:(BOOL)arg1;
- (void)setIsSyncComplete:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setOriginalFileName:(id)arg1;
- (void)setFacesInfo:(id)arg1;
- (void)setAlbumURIs:(id)arg1;
- (void)setOriginalAssetURL:(id)arg1;
- (id)serializedData;
- (id)initFromSerializedData:(id)arg1;
- (id)albumURIs;
- (id)facesInfo;
- (void)processFacesWithBlock:(id)arg1;
- (id)originalFileName;
- (id)sortToken;
- (id)originalAssetURL;
- (BOOL)isSyncComplete;
- (id)cleanupBeforeDate;
- (BOOL)cleanupSyncState;
- (void)setSortToken:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (id)location;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)uuid;
- (BOOL)isVideo;
- (void)setLocation:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)modificationDate;

@end
