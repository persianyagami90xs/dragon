//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMPluginPayload, NSArray, NSAttributedString, NSString;

@interface CKComposition : NSObject
{
    BOOL _isFromExternalSource;
    NSAttributedString *_text;
    NSAttributedString *_subject;
    IMPluginPayload *_shelfPluginPayload;
    NSString *_expressiveSendStyleID;
}

+ (id)compositionWithMSMessage:(id)arg1 appExtensionIdentifier:(id)arg2;
+ (id)compositionWithShelfPluginPayload:(id)arg1;
+ (id)composition;
+ (void)requestMediaObjectsForAttributedString:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (void)requestMediaObjectForItemProvider:(id)arg1 type:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)_temporaryURLFromURL:(id)arg1;
+ (id)richestMediaTypeForItemProvider:(id)arg1;
+ (void)requestCompositionFromItemProviders:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (void)updateComposition:(id )arg1 fromItemProvider:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (void)requestFilenameForType:(id)arg1 forItemProvider:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (void)requestPluginDisplayContainerForItemProvider:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (id)compositionFromItemProviders:(id)arg1;
+ (id)filenameForType:(id)arg1 forItemProvider:(id)arg2;
+ (id)dataForPasteboardType:(id)arg1 forItemProvider:(id)arg2;
+ (id)__ck_valueForItemClass:(Class)arg1 forItemProvider:(id)arg2;
+ (id)pasteboardTypesForItemProvider:(id)arg1;
+ (id)pluginDisplayContainerForItemProvider:(id)arg1;
+ (id)_transcoderUserInfoFor:(id)arg1 filename:(id)arg2 type:(id)arg3;
+ (id)mediaObjectForItemProvider:(id)arg1;
+ (BOOL)_shouldCreateMediaObjectForUTIType:(id)arg1;
+ (id)compositionWithPluginDisplayContainer:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObjects:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
+ (id)newExpirableCompositionWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
+ (id)expirableCompositionWithMediaObject:(id)arg1;
+ (id)audioCompositionWithMediaObject:(id)arg1;
+ (id)quickImageCompositionWithMediaObject:(id)arg1;
+ (id)photoPickerCompositionWithMediaObjects:(id)arg1;
+ (id)photoPickerCompositionWithMediaObject:(id)arg1;
+ (id)stickerCompositionWithMediaObjects:(id)arg1;
+ (id)compositionForMessageParts:(id)arg1 preserveSubject:(BOOL)arg2;
+ (id)_savedCompositionForGUID:(id)arg1 readUsingBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)savedCompositionForGUID:(id)arg1;
+ (void)deleteCompositionWithGUID:(id)arg1;
@property(nonatomic) BOOL isFromExternalSource; // @synthesize isFromExternalSource=_isFromExternalSource;
@property(copy, nonatomic) NSString *expressiveSendStyleID; // @synthesize expressiveSendStyleID=_expressiveSendStyleID;
@property(copy, nonatomic) IMPluginPayload *shelfPluginPayload; // @synthesize shelfPluginPayload=_shelfPluginPayload;
@property(copy, nonatomic) NSAttributedString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (Class)balloonViewClass;
@property(readonly, nonatomic, getter=isSaveable) BOOL saveable;
@property(readonly, nonatomic, getter=isSendAnimated) BOOL sendAnimated;
- (id)compositionByAppendingComposition:(id)arg1;
- (id)compositionByAppendingText:(id)arg1;
- (id)_compositionByAppendingText:(id)arg1 isExpirable:(BOOL)arg2 shelfPluginPayload:(id)arg3;
@property(readonly, copy, nonatomic) NSString *previewText;
@property(readonly, nonatomic) BOOL hasNonwhiteSpaceContent;
@property(readonly, nonatomic) BOOL hasContent;
- (id)initWithText:(id)arg1 subject:(id)arg2;
- (id)initWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *pasteboardItems;
- (id)compositionByAppendingPluginDisplayContainer:(id)arg1;
@property(readonly, nonatomic, getter=isTextOnly) BOOL textOnly;
@property(readonly, nonatomic) NSArray *pluginDisplayContainers;
@property(readonly, nonatomic) NSArray *mediaObjects;
- (id)compositionByReplacingMediaObject:(id)arg1 withMediaObject:(id)arg2;
- (id)compositionByAppendingMediaObjects:(id)arg1;
- (id)compositionByAppendingMediaObject:(id)arg1;
@property(readonly, nonatomic, getter=isExpirableComposition) BOOL expirableComposition;
- (id)externalSourceComposition;
- (id)messageWithGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1 superFormatText:(id)arg2 superFormatSubject:(id)arg3 fileTransferGUIDs:(id)arg4 mediaObjects:(id)arg5 balloonBundleID:(id)arg6 payloadData:(id)arg7;
- (id)messagesFromCompositionFirstGUIDForMessage:(id)arg1;
- (id)_compositionParts;
- (id)_messageFromPayload:(id)arg1 firstGUID:(id)arg2;
- (id)superFormatText:(id )arg1;
- (id)superFormatText:(id)arg1 transfterGUIDs:(id )arg2 mediaObjects:(id )arg3;
- (id)superFormatSubject;
- (BOOL)_saveCompositionData:(id)arg1 atURL:(id)arg2 forGUID:(id)arg3;
- (void)saveCompositionWithGUID:(id)arg1;
- (id)compositionWithExpressiveSendStyleID:(id)arg1;

@end
