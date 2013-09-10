/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSDictionary, NSNumber;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying> {
}

@property(copy) NSString * accountName;
@property int accountScope;
@property(getter=isAccountNameEditable) BOOL accountNameEditable;
@property BOOL allowsRetry;
@property BOOL canCreateNewAccount;
@property BOOL canSetActiveAccount;
@property(copy) NSString * initialPassword;
@property BOOL persistsPasswordFallback;
@property(copy) NSString * preferredITunesStoreClient;
@property int promptStyle;
@property(copy) NSDictionary * requestParameters;
@property BOOL shouldCreateNewSession;
@property BOOL shouldFollowAccountButtons;
@property BOOL shouldSuppressDialogs;
@property(copy) NSDictionary * signupRequestParameters;
@property(retain) NSNumber * requiredUniqueIdentifier;
@property(copy) NSArray * userAgentComponents;
@property(copy) NSDictionary * HTTPHeaders;
@property BOOL allowsBioAuthentication;
@property(copy) NSString * clientIdentifierHeader;
@property(getter=isDemoAccount) BOOL demoAccount;
@property BOOL persistsAcrossDeviceLock;
@property BOOL shouldIgnoreProtocol;
@property int tokenType;


- (void)setShouldFollowAccountButtons:(BOOL)arg1;
- (void)setShouldCreateNewSession:(BOOL)arg1;
- (void)setShouldIgnoreProtocol:(BOOL)arg1;
- (void)setPromptStyle:(int)arg1;
- (void)setPersistsPasswordFallback:(BOOL)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setAllowsBioAuthentication:(BOOL)arg1;
- (void)setValuesWithAccount:(id)arg1;
- (void)setTokenType:(int)arg1;
- (void)setPersistsAcrossDeviceLock:(BOOL)arg1;
- (void)setSignupRequestParameters:(id)arg1;
- (void)setShouldSuppressDialogs:(BOOL)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setInitialPassword:(id)arg1;
- (void)setCanSetActiveAccount:(BOOL)arg1;
- (void)setAllowsRetry:(BOOL)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setCanCreateNewAccount:(BOOL)arg1;
- (void)setAccountNameEditable:(BOOL)arg1;
- (void)setAccountScope:(int)arg1;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setAccountName:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

@end
