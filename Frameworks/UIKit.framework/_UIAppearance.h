/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSArray, _UIAppearanceCustomizableClassInfo, NSMutableArray, NSMapTable;

@interface _UIAppearance : NSObject  {
    NSArray *_containerList;
    NSMutableArray *_appearanceInvocations;
    NSMapTable *_invocationSources;
    NSMutableDictionary *_resettableInvocations;
    _UIAppearanceCustomizableClassInfo *_customizableClassInfo;
}

@property(readonly) _UIAppearanceCustomizableClassInfo * _customizableClassInfo;
@property(setter=_setResettableInvocations:,retain) NSMutableDictionary * _resettableInvocations;

+ (id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2;
+ (void)_removeWindow:(id)arg1 forSource:(id)arg2;
+ (void)_addWindow:(id)arg1 forSource:(id)arg2;
+ (void)_setCurrentAppearanceSource:(id)arg1;
+ (BOOL)_hasAnyCustomizations;
+ (id)_pendingRecordInvocationsForSource:(id)arg1;
+ (id)_currentAppearanceSource;
+ (id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_rootAppearancesNode;
+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;
+ (id)_recorderForSource:(id)arg1;
+ (id)_windowsForSource:(id)arg1;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2;
+ (BOOL)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2;
+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;
+ (void)_setInvalidatesViewsOnAppearanceChange:(BOOL)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)_customizableClassInfo;
- (void)_setResettableInvocations:(id)arg1;
- (id)_resettableInvocations;
- (id)_appearanceInvocations;
- (void)updateResettableSelectorsWithInvocation:(id)arg1 removeSelector:(BOOL)arg2;
- (id)_resettableInvocationsCreateIfNecessary;

@end
