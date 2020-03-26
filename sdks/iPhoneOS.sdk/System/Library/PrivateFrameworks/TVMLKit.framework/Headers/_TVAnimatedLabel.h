//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVLabel.h>

@class CALayer, NSArray, __TVAnimatedImageView;

@interface _TVAnimatedLabel : _TVLabel
{
    BOOL _crossfading;
    BOOL _marqueeNeeded;
    BOOL _marqueeing;
    BOOL _starting;
    BOOL _stopping;
    CALayer *_maskLayer;
    BOOL _animating;
    BOOL _paused;
    float _scrollRate;
    double _marqueeDelay;
    double _replicationPadding;
    double _maskCapWidth;
    double _crossfadeDuration;
    NSArray *_attributedStrings;
    NSUInteger _currentAttributedStringIndex;
    double _underPosterOutset;
    __TVAnimatedImageView *_currentMarqueeView;
    __TVAnimatedImageView *_nextMarqueeView;
}

@property(readonly, nonatomic) __weak __TVAnimatedImageView *nextMarqueeView; // @synthesize nextMarqueeView=_nextMarqueeView;
@property(readonly, nonatomic) __weak __TVAnimatedImageView *currentMarqueeView; // @synthesize currentMarqueeView=_currentMarqueeView;
@property(nonatomic) double underPosterOutset; // @synthesize underPosterOutset=_underPosterOutset;
@property(readonly, nonatomic) NSUInteger currentAttributedStringIndex; // @synthesize currentAttributedStringIndex=_currentAttributedStringIndex;
@property(copy, nonatomic) NSArray *attributedStrings; // @synthesize attributedStrings=_attributedStrings;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) float scrollRate; // @synthesize scrollRate=_scrollRate;
@property(nonatomic) double maskCapWidth; // @synthesize maskCapWidth=_maskCapWidth;
@property(nonatomic) double replicationPadding; // @synthesize replicationPadding=_replicationPadding;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
// - (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)setMarqueeRunning:(BOOL)arg1;
- (void)setMarqueeEnabled:(BOOL)arg1;
- (void)_startMarqueeIfNeeded;
- (BOOL)_shouldCycle;
- (void)_prepareNextMarqueeWithDelay:(double)arg1;
- (id)_rasterizedTextWithMarquee:(BOOL)arg1;
- (void)drawTextInRect:(CGRect)arg1;
- (BOOL)_isRTL;
- (void)stopAndResetScrollWithDuration:(double)arg1;
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;
- (void)stopAnimating;
- (void)_clearAnimations;
- (void)setNeedsDisplay;
- (void)setHighlighted:(BOOL)arg1;
- (void)_clearAttributedStrings;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
