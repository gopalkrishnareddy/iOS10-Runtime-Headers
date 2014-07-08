/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal  {
    GKScoreInternal *_score;
    GKLeaderboardInternal *_leaderboard;
}

@property(copy) GKScoreInternal * score;
@property(retain) GKLeaderboardInternal * leaderboard;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (id)leaderboard;
- (void)setScore:(id)arg1;
- (unsigned long long)type;
- (void)dealloc;
- (id)score;

@end