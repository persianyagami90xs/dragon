//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _values;
    float _bucketSize;
    float _minValue;
    struct {
        unsigned int bucketSize:1;
        unsigned int minValue:1;
    } _has;
}

+ (id)quantizedDenseVectorFromDenseVector:(id)arg1 numberOfBuckets:(NSUInteger)arg2;
@property(nonatomic) float bucketSize; // @synthesize bucketSize=_bucketSize;
@property(nonatomic) float minValue; // @synthesize minValue=_minValue;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBucketSize;
@property(nonatomic) BOOL hasMinValue;
- (void)setValues:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)valuesAtIndex:(NSUInteger)arg1;
- (void)addValues:(unsigned int)arg1;
- (void)clearValues;
@property(readonly, nonatomic) unsigned int values;
@property(readonly, nonatomic) NSUInteger valuesCount;
- (void)dealloc;
- (float)originalValueAtIndex:(NSUInteger)arg1;

@end
