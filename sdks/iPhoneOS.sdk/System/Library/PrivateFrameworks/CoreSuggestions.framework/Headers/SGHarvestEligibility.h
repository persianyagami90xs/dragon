//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGHarvestEligibility : NSObject
{
}

+ (id /* CDUnknownBlockType */)genericItemEligibleBlock;
+ (id /* CDUnknownBlockType */)genericItemIneligibleBlock;
+ (id /* CDUnknownBlockType */)messagesAppItemEligibilityCheckBlock;
+ (id /* CDUnknownBlockType */)mailAppItemEligibilityCheckBlock;
+ (BOOL)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(BOOL )arg2;
+ (BOOL)searchableItemIsEligibleForDissectorPipeline:(id)arg1;
+ (BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)arg1;

@end
