//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIImage.h"

__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage
{
    BOOL _alwaysStretches;
    BOOL _isSubimage;
    UIEdgeInsets _subimageInsets;
    UIEdgeInsets _capInsets;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (id)_resizableImageWithCapMask:(int)arg1;
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (BOOL)_isResizable;
- (BOOL)_isSubimage;
- (CGRect)_contentRectInPixels;
- (CGRect)_contentStretchInPixels;
- (CGRect)_contentInsetsInPixels:(UIEdgeInsets)arg1 emptySizeFallback:(id /* CDUnknownBlockType */)arg2;
- (long long)resizingMode;
- (void)_setSubimageInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)capInsets;
- (void)_setCapInsets:(UIEdgeInsets)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 capInsets:(UIEdgeInsets)arg2;
- (void)_configureImage:(id)arg1 assumePreconfigured:(BOOL)arg2;
- (BOOL)_suppressesAccessibilityHairlineThickening;

@end
