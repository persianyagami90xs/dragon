//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLSecurity : NSObject
{
}

+ (BOOL)connectionIsEntitledForPhotoKit:(id)arg1;
+ (BOOL)isEntitledForPhotoKit;
+ (BOOL)containsPhotoKitEntitlement:(id)arg1;
+ (id)connection:(id)arg1 grantedEntitlements:(id)arg2;
+ (BOOL)connection:(id)arg1 hasEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valueForEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valuesForEntitlements:(id)arg2;
+ (BOOL)auditToken:(CDStruct_6ad76789)arg1 hasEntitlement:(id)arg2;
+ (BOOL)secTask:(struct __SecTask )arg1 hasEntitlement:(id)arg2;
+ (id)_secTask:(struct __SecTask )arg1 grantedEntitlements:(id)arg2;

@end
