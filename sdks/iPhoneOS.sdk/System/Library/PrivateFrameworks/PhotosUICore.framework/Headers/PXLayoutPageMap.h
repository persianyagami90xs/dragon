//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface PXLayoutPageMap : NSObject
{
    NSMapTable *_pageMap;
    NSArray *_sources;
    CGRect _contentRect;
}

// - (void).cxx_destruct;
- (void)_mapSources:(id)arg1;
- (id)sourcesFromRect:(CGRect)arg1;
- (id)_screenPageForPoint:(CGPoint)arg1;
- (id)description;
- (id)initWithSources:(id)arg1 contentRect:(CGRect)arg2;

@end
