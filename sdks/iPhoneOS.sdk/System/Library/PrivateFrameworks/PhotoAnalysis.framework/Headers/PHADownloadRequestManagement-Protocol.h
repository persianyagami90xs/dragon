//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PHPhotoLibrary;

@protocol PHADownloadRequestManagement <NSObject>
@property NSUInteger expectedRequestsCount;
- (void)requestPermissionToDownloadWithPhotoLibrary:(PHPhotoLibrary *)arg1 completionHandler:(void (^)(BOOL, NSDate *))arg2;
@end
