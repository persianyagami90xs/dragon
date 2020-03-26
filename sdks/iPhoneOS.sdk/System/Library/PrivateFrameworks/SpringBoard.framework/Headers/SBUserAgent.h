//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIUserAgent_Internal-Protocol.h>

@class NSMutableDictionary, SBIdleTimerPolicyAggregator;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal>
{
    NSMutableDictionary *_idleTimerDisableAssertions;
    SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
}

@property(retain, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator; // @synthesize _idleTimerPolicyAggregator;
// - (void).cxx_destruct;
@property(nonatomic) long long softwareUpdatePasscodePolicyType;
- (id)topSuspendedEventsOnlyDisplayID;
- (BOOL)isInternalInstall;
- (struct __CFRunLoop )wifiRunLoopRef;
- (void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
- (id)localizedDisplayNameForDisplayID:(id)arg1;
- (BOOL)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(BOOL)arg2;
- (void)removeActiveInterfaceOrientationObserver:(id)arg1;
- (void)addActiveInterfaceOrientationObserver:(id)arg1;
- (void)activateModalBulletinAlert:(id)arg1;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (id)folderNameForDisplayID:(id)arg1;
- (void)setIdleText:(id)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)removeIdleTimerHandler:(id)arg1;
- (void)addIdleTimerHandler:(id)arg1;
- (BOOL)isIdleTimerDisabledForReason:(id)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)notifyOnNextUserEvent;
- (BOOL)isScreenOn;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 andDimScreen:(BOOL)arg2;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1;
- (void)lockAndDimDevice;
- (void)undimScreen;
- (BOOL)isApplicationRestrictedOrHidden:(id)arg1;
- (BOOL)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 animate:(BOOL)arg5;
- (BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4;
- (BOOL)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
- (BOOL)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
- (BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (BOOL)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(BOOL)arg4 options:(id)arg5;
- (void)_cleanupFromBannerLaunch;
- (id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3;
- (BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)lockScreenIsShowing;
- (BOOL)deviceIsTethered;
- (BOOL)deviceIsBlocked;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsLocked;
- (BOOL)springBoardIsActive;
- (BOOL)applicationInstalledForDisplayID:(id)arg1;
- (BOOL)isApplicationForegroundObscured:(id)arg1;
- (id)foregroundApplicationDisplayID;
- (long long)activeInterfaceOrientation;
- (void)updateInterfaceOrientationIfNecessary;
- (id)init;

@end
