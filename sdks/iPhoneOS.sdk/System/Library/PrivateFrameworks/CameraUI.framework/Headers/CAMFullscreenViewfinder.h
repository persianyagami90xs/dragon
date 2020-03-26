//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMAccessibilityHUDItemProvider-Protocol.h>
#import <CameraUI/CAMAdditiveAnimatorDelegate-Protocol.h>
#import <CameraUI/CAMBarsAccessibilityHUDManagerGestureProvider-Protocol.h>
#import <CameraUI/CAMControlDrawerPresentationDelegate-Protocol.h>
#import <CameraUI/CAMInstructionLabelDelegate-Protocol.h>
#import <CameraUI/CAMViewfinderTransitionable-Protocol.h>
#import <CameraUI/CEKBadgeViewDelegate-Protocol.h>

@class AVSpatialOverCaptureVideoPreviewLayer, CAMAdditiveAnimator, CAMBadgeTray, CAMCTMDescriptionOverlayView, CAMControlDrawer, CAMControlStatusBar, CAMCreativeCameraButton, CAMDynamicShutterControl, CAMElapsedTimeView, CAMFilterNameBadge, CAMFlipButton, CAMFullscreenModeSelector, CAMFullscreenViewfinderLayout, CAMImageWell, CAMLowLightInstructionLabel, CAMModeDial, CAMModeIndicatorView, CAMPanoramaView, CAMPortraitModeDescriptionOverlayView, CAMPortraitModeInstructionLabel, CAMPreviewView, CAMQRCodeInstructionLabel, CAMTimerIndicatorView, CAMViewfinderReticleView, CAMZoomControl, CEKLightingControl, CEKLightingNameBadge, NSString, UILongPressGestureRecognizer;
@protocol CAMFullscreenViewfinderDelegate;

@interface CAMFullscreenViewfinder : UIView <CAMAdditiveAnimatorDelegate, CAMControlDrawerPresentationDelegate, CEKBadgeViewDelegate, CAMInstructionLabelDelegate, CAMViewfinderTransitionable, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider>
{
    BOOL _controlDrawerAllowed;
    BOOL _modeUIAllowed;
    BOOL _controlDrawerExpanded;
    BOOL _flipButtonVisible;
    BOOL _zoomControlVisible;
    BOOL _elapsedTimeViewVisible;
    BOOL _timerIndicatorVisible;
    BOOL _qrCodeLabelVisible;
    BOOL _lowLightInstructionLabelVisible;
    BOOL _portraitControlsAllowed;
    BOOL __usingCreativeCameraControls;
    BOOL __controlDrawerPresentedModally;
    id <CAMFullscreenViewfinderDelegate> _delegate;
    NSString *_contentSize;
    CAMPreviewView *_previewView;
    long long _previewViewOrientation;
    long long _orientation;
    CAMControlDrawer *_controlDrawer;
    CAMDynamicShutterControl *_shutterControl;
    CAMControlStatusBar *_controlStatusBar;
    CAMBadgeTray *_badgeTray;
    CAMModeDial *_modeDial;
    CAMModeIndicatorView *_modeIndicator;
    CAMFullscreenModeSelector *_modeSelector;
    CAMFlipButton *_flipButton;
    CAMImageWell *_imageWell;
    CAMZoomControl *_zoomControl;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMTimerIndicatorView *_timerIndicator;
    CAMPanoramaView *_panoramaView;
    CAMCreativeCameraButton *_creativeCameraButton;
    CAMFilterNameBadge *_filterNameBadge;
    long long _shallowDepthOfFieldStatus;
    CEKLightingControl *_lightingControl;
    CEKLightingNameBadge *_lightingNameBadge;
    CAMPortraitModeInstructionLabel *_portraitInstructionLabel;
    long long _viewportAspectRatio;
    UILongPressGestureRecognizer *_modeSelectorGestureRecognizer;
    CAMQRCodeInstructionLabel *_qrCodeInstructionLabel;
    CAMPortraitModeDescriptionOverlayView *_portraitModeOverlayView;
    CAMCTMDescriptionOverlayView *_ctmOverlayView;
    UIView *__previewContainerView;
    UIView *__modeClippingView;
    CAMViewfinderReticleView *__reticleView;
    CAMLowLightInstructionLabel *__lowLightInstructionLabel;
    CAMFullscreenViewfinderLayout *__layout;
    AVSpatialOverCaptureVideoPreviewLayer *__overCapturePreviewLayer;
    CAMAdditiveAnimator *__viewportAnimator;
}

+ (id)darkControlBackgroundColor;
+ (id)lightControlBackgroundColor;
@property(readonly, nonatomic) CAMAdditiveAnimator *_viewportAnimator; // @synthesize _viewportAnimator=__viewportAnimator;
@property(retain, nonatomic, setter=_setOverCapturePreviewLayer:) AVSpatialOverCaptureVideoPreviewLayer *_overCapturePreviewLayer; // @synthesize _overCapturePreviewLayer=__overCapturePreviewLayer;
@property(nonatomic, getter=_isControlDrawerPresentedModally, setter=_setControlDrawerPresentedModally:) BOOL _controlDrawerPresentedModally; // @synthesize _controlDrawerPresentedModally=__controlDrawerPresentedModally;
@property(nonatomic, getter=_isUsingCreativeCameraControls, setter=_setUsingCreativeCameraControls:) BOOL _usingCreativeCameraControls; // @synthesize _usingCreativeCameraControls=__usingCreativeCameraControls;
@property(readonly, nonatomic) CAMFullscreenViewfinderLayout *_layout; // @synthesize _layout=__layout;
@property(retain, nonatomic, setter=_setLowLightInstructionLabel:) CAMLowLightInstructionLabel *_lowLightInstructionLabel; // @synthesize _lowLightInstructionLabel=__lowLightInstructionLabel;
@property(readonly, nonatomic) CAMViewfinderReticleView *_reticleView; // @synthesize _reticleView=__reticleView;
@property(readonly, nonatomic) UIView *_modeClippingView; // @synthesize _modeClippingView=__modeClippingView;
@property(readonly, nonatomic) UIView *_previewContainerView; // @synthesize _previewContainerView=__previewContainerView;
@property(retain, nonatomic, setter=setCTMOverlayView:) CAMCTMDescriptionOverlayView *ctmOverlayView; // @synthesize ctmOverlayView=_ctmOverlayView;
@property(retain, nonatomic) CAMPortraitModeDescriptionOverlayView *portraitModeOverlayView; // @synthesize portraitModeOverlayView=_portraitModeOverlayView;
@property(readonly, nonatomic) CAMQRCodeInstructionLabel *qrCodeInstructionLabel; // @synthesize qrCodeInstructionLabel=_qrCodeInstructionLabel;
@property(readonly, nonatomic) UILongPressGestureRecognizer *modeSelectorGestureRecognizer; // @synthesize modeSelectorGestureRecognizer=_modeSelectorGestureRecognizer;
@property(nonatomic) long long viewportAspectRatio; // @synthesize viewportAspectRatio=_viewportAspectRatio;
@property(readonly, nonatomic) CAMPortraitModeInstructionLabel *portraitInstructionLabel; // @synthesize portraitInstructionLabel=_portraitInstructionLabel;
@property(readonly, nonatomic) CEKLightingNameBadge *lightingNameBadge; // @synthesize lightingNameBadge=_lightingNameBadge;
@property(readonly, nonatomic) CEKLightingControl *lightingControl; // @synthesize lightingControl=_lightingControl;
@property(nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;
@property(nonatomic, getter=isPortraitControlsAllowed) BOOL portraitControlsAllowed; // @synthesize portraitControlsAllowed=_portraitControlsAllowed;
@property(readonly, nonatomic) CAMFilterNameBadge *filterNameBadge; // @synthesize filterNameBadge=_filterNameBadge;
@property(readonly, nonatomic) CAMCreativeCameraButton *creativeCameraButton; // @synthesize creativeCameraButton=_creativeCameraButton;
@property(retain, nonatomic) CAMPanoramaView *panoramaView; // @synthesize panoramaView=_panoramaView;
@property(retain, nonatomic, setter=_setTimerIndicator:) CAMTimerIndicatorView *timerIndicator; // @synthesize timerIndicator=_timerIndicator;
@property(readonly, nonatomic) CAMElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property(readonly, nonatomic) CAMZoomControl *zoomControl; // @synthesize zoomControl=_zoomControl;
@property(readonly, nonatomic) CAMImageWell *imageWell; // @synthesize imageWell=_imageWell;
@property(readonly, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property(readonly, nonatomic) CAMFullscreenModeSelector *modeSelector; // @synthesize modeSelector=_modeSelector;
@property(readonly, nonatomic) CAMModeIndicatorView *modeIndicator; // @synthesize modeIndicator=_modeIndicator;
@property(readonly, nonatomic) CAMModeDial *modeDial; // @synthesize modeDial=_modeDial;
@property(readonly, nonatomic) CAMBadgeTray *badgeTray; // @synthesize badgeTray=_badgeTray;
@property(readonly, nonatomic) CAMControlStatusBar *controlStatusBar; // @synthesize controlStatusBar=_controlStatusBar;
@property(readonly, nonatomic) CAMDynamicShutterControl *shutterControl; // @synthesize shutterControl=_shutterControl;
@property(retain, nonatomic, setter=_setControlDrawer:) CAMControlDrawer *controlDrawer; // @synthesize controlDrawer=_controlDrawer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long previewViewOrientation; // @synthesize previewViewOrientation=_previewViewOrientation;
@property(retain, nonatomic) CAMPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic, getter=isLowLightInstructionLabelVisible) BOOL lowLightInstructionLabelVisible; // @synthesize lowLightInstructionLabelVisible=_lowLightInstructionLabelVisible;
@property(readonly, nonatomic, getter=isQRCodeLabelVisible) BOOL qrCodeLabelVisible; // @synthesize qrCodeLabelVisible=_qrCodeLabelVisible;
@property(nonatomic, getter=isTimerIndicatorVisible) BOOL timerIndicatorVisible; // @synthesize timerIndicatorVisible=_timerIndicatorVisible;
@property(nonatomic, getter=isElapsedTimeViewVisible) BOOL elapsedTimeViewVisible; // @synthesize elapsedTimeViewVisible=_elapsedTimeViewVisible;
@property(nonatomic, getter=isZoomControlVisible) BOOL zoomControlVisible; // @synthesize zoomControlVisible=_zoomControlVisible;
@property(nonatomic, getter=isFlipButtonVisible) BOOL flipButtonVisible; // @synthesize flipButtonVisible=_flipButtonVisible;
@property(nonatomic, getter=isControlDrawerExpanded) BOOL controlDrawerExpanded; // @synthesize controlDrawerExpanded=_controlDrawerExpanded;
@property(readonly, nonatomic, getter=isModeUIAllowed) BOOL modeUIAllowed; // @synthesize modeUIAllowed=_modeUIAllowed;
@property(readonly, nonatomic, getter=isControlDrawerAllowed) BOOL controlDrawerAllowed; // @synthesize controlDrawerAllowed=_controlDrawerAllowed;
@property(retain, nonatomic) NSString *contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) __weak id <CAMFullscreenViewfinderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)_iterateViewsForHUDManager:(id)arg1 withItemFoundBlock:(id /* CDUnknownBlockType */)arg2;
- (id)touchingRecognizersToCancel;
- (void)prepareForResumingUsingCrossfade;
- (void)removeInflightBlurAnimations;
- (void)setReticleMaskingStyle:(long long)arg1 withDuration:(double)arg2;
@property(nonatomic) CGSize panoramaCaptureSize;
- (void)setLowLightInstructionLabelVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTimerIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setElapsedTimeViewVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setZoomControlVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFlipButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateControlsForContentSize;
- (void)setControlDrawerAllowed:(BOOL)arg1 modeUIAllowed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_transitionView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (NSUInteger)_badgeFontStyle;
- (void)_updateTintColors;
- (id)_visibleInstructionLabel;
- (void)_updateSubviewsVisibilityAnimated:(BOOL)arg1;
- (BOOL)_showFilterNameBadge;
- (BOOL)_showLandscapeLightingBadge;
- (BOOL)_showPortraitInstructions;
- (BOOL)_showPortraitControls;
- (BOOL)_showModeView;
- (BOOL)_showControlDrawer;
- (void)controlDrawer:(id)arg1 didChangeExpanded:(BOOL)arg2 forControlType:(long long)arg3 animated:(BOOL)arg4;
- (void)dismissModalControlDrawerIfNeeded;
- (BOOL)isControlDrawerPresentedModallyWithControlType:(long long)arg1;
- (void)presentControlDrawerModally:(BOOL)arg1 withControlType:(long long)arg2;
- (void)setControlDrawerExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_handleDirectionIndicatorTapped;
- (void)setQRCodeLabelVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)loadQRCodeInstructionLabelIfNeeded;
@property(readonly, nonatomic) long long desiredAspectRatio;
- (void)setViewportAspectRatio:(long long)arg1 animated:(BOOL)arg2;
- (void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (void)_loadFilterControlsIfNeeded;
- (void)_loadPortraitControlsIfNeeded;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(BOOL)arg2;
- (void)setPortraitControlsAllowed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_layoutPanoramaView;
- (CDStruct_d54ccef3)_geometryForBottomCenteredView:(id)arg1;
- (CDStruct_d54ccef3)_geometryForLandscapeLightingBadge;
- (CDStruct_d54ccef3)_geometryForInstructionLabel:(id)arg1;
- (CGRect)_frameForLightingControl;
- (CGRect)_frameForModeView;
- (CGRect)_frameForImageWell;
- (CGRect)_frameForFlipButton;
- (CGRect)_frameForControlDrawer;
- (CDStruct_d54ccef3)_geometryForBadgeTray;
- (void)_layoutZoomControl;
- (CGRect)_frameForReticleViewport;
- (void)_updateModeDialClippingForViewportFrame:(CGRect)arg1;
- (void)_updateReticleForViewportFrame:(CGRect)arg1;
- (void)_updatePreviewLayerForPreviewFrame:(CGRect)arg1 viewportFrame:(CGRect)arg2;
- (CGRect)_frameForPreviewView;
- (void)_applyAnimationSensitiveGeometry:(CDStruct_d54ccef3)arg1 toView:(id)arg2;
- (CGRect)_currentFourThreeViewportFrame;
- (void)_setNeedsLayoutAnimated:(BOOL)arg1;
@property(readonly, nonatomic, getter=isReticleAnimating) BOOL reticleAnimating;
- (void)animator:(id)arg1 didUpdateValuesForKeys:(id)arg2;
- (void)_setViewportAnimatorFrame:(CGRect)arg1 withDuration:(double)arg2 timingCurve:(id)arg3;
- (void)_setViewportAnimatorFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithMetalContext:(id)arg1 useCreativeCameraControls:(BOOL)arg2;

@end
