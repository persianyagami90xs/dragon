//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMBShareUserID, HMDCloudShareTrustManager, NSUUID;

@protocol HMDCloudShareTrustManagerDelegate <NSObject>
- (void)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 didRemoveUserWithUUID:(NSUUID *)arg2;
- (void)didRemoveTrustZoneInCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (void)didFinishConfiguringForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (void)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 didFetchOwnerCloudShareID:(HMBShareUserID *)arg2;
@end
