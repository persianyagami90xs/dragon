//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKModifyStrokesCommand : PKUndoCommand
{
    BOOL _hide;
    NSArray *_strokes;
}

+ (id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2;
+ (id)commandForErasingAllStrokesInDrawing:(id)arg1;
+ (id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2;
+ (id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 hiding:(BOOL)arg3;
@property(readonly, nonatomic) BOOL hide; // @synthesize hide=_hide;
@property(readonly, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
// - (void).cxx_destruct;
- (id)description;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(BOOL)arg4;

@end
