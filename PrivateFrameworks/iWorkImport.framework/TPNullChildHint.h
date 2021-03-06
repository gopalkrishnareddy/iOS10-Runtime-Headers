/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPNullChildHint : TSPObject <TSDArchivedHint>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <TSDHint> *hint;
@property (readonly) Class superclass;

- (id)hint;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setHint:(id)arg1;

@end
