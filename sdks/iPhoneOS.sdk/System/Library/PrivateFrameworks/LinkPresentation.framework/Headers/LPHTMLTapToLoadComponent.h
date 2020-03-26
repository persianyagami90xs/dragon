//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

#import <LinkPresentation/DOMEventListener-Protocol.h>

@class DOMElement;

__attribute__((visibility("hidden")))
@interface LPHTMLTapToLoadComponent : LPHTMLComponent <DOMEventListener>
{
    DOMElement *_tapToLoadLabelElement;
    DOMElement *_tapToLoadSpinnerElement;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)ruleDictionaryForStyle:(id)arg1;
// - (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)buildComponents;
- (id)initWithThemePath:(id)arg1 generator:(id)arg2;

@end
