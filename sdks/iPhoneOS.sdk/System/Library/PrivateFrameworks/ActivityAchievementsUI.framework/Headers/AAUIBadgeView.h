//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKitUI/HKGLView.h>


@class AAUIBadge, AAUIBadgeModelConfiguration, GLKTextureInfo, NSAttributedString, NSDictionary, NSObject, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AAUIBadgeViewDelegate, OS_dispatch_queue;

@interface AAUIBadgeView : HKGLView <UIGestureRecognizerDelegate>
{
    AAUIBadge *_badge;
    union _GLKMatrix4 _viewProjectionMatrix;
    GLKTextureInfo *_colorTexture;
    GLKTextureInfo *_envTexture;
    GLKTextureInfo *_backTexture;
    GLKTextureInfo *_fleckNormalTexture;
    NSUInteger _shape;
    UIImage *_backAppleLogo;
    NSAttributedString *_backsideAttributedString;
    BOOL _backTextureNeedsRegeneration;
    unsigned int _program;
    unsigned int _faceProgram;
    unsigned int _inlayFaceProgram;
    unsigned int _triColorFaceProgram;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    int _numGroups;
    int _groupTriangleCounts;
    int _materialIndices;
    struct __UniformBindings _uniformBindings;
    struct __UniformBindings _faceUniformBindings;
    struct __UniformBindings _inlayFaceUniformBindings;
    struct __UniformBindings _triColorFaceUniformBindings;
    NSDictionary *_tweakableUniforms;
    union _GLKMatrix4 _modelTransform;
    double _spinRate;
    UIPanGestureRecognizer *_spinRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    BOOL _magnetsEngaged;
    union _GLKVector3 _modelBaseColor;
    union _GLKVector3 _modelEnamelColor;
    BOOL _modelUsesFullColorEnamel;
    BOOL _modelUsesEarnedShader;
    BOOL _modelFaceHasMetalInlay;
    BOOL _modelUsesTriColorEnamel;
    union _GLKVector3 _triColors[3];
    BOOL _verticalPanningDisabled;
    AAUIBadgeModelConfiguration *_configuration;
    id /* CDUnknownBlockType */ _shortenedBadgeBacksideStringProvider;
    id <AAUIBadgeViewDelegate> _badgeDelegate;
    NSObject<OS_dispatch_queue> *_pauseByNotificationQueueOverride;
}

+ (double)badgeAspectRatio;
+ (double)screenScaleMaximum;
+ (double)screenScaleMultiple;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pauseByNotificationQueueOverride; // @synthesize pauseByNotificationQueueOverride=_pauseByNotificationQueueOverride;
@property(nonatomic) __weak id <AAUIBadgeViewDelegate> badgeDelegate; // @synthesize badgeDelegate=_badgeDelegate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ shortenedBadgeBacksideStringProvider; // @synthesize shortenedBadgeBacksideStringProvider=_shortenedBadgeBacksideStringProvider;
@property(retain, nonatomic) AAUIBadgeModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) BOOL verticalPanningDisabled; // @synthesize verticalPanningDisabled=_verticalPanningDisabled;
// - (void).cxx_destruct;
- (void)_pauseByNotification:(id)arg1;
- (void)render360RotationPNGSequenceWithNumberOfFrames:(NSUInteger)arg1;
- (void)setFixedBadgeAngle:(double)arg1;
- (double)playFlipOutAnimation;
- (double)playFlipInAnimation;
- (void)playRevealAnimationWithDuration:(double)arg1;
- (BOOL)shouldAutorotate;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)_context_destroyBuffers;
- (void)_context_drawInRect:(CGRect)arg1;
- (unsigned int)drawInRect:(CGRect)arg1 withContext:(id)arg2;
- (void)_disengageMagnets;
- (void)_engageMagnets;
- (void)update;
- (float)_normalizeAngle:(float)arg1;
- (id)_valueForTweak:(id)arg1;
- (void)resizeBadgeForCurrentViewSize;
- (void)_context_loadUniformsAndAttributes;
- (void)_generateBackTexture;
- (void)_setBackTextureNeedsRegeneration;
- (void)setBadgeBacksideIcon:(id)arg1;
- (void)setBadgeBacksideAttributedString:(id)arg1;
- (void)_context_loadBadgeModelWithConfiguration:(id)arg1;
- (void)_context_loadBadgeModel;
- (void)_context_loadShaders;
- (void)_context_setupScene;
- (void)_context_createBuffers;
- (void)_context_setup;
- (void)_applyImpulse:(double)arg1;
- (void)_tapped:(id)arg1;
- (void)_spin360Degrees;
- (void)_longPressInternalOnly:(id)arg1;
- (void)_panned:(id)arg1;
- (double)_attenuatedVelocity:(double)arg1;
- (double)_attenuatedSpinRate:(double)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_forEachProgram:(id /* CDUnknownBlockType */)arg1;
- (id)_unearnedShaderDefaultTweaks;
- (id)_defaultTweaks;
- (void)setBadgeModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3;
- (id)initUsingEarnedShader:(BOOL)arg1;
- (id)init;

@end
