//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFService;
@protocol OS_dispatch_queue;

@interface SFProxHandoffService : NSObject
{
    BOOL _activateCalled;
    id /* CDUnknownBlockType */ _activateCompletion;
    BOOL _invalidateCalled;
    SFService *_service;
    int _serviceState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)_serviceStart;
- (void)_completedWithError:(id)arg1;
- (void)invalidate;
- (void)_activated;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_cleanup;
- (id)description;
- (void)dealloc;
- (id)init;

@end
