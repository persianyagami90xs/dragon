//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString, NSMutableDictionary, TTMergeableStringVersionedDocument;

@protocol ICNoteUI <NSObject>

@optional
- (NSAttributedString *)uiAttributedString;
- (void)createMissingAttachmentsInTextStorage;
- (void)didMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)willMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillTurnIntoFault;
- (BOOL)shouldReleaseTextStorageWhenTurningIntoFault;
@end
