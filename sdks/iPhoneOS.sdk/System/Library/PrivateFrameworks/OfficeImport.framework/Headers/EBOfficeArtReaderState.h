//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OABReaderState.h>

@class EBReaderState, EXReadState;

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderState : OABReaderState
{
    EXReadState *mXmlDocumentState;
    EBReaderState *mReaderState;
}

// - (void).cxx_destruct;
- (id)xmlDrawingState;
@property(readonly) __weak EBReaderState *readerState; // @synthesize readerState=mReaderState;
- (id)initWithReaderState:(id)arg1;

@end
