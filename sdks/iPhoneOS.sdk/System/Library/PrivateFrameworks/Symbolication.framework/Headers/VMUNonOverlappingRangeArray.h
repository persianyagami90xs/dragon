//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMURangeArray.h>

@interface VMUNonOverlappingRangeArray : VMURangeArray
{
}

- (id)subtract:(id)arg1 mergeRanges:(BOOL)arg2;
- (void)_mergeAllBitsOfRange:(struct _VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(BOOL)arg3;
- (void)mergeRanges:(id)arg1 excludingRanges:(id)arg2;
- (void)mergeRange:(struct _VMURange)arg1 excludingRanges:(id)arg2;
- (void)mergeRanges:(id)arg1;
- (void)mergeRange:(struct _VMURange)arg1;
- (void)sortAndMergeRanges;
- (void)addOrExtendRange:(struct _VMURange)arg1;

@end
