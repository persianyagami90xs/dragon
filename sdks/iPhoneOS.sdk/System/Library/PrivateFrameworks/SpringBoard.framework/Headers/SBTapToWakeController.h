//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SBFTapToWakeGestureRecognizer, SBIdleTimerDefaults;
@protocol SBTapToWakeDelegate;

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _screenOff;
    BOOL _shouldTapToWake;
    id <SBTapToWakeDelegate> _delegate;
    SBFTapToWakeGestureRecognizer *_tapToWakeGestureRecognizer;
    SBFTapToWakeGestureRecognizer *_pencilToWakeGestureRecognizer;
    SBIdleTimerDefaults *_idleTimerDefaults;
}

+ (BOOL)isTapToWakeSupported;
@property(retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults; // @synthesize idleTimerDefaults=_idleTimerDefaults;
@property(retain, nonatomic) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer; // @synthesize pencilToWakeGestureRecognizer=_pencilToWakeGestureRecognizer;
@property(retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer; // @synthesize tapToWakeGestureRecognizer=_tapToWakeGestureRecognizer;
@property(readonly, nonatomic) BOOL shouldTapToWake; // @synthesize shouldTapToWake=_shouldTapToWake;
@property(nonatomic, getter=isScreenOff) BOOL screenOff; // @synthesize screenOff=_screenOff;
@property(nonatomic) __weak id <SBTapToWakeDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pencilToWakeDidRecognize:(id)arg1;
- (void)tapToWakeDidRecognize:(id)arg1;
- (void)_evaluateEnablement;
- (id)init;

@end
