/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDTitle, OADGraphicProperties, EDResources;

@interface CHDAxis : NSObject <EDKeyedObject> {
    boolmReverseOrder;
    boolmSecondary;
    boolmDateTimeFormattingFlag;
    boolmLineVisible;
    boolmDeleted;
    boolmAutoMinimumValue;
    boolmAutoMaximumValue;
    boolmAutoCrossValue;
    boolmContentFormatDerived;
    int mAxisId;
    unsigned int mContentFormatId;
    unsigned int mFontIndex;
    double mScalingMaximum;
    double mScalingMinimum;
    int mOrientation;
    double mCrossAxisId;
    double mCrossesAt;
    int mMajorTickMark;
    int mMinorTickMark;
    int mAxisPosition;
    int mAxisType;
    int mTickLabelPosition;
    CHDTitle *mTitle;
    OADGraphicProperties *mMinorGridLinesGraphicProperties;
    OADGraphicProperties *mMajorGridLinesGraphicProperties;
    OADGraphicProperties *mAxisGraphicProperties;
    int mCrossBetween;
    int mCrosses;
    double mTickLabelRotation;
    boolmIsAutoRotation;
    unsigned int mTickLabelColorIndex;
    EDResources *mResources;
}


- (id)tickLabelColor;
- (unsigned int)tickLabelColorIndex;
- (bool)isTickLabelAutoRotation;
- (double)tickLabelRotationAngle;
- (void)setDateTimeFormattingFlag:(bool)arg1;
- (bool)isDate;
- (void)setCrosses:(int)arg1;
- (int)crosses;
- (id)axisGraphicProperties;
- (id)minorGridLinesGraphicProperties;
- (bool)isTickLabelVisible;
- (int)tickLabelPosition;
- (int)axisType;
- (int)minorTickMark;
- (int)majorTickMark;
- (void)setCrossAxisId:(double)arg1;
- (double)crossAxisId;
- (void)setIsContentFormatDerivedFromDataPoints:(bool)arg1;
- (bool)isContentFormatDerivedFromDataPoints;
- (void)setContentFormat:(id)arg1;
- (id)defaultDateTimeContentFormat;
- (bool)isHorizontalPosition;
- (bool)isLineVisible;
- (int)axisId;
- (void)adjustAxisPositionForHorizontalChart;
- (bool)isAutoCrossValue;
- (unsigned int)fontIndex;
- (bool)isAutoMinimumValue;
- (bool)isAutoMaximumValue;
- (int)crossBetween;
- (double)crossesAt;
- (bool)isReverseOrder;
- (void)setScalingMinimum:(double)arg1;
- (void)setScalingMaximum:(double)arg1;
- (void)setCrossBetween:(int)arg1;
- (void)setCrossesAt:(double)arg1;
- (void)setReverseOrder:(bool)arg1;
- (id)initWithResources:(id)arg1;
- (void)setMajorGridLinesGraphicProperties:(id)arg1;
- (void)setMinorGridLinesGraphicProperties:(id)arg1;
- (void)setTickLabelColorIndex:(unsigned int)arg1;
- (void)setTickLabelRotationAngle:(double)arg1;
- (void)setTickLabelAutoRotation:(bool)arg1;
- (void)setTickLabelPosition:(int)arg1;
- (void)setMinorTickMark:(int)arg1;
- (void)setMajorTickMark:(int)arg1;
- (void)setAxisGraphicProperties:(id)arg1;
- (void)setLineVisible:(bool)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (void)setAxisPosition:(int)arg1;
- (void)setAxisType:(int)arg1;
- (void)setAxisId:(int)arg1;
- (void)setSecondary:(bool)arg1;
- (bool)isDateTimeFormattingFlag;
- (double)scalingMaximum;
- (double)scalingMinimum;
- (id)majorGridLinesGraphicProperties;
- (bool)isSecondary;
- (int)axisPosition;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (void)setDeleted:(bool)arg1;
- (bool)isDeleted;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setOrientation:(int)arg1;
- (id)font;
- (int)orientation;
- (void)dealloc;
- (void)setFont:(id)arg1;
- (int)key;

@end
