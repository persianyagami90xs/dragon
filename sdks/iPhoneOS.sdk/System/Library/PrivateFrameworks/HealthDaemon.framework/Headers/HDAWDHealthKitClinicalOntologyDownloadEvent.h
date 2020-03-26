//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDAWDHealthKitClinicalOntologyDownloadEvent : PBCodable <NSCopying>
{
    long long _currentOntologyVersion;
    long long _hoursSinceLastAssetDownload;
    NSUInteger _timestamp;
    int _downloadPhase;
    struct {
        unsigned int currentOntologyVersion:1;
        unsigned int hoursSinceLastAssetDownload:1;
        unsigned int timestamp:1;
        unsigned int downloadPhase:1;
    } _has;
}

@property(nonatomic) long long hoursSinceLastAssetDownload; // @synthesize hoursSinceLastAssetDownload=_hoursSinceLastAssetDownload;
@property(nonatomic) long long currentOntologyVersion; // @synthesize currentOntologyVersion=_currentOntologyVersion;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDownloadPhase:(id)arg1;
- (id)downloadPhaseAsString:(int)arg1;
@property(nonatomic) BOOL hasDownloadPhase;
@property(nonatomic) int downloadPhase; // @synthesize downloadPhase=_downloadPhase;
@property(nonatomic) BOOL hasHoursSinceLastAssetDownload;
@property(nonatomic) BOOL hasCurrentOntologyVersion;
@property(nonatomic) BOOL hasTimestamp;

@end
