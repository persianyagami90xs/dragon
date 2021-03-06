//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBHIconAccessoryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _fontSize;
    CGSize _size;
    CGPoint _offset;
}

@property(nonatomic) CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

