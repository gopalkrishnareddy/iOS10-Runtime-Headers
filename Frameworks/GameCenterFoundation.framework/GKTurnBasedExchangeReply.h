/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKTurnBasedExchangeReplyInternal, NSString, GKTurnBasedParticipant, NSData;

@interface GKTurnBasedExchangeReply : NSObject  {
    GKTurnBasedParticipant *recipient;
    GKTurnBasedExchangeReplyInternal *_internal;
}

@property(retain) GKTurnBasedParticipant * recipient;
@property(readonly) NSString * message;
@property(retain) NSData * data;
@property(retain) GKTurnBasedExchangeReplyInternal * internal;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

- (id)recipient;
- (void)setInternal:(id)arg1;
- (id)internal;
- (void)setRecipient:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)message;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end