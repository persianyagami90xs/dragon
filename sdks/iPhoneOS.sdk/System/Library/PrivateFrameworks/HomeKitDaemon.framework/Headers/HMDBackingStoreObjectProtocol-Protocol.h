//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDBackingStoreModelObject, HMFMessage;

@protocol HMDBackingStoreObjectProtocol <NSObject>
- (void)transactionObjectRemoved:(HMDBackingStoreModelObject *)arg1 message:(HMFMessage *)arg2;
- (void)transactionObjectUpdated:(HMDBackingStoreModelObject *)arg1 newValues:(HMDBackingStoreModelObject *)arg2 message:(HMFMessage *)arg3;
@end
