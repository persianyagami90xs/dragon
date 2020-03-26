//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDAAPPropertyInfo : NSObject
{
    NSMutableDictionary *_codeMap;
    NSMutableDictionary *_valueTypeMap;
}

+ (id)sharedContainerPropertyInfo;
+ (id)sharedItemPropertyInfo;
@property(retain, nonatomic) NSMutableDictionary *valueTypeMap; // @synthesize valueTypeMap=_valueTypeMap;
@property(retain, nonatomic) NSMutableDictionary *codeMap; // @synthesize codeMap=_codeMap;
// - (void).cxx_destruct;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;
- (id)_init;
- (long long)valueTypeForProperty:(id)arg1;
- (unsigned int)elementCodeForProperty:(id)arg1;
- (BOOL)hasInfoForProperty:(id)arg1;

@end
