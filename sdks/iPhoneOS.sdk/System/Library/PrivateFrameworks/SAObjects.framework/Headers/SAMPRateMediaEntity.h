//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPRateMediaEntity : SABaseClientBoundCommand
{
}

+ (id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rateMediaEntity;
- (BOOL)requiresResponse;
@property(nonatomic) long long rating;
@property(copy, nonatomic) NSString *hashedRouteUID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
