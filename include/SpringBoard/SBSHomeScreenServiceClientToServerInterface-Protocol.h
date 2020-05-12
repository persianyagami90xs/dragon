//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSMachPortSendRight, NSArray, NSNumber, NSString;

@protocol SBSHomeScreenServiceClientToServerInterface
@property(copy, nonatomic) NSNumber *lowDensityIconLayoutEnabledValue;
- (oneway void)requestSuggestedApplicationWithBundleIdentifier:(NSString *)arg1 assertionPort:(BSMachPortSendRight *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)resetHomeScreenLayoutWithCompletion:(void (^)(NSError *))arg1;
- (void)addWidgetToTodayViewWithBundleIdentifier:(NSString *)arg1;
- (NSArray *)folderPathToIconWithBundleIdentifier:(NSString *)arg1;
@end
