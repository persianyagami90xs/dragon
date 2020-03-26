//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImageAsset, _UIImageCUIVectorGlyphContent;

@interface _UIImageSymbolLayer : NSObject
{
    UIColor *_color;
    double _scaleFactor;
    UIImageAsset *_asset;
    _UIImageCUIVectorGlyphContent *_content;
    CGPoint _offset;
}

+ (id)_symbolLayerWithName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4;
+ (id)_symbolLayerWithName:(id)arg1 color:(id)arg2;
+ (id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4;
+ (id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2;
+ (id)_symbolLayerWithImage:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4;
@property(retain, nonatomic) _UIImageCUIVectorGlyphContent *content; // @synthesize content=_content;
@property(retain, nonatomic) UIImageAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSystemImage) BOOL systemImage;
@property(readonly, nonatomic) NSString *name;

@end
