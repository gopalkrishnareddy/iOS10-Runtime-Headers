/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class TLAccessQueue, NSMutableDictionary, NSDictionary;

@interface TLToneManager : NSObject  {
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSMutableDictionary *_textTonesByIdentifier;
    NSMutableDictionary *_iTunesIdentifiersByPID;
    NSDictionary *_previewBehaviorForDefaultIdentifier;
    NSDictionary *_identifierAliasMap;
    id _accessQueue;
    id _delegate;
}

@property(setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;

+ (BOOL)migrateLegacyToneSettings;
+ (BOOL)identifierIsTextTone:(id)arg1;
+ (id)sharedRingtoneManager;

- (void)removeNewMailToneForAccount:(id)arg1;
- (unsigned long)currentAirDropInvitationToneSoundID;
- (unsigned long)currentPhotoStreamPostToneSoundID;
- (unsigned long)currentFacebookPostToneSoundID;
- (unsigned long)currentSentTweetToneSoundID;
- (unsigned long)currentNewReminderAlertToneSoundID;
- (unsigned long)currentNewCalendarAlertToneSoundID;
- (unsigned long)currentNewVoicemailToneSoundID;
- (unsigned long)currentSentMailToneSoundID;
- (unsigned long)currentNewMailToneSoundIDForAccount:(id)arg1;
- (unsigned long)currentNewMailToneSoundID;
- (id)currentIdentifierForContext:(int)arg1;
- (id)defaultIdentifierForContext:(int)arg1;
- (id)defaultAlarmToneIdentifier;
- (id)newMailPreferenceKeyForAccount:(id)arg1;
- (id)defaultAirDropInvitationToneIdentifier;
- (id)currentAirDropInvitationToneIdentifier;
- (id)defaultPhotoStreamPostToneIdentifier;
- (id)currentPhotoStreamPostToneIdentifier;
- (id)defaultFacebookPostToneIdentifier;
- (id)currentFacebookPostToneIdentifier;
- (id)defaultSentTweetToneIdentifier;
- (id)currentSentTweetToneIdentifier;
- (id)defaultReminderAlertToneIdentifier;
- (id)currentReminderAlertToneIdentifier;
- (id)defaultCalendarAlertToneIdentifier;
- (id)currentCalendarAlertToneIdentifier;
- (id)defaultNewVoicemailToneIdentifier;
- (id)currentNewVoicemailToneIdentifier;
- (id)defaultSentMailToneIdentifier;
- (id)currentSentMailToneIdentifier;
- (id)currentNewMailToneIdentifierForAccount:(id)arg1;
- (id)defaultNewMailToneIdentifier;
- (id)currentNewMailToneIdentifier;
- (BOOL)transferPurchasedToITunes:(id)arg1;
- (unsigned long long)installedTonesSize;
- (void)deleteAllSyncedData;
- (id)iTunesToneForPID:(id)arg1;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (BOOL)deleteSyncedToneByPID:(id)arg1;
- (BOOL)insertPurchasedToneMetadata:(id)arg1 filename:(id)arg2;
- (BOOL)insertSyncedToneMetadata:(id)arg1 filename:(id)arg2;
- (unsigned long)createPreviewSoundIDForToneIdentifier:(id)arg1;
- (unsigned long)soundIDForTextToneIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (unsigned long)soundIDForTextToneIdentifier:(id)arg1;
- (id)aliasForIdentifier:(id)arg1;
- (unsigned long)previewBehaviorForDefaultIdentifier:(id)arg1;
- (unsigned long)currentTextToneSoundID;
- (id)defaultTextToneName;
- (void)setCurrentRingtoneIdentifier:(id)arg1;
- (void)setCurrentTextToneIdentifier:(id)arg1;
- (id)copyCurrentTextToneName;
- (id)currentTextToneIdentifier;
- (id)ITunesRingtoneInformationPlist;
- (id)deviceITunesRingtoneInformationPlist;
- (BOOL)isTonePrivateWithIdentifier:(id)arg1;
- (BOOL)isToneProtectedWithIdentifier:(id)arg1;
- (unsigned int)durationOfToneWithIdentifier:(id)arg1;
- (BOOL)isAlertTone:(id)arg1;
- (BOOL)isRingtonePurchased:(id)arg1;
- (id)newAVItemWithRingtoneIdentifier:(id)arg1;
- (BOOL)toneWithIdentifierIsNone:(id)arg1;
- (id)defaultRingtoneIdentifier;
- (id)currentRingtoneName;
- (id)currentRingtoneIdentifier;
- (void)_deviceRingtonesChangedNotification;
- (BOOL)shouldShowAlarmSounds;
- (BOOL)shouldShowRingtones;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)installedTones;
- (id)copyIdentifierForRingtoneAtPath:(id)arg1 isValid:(BOOL*)arg2;
- (int)_lockManifest:(id)arg1;
- (BOOL)_removeToneFromManifest:(id)arg1 fileName:(id)arg2 deletedMetadata:(id*)arg3;
- (BOOL)_addToneToManifest:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (unsigned long)soundIDForToneIdentifier:(id)arg1;
- (unsigned long)previewSoundIDForTextToneIdentifier:(id)arg1;
- (unsigned long)_soundIDForSystemTone:(id)arg1 isValid:(BOOL*)arg2;
- (unsigned long)soundIDForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)nullTextToneName;
- (unsigned long)_currentToneSoundID:(id)arg1 defaultIdentifier:(id)arg2;
- (id)defaultTextToneIdentifier;
- (id)_defaultToneNameForAlertType:(int)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_copySystemWideTonePreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)copyCurrentTextToneIdentifier;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (id)localizedRingtoneNameWithIdentifier:(id)arg1;
- (id)copyNameOfTextToneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)systemModernSoundDirectory;
- (id)systemNewSoundDirectory;
- (id)systemSoundDirectory;
- (id)systemRingtoneDirectory;
- (id)pathFromIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)defaultRingtonePath;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyNameOfIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)localizedNameWithIdentifier:(id)arg1;
- (id)_defaultToneIdentifierForAlertType:(int)arg1;
- (id)copyCurrentRingtoneName;
- (id)copyCurrentRingtoneIdentifier;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (id)defaultRingtoneName;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (id)deviceITunesRingtoneDirectory;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (id)iTunesRingtoneDirectory;
- (id)_accessQueue;
- (void)_performBlockInAccessQueue:(id)arg1;
- (void)loadTextToneInfo;
- (void)loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)_setAccessQueue:(id)arg1;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1 shouldInitializeGraphicsServices:(BOOL)arg2;
- (id)initWithGraphicsServicesInitialization:(BOOL)arg1;
- (void)_performBlockOnMainThread:(id)arg1;
- (BOOL)ensureDirectoryExists:(id)arg1;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;
- (id)rootDirectory;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
