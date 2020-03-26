//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HMSettingsDelegate-Protocol.h>

@class HMSetting, HMSettings, NSSet;

@protocol HFHomeKitSettingsObserver <HMSettingsDelegate>

@optional
- (void)settings:(HMSettings *)arg1 didWriteValueForSettings:(NSSet *)arg2 failedSettings:(NSSet *)arg3;
- (void)settings:(HMSettings *)arg1 willWriteValueForSettings:(NSSet *)arg2;
- (void)settings:(HMSettings *)arg1 didUpdateSetting:(HMSetting *)arg2;
@end
