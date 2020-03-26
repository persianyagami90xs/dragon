//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/CUIThemeGradientDrawing-Protocol.h>

@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing>
{
    id gradientEvaluator;
    CGFunction colorShader;
    CGColorSpace colorSpace;
    CGImage _gradientImage;
}

- (CGImage )_createRadialGradientImageWithWidth:(double)arg1 height:(double)arg2;
- (id)interpolatedColorAtLocation:(double)arg1;
- (void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(NSUInteger)arg3 withContext:(CGContext )arg4;
- (void)drawAngleGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContext )arg3;
- (void)drawRadialGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContext )arg3;
- (void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(NSUInteger)arg3;
- (void)drawInRect:(CGRect)arg1 angle:(double)arg2;
- (void)drawInRect:(CGRect)arg1 angle:(double)arg2 withContext:(CGContext )arg3;
- (CGFunction )colorShader;
- (CGFunction )_newColorShaderForDistance:(double)arg1;
- (void)dealloc;
- (int)blendMode;
- (id)fillColor;
- (BOOL)isDithered;
- (double)smoothingCoefficient;
- (id)opacityLocations;
- (id)opacityStops;
- (id)colorLocations;
- (id)colorStops;
- (void)_tintColorStopsWithEffects:(id)arg1;
- (id)_colorFromPSDGradientColor:(struct _psdGradientColor)arg1;
- (id)gradientByApplyingEffects:(id)arg1;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpace )arg9 dither:(BOOL)arg10;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpace )arg9;
- (id)_initWithGradientEvaluator:(id)arg1 colorSpace:(CGColorSpace )arg2;
- (id)_psdGradientColorStopsWithColors:(id)arg1 locations:(id)arg2 colorSpace:(CGColorSpace )arg3;
- (struct _psdGradientColor)_psdGradientColorWithColor:(id)arg1 colorSpace:(CGColorSpace )arg2;
- (id)_psdGradientOpacityStopsWithOpacities:(id)arg1 locations:(id)arg2;

@end
