//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RETokenBuffer-Protocol.h>

@class REScriptToken;
@protocol REScriptBuffer, REScriptTokenizerDelegate;

@interface REScriptTokenizer : NSObject <RETokenBuffer>
{
    id <REScriptBuffer> _buffer;
    REScriptToken *_currentToken;
    NSUInteger _line;
    NSUInteger _column;
    id <REScriptTokenizerDelegate> _delegate;
}

@property(nonatomic) __weak id <REScriptTokenizerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_matchTokenStart:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 body:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg2 value:(id )arg3;
- (void)_popChar;
- (unsigned short)_peekChar;
- (BOOL)_hasChar;
- (void)_consumeWhitespace;
- (void)_validateToken;
- (id)_readString;
- (id)_readMultilineComment;
- (id)_readSingleComment;
- (void)next;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) REScriptToken *currentToken;
- (id)initWithScriptBuffer:(id)arg1;

@end
