//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSOperatingSystemVersionRange : NSObject
{
    NSString *_family;
    CDStruct_f6aba300 _minimumVersion;
    CDStruct_f6aba300 _maximumVersion;
}

+ (id)defaultCloudBookmarksEligibleOperatingSystemRanges;
@property(readonly, nonatomic) CDStruct_f6aba300 maximumVersion; // @synthesize maximumVersion=_maximumVersion;
@property(readonly, nonatomic) CDStruct_f6aba300 minimumVersion; // @synthesize minimumVersion=_minimumVersion;
@property(readonly, nonatomic) NSString *family; // @synthesize family=_family;
// - (void).cxx_destruct;
- (BOOL)includesOperatingSystemVersion:(CDStruct_f6aba300)arg1 inFamily:(id)arg2;
- (id)initWithFamily:(id)arg1 minimumVersion:(CDStruct_f6aba300)arg2 maximumVersion:(CDStruct_f6aba300)arg3;

@end
