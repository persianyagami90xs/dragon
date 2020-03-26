//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTimer, FBSDisplayLayoutMonitor, NSHashTable, RBSAssertion, RBSProcessHandle, SPUIAppService;
@protocol OS_dispatch_queue;

@interface SPUISpotlightSceneManager : NSObject
{
    SPUIAppService *_appService;
    NSHashTable *_managedScenes;
    NSHashTable *_foregroundScenes;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    BSTimer *_watchdogTimer;
    RBSProcessHandle *_spotlightProcessHandle;
    RBSAssertion *_initializationAssertions;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) RBSAssertion *initializationAssertions; // @synthesize initializationAssertions=_initializationAssertions;
@property(retain) RBSProcessHandle *spotlightProcessHandle; // @synthesize spotlightProcessHandle=_spotlightProcessHandle;
@property(retain) BSTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(retain) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(retain) NSHashTable *foregroundScenes; // @synthesize foregroundScenes=_foregroundScenes;
@property(retain) NSHashTable *managedScenes; // @synthesize managedScenes=_managedScenes;
// - (void).cxx_destruct;
- (void)applyAssertionAsNeeded;
- (void)sceneWillBackground:(id)arg1;
- (void)sceneWillForeground:(id)arg1;
- (void)removeScene:(id)arg1;
- (void)addScene:(id)arg1;
- (void)launchSpotlightIfNeededWithForegroundPriority:(BOOL)arg1;
- (id)init;

@end
