//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing>
{
    void _requesters;
    void _randomIndexGenerator;
    NSUInteger _maxRunningOperationsCount;
    NSUInteger _stateCaptureHandle;
}

+ (id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
+ (void)setMaxRunningOperationsCount:(NSUInteger)arg1;
+ (NSUInteger)maxRunningOperationsCount;
- (__wrap_iter_9a08789a)_next_requester;
- (void)_startOperationsWithAvailableCount:(NSUInteger)arg1;
- (void)_startOperations;
- (void)_requester:(id)arg1 removeTileKey:(struct _GEOTileKey)arg2;
- (void)requester:(id)arg1 removeTileKey:(const struct _GEOTileKey )arg2;
- (void)_requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(struct _GEOTileKey)arg3;
- (void)requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(const struct _GEOTileKey )arg3;
- (void)_requester:(id)arg1 incrementRunningOperationsCount:(NSUInteger)arg2;
- (void)_requester:(id)arg1 updateRunningOperationsCount:(NSUInteger)arg2;
- (void)requester:(id)arg1 updateRunningOperationsCount:(NSUInteger)arg2;
- (void)_pruneEmptyRequesters;
- (void)_removeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
- (vector_49336e52 )requesters;
- (void)dealloc;
- (id)_initWithMaxRunningOperationsCount:(NSUInteger)arg1;
- (id)init;
- (id)captureStatePlistWithHints:(struct os_state_hints_s )arg1;

@end
