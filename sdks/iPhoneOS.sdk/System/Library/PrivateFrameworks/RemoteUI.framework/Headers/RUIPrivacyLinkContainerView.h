//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RemoteUITableFooter-Protocol.h>

@class NSDictionary, OBPrivacyLinkController;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter>
{
    NSDictionary *_attributes;
    OBPrivacyLinkController *_linkController;
}

@property(readonly) OBPrivacyLinkController *linkController; // @synthesize linkController=_linkController;
// - (void).cxx_destruct;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (void)configureInPage:(id)arg1;
- (id)initWithAttributes:(id)arg1;

@end
