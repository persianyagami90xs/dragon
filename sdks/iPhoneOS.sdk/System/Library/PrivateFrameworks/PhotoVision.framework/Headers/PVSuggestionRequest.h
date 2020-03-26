//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, VNCanceller;

@interface PVSuggestionRequest : NSObject
{
    long long _type;
    NSString *_requestId;
    NSMutableDictionary *_clusterFlagByClusterId;
    NSArray *_csns;
    NSArray *_cflags;
    id /* CDUnknownBlockType */ _updateHandler;
    VNCanceller *_canceller;
}

+ (id)requestWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly) VNCanceller *canceller; // @synthesize canceller=_canceller;
@property(copy) id /* CDUnknownBlockType */ updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly) NSArray *cflags; // @synthesize cflags=_cflags;
@property(readonly) NSArray *csns; // @synthesize csns=_csns;
@property(readonly) NSMutableDictionary *clusterFlagByClusterId; // @synthesize clusterFlagByClusterId=_clusterFlagByClusterId;
@property(readonly) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(id /* CDUnknownBlockType */)arg3;

@end
