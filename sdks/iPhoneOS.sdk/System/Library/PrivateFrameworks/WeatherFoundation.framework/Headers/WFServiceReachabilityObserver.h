//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NWPathEvaluator;
@protocol OS_dispatch_queue;

@interface WFServiceReachabilityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_blockObserversForUUID;
    NSHashTable *_observerObjects;
    long long _reachability;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NWPathEvaluator *_serviceReachabilityEvaluator;
}

+ (id)sharedObserver;
@property(retain) NWPathEvaluator *serviceReachabilityEvaluator; // @synthesize serviceReachabilityEvaluator=_serviceReachabilityEvaluator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) long long reachability; // @synthesize reachability=_reachability;
@property(retain) NSHashTable *observerObjects; // @synthesize observerObjects=_observerObjects;
@property(retain) NSMutableDictionary *blockObserversForUUID; // @synthesize blockObserversForUUID=_blockObserversForUUID;
@property(retain) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
// - (void).cxx_destruct;
- (void)removeAllObservers;
- (void)_deliverReachabilityUpdate:(long long)arg1;
- (void)_setupReachability;
- (BOOL)removeBlockObserverWithHandle:(id)arg1;
- (id)addBlockObserver:(id /* CDUnknownBlockType */)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (BOOL)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) BOOL isServiceAvailable;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
