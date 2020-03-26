//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface ASDBetaAppVersion : NSObject <NSSecureCoding>
{
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_shortVersion;
}

+ (BOOL)supportsSecureCoding;
+ (id)versionWithBundleID:(id)arg1 bundleVersion:(id)arg2 andShortVersion:(id)arg3;
@property(copy) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
