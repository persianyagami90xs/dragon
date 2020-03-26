//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

__attribute__((visibility("hidden")))
@interface _UIMotionAnalyzer : NSObject
{
    _UIMotionAnalyzerSettings *_settings;
    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;
}

@property(readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose; // @synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose;
@property(readonly, nonatomic) _UIMotionAnalyzerSettings *settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
- (void)resetHysteresis;
- (void)updateHistory;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL )arg4 logger:(id)arg5;
- (void)reset;
- (void)updateWithEvent:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSettings:(id)arg1;

@end
