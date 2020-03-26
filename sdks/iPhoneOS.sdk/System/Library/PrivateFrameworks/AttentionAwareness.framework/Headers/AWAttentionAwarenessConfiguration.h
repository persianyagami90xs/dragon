//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSSet, NSString;
@protocol NSCopying;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    BOOL _samplingDelayExplicitlySet;
    BOOL _attentionLostEventMaskExplicitlySet;
    NSUInteger _tagIndex;
    NSSet *_allowedHIDEventsForRemoteEvent;
    BOOL _sampleWhileAbsent;
    NSString *_identifier;
    id <NSCopying> _tag;
    NSUInteger _notificationMask;
    NSUInteger _eventMask;
    NSUInteger _attentionLostEventMask;
    double _samplingInterval;
    double _samplingDelay;
}

+ (void)cancelNotification:(struct AWNotification_s )arg1;
+ (struct AWNotification_s )notifySupportedEventsChangedWithQueue:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (id)supportedEventsString;
+ (NSUInteger)supportedEvents;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(nonatomic) BOOL sampleWhileAbsent; // @synthesize sampleWhileAbsent=_sampleWhileAbsent;
@property(nonatomic) double samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(nonatomic) NSUInteger attentionLostEventMask; // @synthesize attentionLostEventMask=_attentionLostEventMask;
@property(nonatomic) NSUInteger eventMask; // @synthesize eventMask=_eventMask;
@property(nonatomic) NSUInteger notificationMask; // @synthesize notificationMask=_notificationMask;
@property(copy, nonatomic) id <NSCopying> tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)setAllowedHIDEventsForRemoteEvent:(id)arg1;
- (id)allowedHIDEventsForRemoteEvent;
@property(copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;
@property(copy, nonatomic) NSSet *attentionLostTimeouts; // @dynamic attentionLostTimeouts;
- (void)setAttentionLostTimeout:(double)arg1;
- (NSUInteger)tagIndex;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (BOOL)validateWithError:(id )arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
