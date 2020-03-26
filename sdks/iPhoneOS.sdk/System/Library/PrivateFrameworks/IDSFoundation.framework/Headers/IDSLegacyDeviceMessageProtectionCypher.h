//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/ENCypher-Protocol.h>

@class IDSMPPublicLegacyIdentity, NSString;

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher>
{
    IDSMPPublicLegacyIdentity *_publicIdentity;
}

+ (BOOL)supportsSecureCoding;
+ (id)cypherWithEndpoint:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) IDSMPPublicLegacyIdentity *publicIdentity; // @synthesize publicIdentity=_publicIdentity;
// - (void).cxx_destruct;
- (id)_fullIdentityFromAccountIdentity:(id)arg1 error:(id )arg2;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id )arg5;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id )arg3 error:(id )arg4;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPublicIdentity:(id)arg1;

@end
