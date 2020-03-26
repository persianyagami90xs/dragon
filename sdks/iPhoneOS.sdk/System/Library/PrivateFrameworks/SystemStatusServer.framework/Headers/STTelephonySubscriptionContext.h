//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatusServer/BSDebugDescriptionProviding-Protocol.h>

@class NSArray, NSString, STMutableTelephonyCarrierBundleInfo, STMutableTelephonyMobileEquipmentInfo, STMutableTelephonySubscriptionInfo;

@interface STTelephonySubscriptionContext : NSObject <BSDebugDescriptionProviding>
{
    BOOL _pretendingToSearch;
    STMutableTelephonySubscriptionInfo *_subscriptionInfo;
    BOOL _fakeServiceCanceled;
    BOOL _fakeRegistrationCanceled;
    BOOL _fakeCellularRegistrationCanceled;
    NSString *_cachedCTRegistrationDisplayStatus;
    NSString *_cachedCTRegistrationCellularStatus;
    NSUInteger _modemDataConnectionType;
    NSString *_cachedCTOperatorName;
    NSArray *_statusBarImages;
    STMutableTelephonyCarrierBundleInfo *_carrierBundleInfo;
    STMutableTelephonyMobileEquipmentInfo *_mobileEquipmentInfo;
}

@property(retain, nonatomic) STMutableTelephonyMobileEquipmentInfo *mobileEquipmentInfo; // @synthesize mobileEquipmentInfo=_mobileEquipmentInfo;
@property(retain, nonatomic) STMutableTelephonyCarrierBundleInfo *carrierBundleInfo; // @synthesize carrierBundleInfo=_carrierBundleInfo;
@property(copy, nonatomic) NSArray *statusBarImages; // @synthesize statusBarImages=_statusBarImages;
@property(copy, nonatomic) NSString *cachedCTOperatorName; // @synthesize cachedCTOperatorName=_cachedCTOperatorName;
@property(nonatomic) NSUInteger modemDataConnectionType; // @synthesize modemDataConnectionType=_modemDataConnectionType;
@property(copy, nonatomic) NSString *cachedCTRegistrationCellularStatus; // @synthesize cachedCTRegistrationCellularStatus=_cachedCTRegistrationCellularStatus;
@property(copy, nonatomic) NSString *cachedCTRegistrationDisplayStatus; // @synthesize cachedCTRegistrationDisplayStatus=_cachedCTRegistrationDisplayStatus;
@property(nonatomic, getter=isPretendingToSearch) BOOL pretendingToSearch; // @synthesize pretendingToSearch=_pretendingToSearch;
@property(nonatomic) BOOL fakeCellularRegistrationCanceled; // @synthesize fakeCellularRegistrationCanceled=_fakeCellularRegistrationCanceled;
@property(nonatomic) BOOL fakeRegistrationCanceled; // @synthesize fakeRegistrationCanceled=_fakeRegistrationCanceled;
@property(nonatomic) BOOL fakeServiceCanceled; // @synthesize fakeServiceCanceled=_fakeServiceCanceled;
@property(retain, nonatomic) STMutableTelephonySubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
// - (void).cxx_destruct;
- (id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFakingCellularRegistration) BOOL fakingCellularRegistration;
@property(readonly, nonatomic, getter=isFakingRegistration) BOOL fakingRegistration;
@property(readonly, nonatomic, getter=isFakingService) BOOL fakingService;

@end
