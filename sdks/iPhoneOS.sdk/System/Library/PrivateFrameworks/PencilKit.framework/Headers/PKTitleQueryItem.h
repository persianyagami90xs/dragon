//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKTitleQueryItem : NSObject
{
    NSString *_transcribedTitle;
    CGRect _bounds;
}

@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSString *transcribedTitle; // @synthesize transcribedTitle=_transcribedTitle;
// - (void).cxx_destruct;
- (id)initWithTranscribedTitle:(id)arg1 bounds:(CGRect)arg2;

@end
