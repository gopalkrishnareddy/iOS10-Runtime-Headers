/* Generated by RuntimeBrowser.
 */

@protocol TTTextStorageStyler <NSObject>

@required

- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(bool)arg2;
- (void)resetGuessedFontSizes;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (void)styleText:(TTTextStorage *)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3;

@end