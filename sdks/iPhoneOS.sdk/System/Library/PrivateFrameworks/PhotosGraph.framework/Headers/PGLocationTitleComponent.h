//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, PGGraphEdge, PGGraphNode;

@interface PGLocationTitleComponent : NSObject
{
    NSMutableSet *_addressNodes;
    float _weight;
    PGGraphNode *_node;
    PGGraphEdge *_edge;
    double _timestampStart;
    NSUInteger _type;
    NSString *_personName;
}

@property(nonatomic) NSString *personName; // @synthesize personName=_personName;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) double timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSSet *addressNodes; // @synthesize addressNodes=_addressNodes;
@property(retain, nonatomic) PGGraphEdge *edge; // @synthesize edge=_edge;
@property(retain, nonatomic) PGGraphNode *node; // @synthesize node=_node;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)updateWithMomentNodes:(id)arg1;
- (BOOL)canMergeWithTitleComponent:(id)arg1;
- (void)addAddressNode:(id)arg1;
- (id)init;

@end
