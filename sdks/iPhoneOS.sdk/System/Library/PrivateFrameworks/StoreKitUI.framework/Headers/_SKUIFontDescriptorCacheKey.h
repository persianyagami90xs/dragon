//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SKUIFontDescriptorCacheKey : NSObject
{
    const struct __CFString _textStyle;
    NSString *_sizeCategory;
}

@property(readonly, nonatomic) NSString *sizeCategory; // @synthesize sizeCategory=_sizeCategory;
@property(readonly, nonatomic) const struct __CFString textStyle; // @synthesize textStyle=_textStyle;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithTextStyle:(const struct __CFString )arg1 sizeCategory:(id)arg2;

@end
