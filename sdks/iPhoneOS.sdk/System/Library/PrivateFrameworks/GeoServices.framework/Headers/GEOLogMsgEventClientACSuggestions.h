//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_entries;
    long long _overallLatencyInMs;
    NSMutableArray *_queryTokens;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _keypressStatus;
    int _selectedIndex;
    int _selectedSectionIndex;
    int _trigger;
    int _withinSectionSelectedIndex;
    BOOL _isRerankerTriggered;
    BOOL _isRetainedQuery;
    BOOL _shouldDifferentiateClientAndServerResults;
    struct {
        unsigned int has_overallLatencyInMs:1;
        unsigned int has_keypressStatus:1;
        unsigned int has_selectedIndex:1;
        unsigned int has_selectedSectionIndex:1;
        unsigned int has_trigger:1;
        unsigned int has_withinSectionSelectedIndex:1;
        unsigned int has_isRerankerTriggered:1;
        unsigned int has_isRetainedQuery:1;
        unsigned int has_shouldDifferentiateClientAndServerResults:1;
        unsigned int read_entries:1;
        unsigned int read_queryTokens:1;
        unsigned int read_query:1;
        unsigned int wrote_entries:1;
        unsigned int wrote_overallLatencyInMs:1;
        unsigned int wrote_queryTokens:1;
        unsigned int wrote_query:1;
        unsigned int wrote_keypressStatus:1;
        unsigned int wrote_selectedIndex:1;
        unsigned int wrote_selectedSectionIndex:1;
        unsigned int wrote_trigger:1;
        unsigned int wrote_withinSectionSelectedIndex:1;
        unsigned int wrote_isRerankerTriggered:1;
        unsigned int wrote_isRetainedQuery:1;
        unsigned int wrote_shouldDifferentiateClientAndServerResults:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)entriesType;
+ (Class)queryTokensType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasShouldDifferentiateClientAndServerResults;
@property(nonatomic) BOOL shouldDifferentiateClientAndServerResults;
@property(nonatomic) BOOL hasOverallLatencyInMs;
@property(nonatomic) long long overallLatencyInMs;
@property(nonatomic) BOOL hasIsRerankerTriggered;
@property(nonatomic) BOOL isRerankerTriggered;
@property(nonatomic) BOOL hasIsRetainedQuery;
@property(nonatomic) BOOL isRetainedQuery;
@property(nonatomic) BOOL hasSelectedSectionIndex;
@property(nonatomic) int selectedSectionIndex;
@property(nonatomic) BOOL hasWithinSectionSelectedIndex;
@property(nonatomic) int withinSectionSelectedIndex;
- (int)StringAsKeypressStatus:(id)arg1;
- (id)keypressStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasKeypressStatus;
@property(nonatomic) int keypressStatus;
- (int)StringAsTrigger:(id)arg1;
- (id)triggerAsString:(int)arg1;
@property(nonatomic) BOOL hasTrigger;
@property(nonatomic) int trigger;
@property(nonatomic) BOOL hasSelectedIndex;
@property(nonatomic) int selectedIndex;
- (id)entriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)entriesCount;
- (void)_addNoFlagsEntries:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
@property(retain, nonatomic) NSMutableArray *entries;
- (void)_readEntries;
- (id)queryTokensAtIndex:(NSUInteger)arg1;
- (NSUInteger)queryTokensCount;
- (void)_addNoFlagsQueryTokens:(id)arg1;
- (void)addQueryTokens:(id)arg1;
- (void)clearQueryTokens;
@property(retain, nonatomic) NSMutableArray *queryTokens;
- (void)_readQueryTokens;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)_readQuery;
- (id)initWithData:(id)arg1;
- (id)init;

@end
