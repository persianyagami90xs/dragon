//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, TSDCommandSelectionBehavior;

@protocol TSDLayoutManipulatingTracker
- (BOOL)operationShouldBeDynamic;
- (BOOL)supportsAlignmentGuides;
- (void)commitChangesForReps:(NSSet *)arg1;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(NSSet *)arg1;
- (void)changeDynamicLayoutsForReps:(NSSet *)arg1;

@optional
- (TSDCommandSelectionBehavior *)selectionBehaviorForReps:(NSSet *)arg1;
- (void)didEndDynamicOperationForReps:(NSSet *)arg1;
- (void)didChangeCurrentlyTransformingReps;
- (void)willBeginDynamicOperationForReps:(NSSet *)arg1;
@end
