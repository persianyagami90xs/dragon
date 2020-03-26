//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaServerEventMetadata : PBCodable
{
    NSData *_turnID;
    long long _timestampNs;
    NSData *_siriDeviceID;
    NSString *_serverPod;
}

@property(copy, nonatomic) NSString *serverPod; // @synthesize serverPod=_serverPod;
@property(copy, nonatomic) NSData *siriDeviceID; // @synthesize siriDeviceID=_siriDeviceID;
@property(nonatomic) long long timestampNs; // @synthesize timestampNs=_timestampNs;
@property(copy, nonatomic) NSData *turnID; // @synthesize turnID=_turnID;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
