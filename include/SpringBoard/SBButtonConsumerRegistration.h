//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBButtonConsumerClient;

@interface SBButtonConsumerRegistration : NSObject
{
    SBButtonConsumerClient *_client;
    long long _buttonKind;
    NSUInteger _eventMask;
    long long _eventPriority;
}

@property(nonatomic) long long eventPriority; // @synthesize eventPriority=_eventPriority;
@property(nonatomic) NSUInteger eventMask; // @synthesize eventMask=_eventMask;
@property(nonatomic) long long buttonKind; // @synthesize buttonKind=_buttonKind;
@property(nonatomic) __weak SBButtonConsumerClient *client; // @synthesize client=_client;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

