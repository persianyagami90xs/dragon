//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDCameraSnapshotRemoteRelaySender, HMDCameraSnapshotSessionID, NSError;

@protocol HMDCameraSnapshotRemoteRelaySenderDelegate <NSObject>
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end
