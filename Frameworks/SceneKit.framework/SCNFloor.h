/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNFloor : SCNGeometry {
    unsigned int  _isPresentationInstance;
    double  _length;
    unsigned long long  _reflectionCategoryBitMask;
    float  _reflectionFalloffEnd;
    float  _reflectionFalloffStart;
    float  _reflectionResolutionScaleFactor;
    unsigned long long  _reflectionSampleCount;
    float  _reflectivity;
    unsigned int  _usesCustomScaleFactor;
    double  _width;
}

@property (nonatomic) double length;
@property (nonatomic) unsigned long long reflectionCategoryBitMask;
@property (nonatomic) double reflectionFalloffEnd;
@property (nonatomic) double reflectionFalloffStart;
@property (nonatomic) double reflectionResolutionScaleFactor;
@property (nonatomic) double reflectivity;
@property (nonatomic) double width;

+ (id)floor;
+ (bool)supportsSecureCoding;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct __C3DAABB {} *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned short x_10_1_1; struct { bool x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; } x_10_1_2; struct __C3DMeshElement {} *x_10_1_3; struct __C3DMeshSource {} *x_10_1_4; struct __C3DMesh {} *x_10_1_5; } x10; }*)__createCFObject;
- (void)_customDecodingOfSCNFloor:(id)arg1;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DFloor { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned char x_1_3_2[4]; unsigned int x_1_3_3; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; long long x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct __C3DAABB {} *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned short x_10_2_1; struct { bool x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; } x_10_2_2; struct __C3DMeshElement {} *x_10_2_3; struct __C3DMeshSource {} *x_10_2_4; struct __C3DMesh {} *x_10_2_5; } x_1_1_10; } x1; float x2; float x3; float x4; float x5; int x6; float x7; float x8; float x9; unsigned long long x10; }*)floorRef;
- (double)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)length;
- (unsigned long long)reflectionCategoryBitMask;
- (double)reflectionFallOffEnd;
- (double)reflectionFallOffStart;
- (double)reflectionFalloffEnd;
- (double)reflectionFalloffStart;
- (double)reflectionResolutionScaleFactor;
- (unsigned long long)reflectionSampleCount;
- (double)reflectivity;
- (void)setHeight:(double)arg1;
- (void)setLength:(double)arg1;
- (void)setReflectionCategoryBitMask:(unsigned long long)arg1;
- (void)setReflectionFallOffEnd:(double)arg1;
- (void)setReflectionFallOffStart:(double)arg1;
- (void)setReflectionFalloffEnd:(double)arg1;
- (void)setReflectionFalloffStart:(double)arg1;
- (void)setReflectionResolutionScaleFactor:(double)arg1;
- (void)setReflectionSampleCount:(unsigned long long)arg1;
- (void)setReflectivity:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
