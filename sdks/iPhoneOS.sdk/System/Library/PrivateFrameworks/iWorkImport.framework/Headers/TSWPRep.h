//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDContainerRep.h>


@class CALayer, CAShapeLayer, NSArray, TSDLayout, TSWPSearchReference, TSWPSelection, TSWPStorage;
@protocol TSWPLayoutTarget;

__attribute__((visibility("hidden")))
@interface TSWPRep : TSDContainerRep <CAAnimationDelegate>
{
    CALayer *_textLayers[2];
    CAShapeLayer *_caretLayer;
    CAShapeLayer *_selectionLineLayers[2];
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    CAShapeLayer *_secondaryHighlightLayer;
    _NSRange _secondaryHighlightRange;
    int _secondaryHighlightPathStyle;
    BOOL _caretAnimationDisabled;
    BOOL _suppressCaret;
    _NSRange _suppressedMisspellingRange;
    BOOL _updatingHighlights;
    BOOL _suppressSelectionHighlight;
    _NSRange _dragRange;
    TSWPSelection *_lastSelection;
    BOOL _selectionChanged;
    BOOL _markChanged;
    NSUInteger _newSelectionFlags;
    BOOL _repFieldsAreActive;
    BOOL _hudStateDirty;
    BOOL _invalidateHUDState;
    BOOL _useKeyboardWhenEditing;
    double _listLevelIndents[9];
    TSWPSelection *_dropSelection;
    BOOL _isShowingCommentKnobs;
    BOOL _tornDown;
    BOOL _searchHitsAreInvalid;
    BOOL _findIsShowing;
    BOOL _dragAndDropCaretLayerIsForCaret;
    TSWPSearchReference *_primaryFindResultSearchReference;
    NSArray *_searchReferences;
    CAShapeLayer *_floatingCaretLayer;
    CGAffineTransform _transformToConvertNaturalToScaledRoot;
}

+ (void)initialize;
@property(copy, nonatomic) TSWPSelection *lastSelection; // @synthesize lastSelection=_lastSelection;
@property(nonatomic) BOOL dragAndDropCaretLayerIsForCaret; // @synthesize dragAndDropCaretLayerIsForCaret=_dragAndDropCaretLayerIsForCaret;
@property(retain, nonatomic) CAShapeLayer *floatingCaretLayer; // @synthesize floatingCaretLayer=_floatingCaretLayer;
@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(readonly, nonatomic) CGAffineTransform transformToConvertNaturalToScaledRoot; // @synthesize transformToConvertNaturalToScaledRoot=_transformToConvertNaturalToScaledRoot;
@property(nonatomic) BOOL useKeyboardWhenEditing; // @synthesize useKeyboardWhenEditing=_useKeyboardWhenEditing;
@property(nonatomic) _NSRange dragRange; // @synthesize dragRange=_dragRange;
@property(nonatomic, getter=isSelectionHighlightSuppressed) BOOL suppressSelectionHighlight; // @synthesize suppressSelectionHighlight=_suppressSelectionHighlight;
@property(nonatomic) BOOL findIsShowing; // @synthesize findIsShowing=_findIsShowing;
@property(retain, nonatomic) TSWPSearchReference *primaryFindResultSearchReference; // @synthesize primaryFindResultSearchReference=_primaryFindResultSearchReference;
// - (void).cxx_destruct;
- (void)p_drawTextInLayer:(id)arg1 context:(CGContext )arg2 limitSelection:(id)arg3 rubyGlyphRange:(_NSRange)arg4 renderMode:(int)arg5 suppressInvisibles:(BOOL)arg6;
- (void)p_teardown;
@property(readonly, nonatomic) BOOL textIsVertical;
- (CGPoint)p_pinPoint:(CGPoint)arg1 toRect:(CGRect)arg2;
- (CGRect)p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2;
- (BOOL)isOverflowing;
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;
- (BOOL)p_allowCaretForSelection:(id)arg1;
- (CGRect)p_convertNaturalRectToRotated:(CGRect)arg1 repAngle:(double)arg2;
- (CGRect)glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg1 glyphRange:(_NSRange)arg2;
- (NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg1;
- (NSUInteger)charCountOfGlyphStartingAtCharIndex:(NSUInteger)arg1;
- (unsigned int)fontTraitsForRange:(_NSRange)arg1 includingLabel:(BOOL)arg2;
- (CGRect)glyphRectForRange:(_NSRange)arg1 includingLabel:(BOOL)arg2;
- (CGRect)columnRectForRange:(_NSRange)arg1;
- (CGRect)labelRectForCharIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) TSWPSelection *selection;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) TSWPStorage *storage;
@property(readonly, nonatomic) __weak TSDLayout<TSWPLayoutTarget> *layout;
- (id)repForCharIndex:(NSUInteger)arg1 isStart:(BOOL)arg2;
- (void)viewDidAppear;
- (void)gesturesDidEnd;
@property(readonly, nonatomic) BOOL isBeingEdited;
- (id)columnForCharIndex:(NSUInteger)arg1;
- (id)closestColumnForPoint:(CGPoint)arg1;
- (id)footnoteReferenceAttachmentAtPoint:(CGPoint)arg1;
- (id)footnoteMarkAttachmentAtPoint:(CGPoint)arg1;
- (id)rubyFieldAtPoint:(CGPoint)arg1;
- (id)smartFieldAtPoint:(CGPoint)arg1;
- (void)drawRubyInContext:(CGContext )arg1 rubyFieldStart:(NSUInteger)arg2 rubyGlyphRange:(_NSRange)arg3;
- (void)recursivelyDrawInContext:(CGContext )arg1 limitSelection:(id)arg2 suppressInvisibles:(BOOL)arg3;
- (void)p_drawInContext:(CGContext )arg1 limitSelection:(id)arg2 suppressInvisibles:(BOOL)arg3;
- (void)drawInContext:(CGContext )arg1;
- (void)drawInLayerContext:(CGContext )arg1;
- (id)textBackgroundLayer;
- (id)textLayer;
- (void)performBlockOnTextLayers:(id /* CDUnknownBlockType */)arg1;
- (id)p_hyperlinkAtPoint:(CGPoint)arg1;
- (BOOL)directlyManagesLayerContent;
- (Class)layerClass;
- (BOOL)p_shouldShowCommentsIncludingHighlights:(BOOL)arg1;
- (void)p_unregisterNotifications;
- (void)p_registerNotifications;
- (CGRect)p_closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2 allowPastBreak:(BOOL)arg3;
- (CGRect)p_topicDragRectForSelection:(id)arg1;
- (CGRect)p_caretRectForSelection:(id)arg1;
- (CGRect)caretRectForSelection:(id)arg1;
- (CDStruct_249a8bf0)wordMetricsAtCharIndex:(NSUInteger)arg1;
- (CDStruct_1af65ba2)lineMetricsAtCharIndex:(NSUInteger)arg1;
- (CDStruct_1af65ba2)lineMetricsAtPoint:(CGPoint)arg1;
- (CGRect)caretRectForCharIndex:(NSUInteger)arg1 leadingEdge:(BOOL)arg2 caretAffinity:(int)arg3;
- (CGRect)caretRectForCharIndex:(NSUInteger)arg1 caretAffinity:(int)arg2;
- (CGRect)naturalBoundsRectForHyperlinkField:(id)arg1;
- (const CGPath )newPathForSelection:(id)arg1;
- (CGRect)rectForSelection:(id)arg1 includeRuby:(BOOL)arg2 includePaginatedAttachments:(BOOL)arg3;
- (BOOL)isPointInSelectedArea:(CGPoint)arg1;
- (CGRect)selectionRect;
- (CGRect)caretRect;
- (CGPoint)pinToClosestColumn:(CGPoint)arg1;
- (CGPoint)pinToNaturalBounds:(CGPoint)arg1 andLastLineFragment:(BOOL)arg2;
- (_NSRange)range;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
