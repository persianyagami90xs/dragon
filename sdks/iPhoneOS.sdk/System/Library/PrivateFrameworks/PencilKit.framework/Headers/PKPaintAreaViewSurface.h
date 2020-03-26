//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKControllerDelegate-Protocol.h>
#import <PencilKit/PKMetalRendererControllerDelegate-Protocol.h>

@class CIContext, NSMutableArray, NSMutableSet, NSUUID, PKController, PKPaintAreaView;
@protocol OS_dispatch_queue, PKPaintSurface;

@interface PKPaintAreaViewSurface : NSObject <PKControllerDelegate, PKMetalRendererControllerDelegate>
{
    PKController *_drawingController;
    NSMutableArray *_textureSet;
    CGSize _pixelSize;
    CGPoint _oldEraseLocation;
    CIContext *_imageContext;
    BOOL _isDrawing;
    BOOL _allowLiveInteraction;
    BOOL _waitingForStrokeToEnd;
    BOOL _isErasingObjects;
    BOOL _isMipmapped;
    NSMutableArray *_strokesToErase;
    NSMutableSet *_strokeIDsToErase;
    PKPaintAreaView *_paintAreaView;
    id <PKPaintSurface> _surface;
    double _textureScale;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSUUID *_drawingUUID;
    CGSize _drawingSize;
    CGPoint _previousPoint;
    CGAffineTransform _strokeTransform;
}

@property(nonatomic) CGPoint previousPoint; // @synthesize previousPoint=_previousPoint;
@property(readonly, nonatomic) NSUUID *drawingUUID; // @synthesize drawingUUID=_drawingUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) BOOL isMipmapped; // @synthesize isMipmapped=_isMipmapped;
@property(readonly, nonatomic) CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(readonly, nonatomic) double textureScale; // @synthesize textureScale=_textureScale;
@property(readonly, nonatomic) CGSize drawingSize; // @synthesize drawingSize=_drawingSize;
@property(readonly, nonatomic) id <PKPaintSurface> surface; // @synthesize surface=_surface;
@property(nonatomic) __weak PKPaintAreaView *paintAreaView; // @synthesize paintAreaView=_paintAreaView;
@property(readonly, nonatomic) PKController *drawingController; // @synthesize drawingController=_drawingController;
@property(readonly, nonatomic) NSMutableSet *strokeIDsToErase; // @synthesize strokeIDsToErase=_strokeIDsToErase;
@property(readonly, nonatomic) NSMutableArray *strokesToErase; // @synthesize strokesToErase=_strokesToErase;
@property(readonly, nonatomic) BOOL isErasingObjects; // @synthesize isErasingObjects=_isErasingObjects;
@property(readonly, nonatomic) BOOL waitingForStrokeToEnd; // @synthesize waitingForStrokeToEnd=_waitingForStrokeToEnd;
@property BOOL allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
@property(nonatomic) BOOL isDrawing; // @synthesize isDrawing=_isDrawing;
// - (void).cxx_destruct;
- (void)drawingChanged:(id)arg1;
- (void)setNeedsDrawingDisplay;
- (void)metalRendererController:(id)arg1 didCommitRenderingIntoTexture:(id)arg2;
- (id)nextTextureTargetForMetalRendererController:(id)arg1;
- (void)eraserCancelled;
- (void)eraserEnded;
- (void)_didFinishErasingStrokes:(BOOL)arg1;
- (void)eraseStrokesForPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2;
- (void)eraserMoved:(id)arg1 transformedLocation:(CGPoint)arg2;
- (BOOL)eraserBegan:(id)arg1 transformedLocation:(CGPoint)arg2;
- (void)vsync:(double)arg1;
- (void)drawingCancelled;
- (void)drawingEndedWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_setupPKController;
- (void)drawingBegan:(id)arg1 transformedLocation:(CGPoint)arg2;
- (void)dispatchSyncOnSurfaceQueue:(id /* CDUnknownBlockType */)arg1;
- (id)CIImageFromTexture:(id)arg1;
- (void)dealloc;
- (id)initWithPaintSurface:(id)arg1 dispatchQueue:(id)arg2;

@end
