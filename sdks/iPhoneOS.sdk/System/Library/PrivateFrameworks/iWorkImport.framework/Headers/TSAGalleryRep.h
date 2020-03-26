//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/TSDImageDrawingDataSource-Protocol.h>
#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>
#import <iWorkImport/TSWPContainerTextEditingRep-Protocol.h>

@class NSArray, NSObject, TSAGalleryLayout, TSDImageDrawingHelper, TSWPRep;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface TSAGalleryRep : TSDRep <TSWPContainerTextEditingRep, TSDImageDrawingDataSource, TSKChangeSourceObserver>
{
    TSDImageDrawingHelper *_drawingHelper;
    TSWPRep *_captionRep;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (CGAffineTransform)p_textureRenderTransformRelativeToTextureRect:(CGRect)arg1 forLayout:(id)arg2 viewScale:(double)arg3 isMagicMove:(BOOL)arg4;
+ (CGRect)p_textureRectForLayout:(id)arg1 viewScale:(double)arg2 isMagicMove:(BOOL)arg3;
+ (CGAffineTransform)p_textureLayoutTransformInRootForLayout:(id)arg1 isMagicMove:(BOOL)arg2;
@property(readonly, nonatomic) TSWPRep *captionRep; // @synthesize captionRep=_captionRep;
// - (void).cxx_destruct;
- (void)p_announceNewItemForAccessibilityIfNeeded;
- (void)didDisplayTextureWithDescription:(id)arg1 isAtEndOfBuild:(BOOL)arg2;
- (id)p_newTextureForStage:(NSUInteger)arg1 isIncoming:(BOOL)arg2 includeImage:(BOOL)arg3 includeCaption:(BOOL)arg4 size:(CGSize)arg5 offset:(CGPoint)arg6 renderTransform:(CGAffineTransform)arg7;
- (id)p_galleryItemForTextureStage:(NSUInteger)arg1 isIncoming:(BOOL)arg2;
- (BOOL)p_shouldIncludeItemCaptionTextForStage:(NSUInteger)arg1 isIncoming:(BOOL)arg2;
- (id)textureForDescription:(id)arg1;
- (id)p_emptyPlaceholderImage;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperAdjustedImageData:(id)arg1;
- (BOOL)imageDrawingHelperImageHasAlpha:(id)arg1;
- (CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1;
- (CGRect)imageDrawingHelperImageRect:(id)arg1;
- (id)imageDrawingHelperThumbnailImageData:(id)arg1;
- (id)imageDrawingHelperImageData:(id)arg1;
- (void)invalidateCurrentItem;
- (void)p_drawImageInContext:(CGContext )arg1 forLayer:(BOOL)arg2;
- (void)drawInContext:(CGContext )arg1;
@property(readonly, nonatomic) TSWPRep *containedRep;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)updateChildrenFromLayout;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (BOOL)p_isEmpty;
@property(readonly, nonatomic) TSAGalleryLayout *galleryLayout;
- (id)galleryInfo;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
