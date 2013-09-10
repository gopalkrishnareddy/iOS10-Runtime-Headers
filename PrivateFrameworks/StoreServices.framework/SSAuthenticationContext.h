/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSDictionary, NSNumber, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {
    NSString *_accountName;
    BOOL _accountNameEditable;
    int _accountScope;
    BOOL _allowsBioAuthentication;
    BOOL _allowsRetry;
    BOOL _canCreateNewAccount;
    BOOL _canSetActiveAccount;
    NSString *_clientIdentifierHeader;
    BOOL _demoAccount;
    NSDictionary *_httpHeaders;
    NSString *_initialPassword;
    BOOL _persistsAcrossDeviceLock;
    BOOL _persistsPasswordFallback;
    NSString *_preferredITunesStoreClient;
    int _promptStyle;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    BOOL _shouldCreateNewSession;
    BOOL _shouldFollowAccountButtons;
    BOOL _shouldIgnoreProtocol;
    BOOL _shouldSuppressDialogs;
    NSDictionary *_signupRequestParameters;
    int _tokenType;
    NSArray *_userAgentComponents;
}

@property(readonly) NSString * accountName;
@property(readonly) int accountScope;
@property(getter=isAccountNameEditable,readonly) BOOL accountNameEditable;
@property(readonly) BOOL allowsRetry;
@property(readonly) BOOL canCreateNewAccount;
@property(readonly) BOOL canSetActiveAccount;
@property(readonly) NSDictionary * HTTPHeaders;
@property(readonly) NSString * initialPassword;
@property(readonly) BOOL persistsPasswordFallback;
@property(readonly) NSString * preferredITunesStoreClient;
@property(readonly) int promptStyle;
@property(readonly) NSDictionary * requestParameters;
@property(readonly) NSNumber * requiredUniqueIdentifier;
@property(readonly) BOOL shouldCreateNewSession;
@property(readonly) BOOL shouldFollowAccountButtons;
@property(readonly) BOOL shouldSuppressDialogs;
@property(readonly) NSDictionary * signupRequestParameters;
@property(readonly) NSArray * userAgentComponents;
@property(readonly) BOOL allowsBioAuthentication;
@property(readonly) NSString * clientIdentifierHeader;
@property(getter=isDemoAccount,readonly) BOOL demoAccount;
@property(readonly) BOOL persistsAcrossDeviceLock;
@property(readonly) BOOL shouldIgnoreProtocol;
@property(readonly) int tokenType;
@property(readonly) SSURLBagContext * URLBagContext;

+ (id)contextForSignIn;

- (id)initWithAccountIdentifier:(id)arg1;
- (BOOL)shouldFollowAccountButtons;
- (id)preferredITunesStoreClient;
- (int)promptStyle;
- (BOOL)allowsBioAuthentication;
- (id)userAgentComponents;
- (id)signupRequestParameters;
- (BOOL)shouldSuppressDialogs;
- (BOOL)shouldIgnoreProtocol;
- (BOOL)shouldCreateNewSession;
- (id)requestParameters;
- (BOOL)persistsPasswordFallback;
- (BOOL)persistsAcrossDeviceLock;
- (id)initialPassword;
- (id)clientIdentifierHeader;
- (BOOL)canSetActiveAccount;
- (BOOL)canCreateNewAccount;
- (BOOL)allowsRetry;
- (BOOL)isAccountNameEditable;
- (id)URLBagContext;
- (id)requiredUniqueIdentifier;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_initSSAuthenticationContext;
- (BOOL)_allowCreateAccount;
- (int)accountScope;
- (BOOL)isDemoAccount;
- (id)HTTPHeaders;
- (id)accountName;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (int)tokenType;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
