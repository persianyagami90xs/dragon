//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle
{
    NSUUID *_deviceIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)arg1;
@property(readonly, copy) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destination;
- (BOOL)isLocal;
- (id)privateDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithDestination:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;

@end
