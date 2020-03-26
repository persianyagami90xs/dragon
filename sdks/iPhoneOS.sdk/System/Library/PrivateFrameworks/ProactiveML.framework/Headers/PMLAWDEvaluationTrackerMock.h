//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLProtoBufTracker.h>

@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker
{
    PMLTrackerMockAdapter *_adapter;
}

+ (id)mockTrackerForPlanId:(NSString )arg1;
+ (id)mockTracker;
// - (void).cxx_destruct;
@property(readonly) NSArray *trackedEvaluations; // @dynamic trackedEvaluations;
- (void)clearTrackedMessages;
- (id)initWithModel:(id)arg1;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

@end
