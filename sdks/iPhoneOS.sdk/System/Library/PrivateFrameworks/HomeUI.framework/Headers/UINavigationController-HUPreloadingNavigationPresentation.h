//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>

@interface UINavigationController (HUPreloadingNavigationPresentation) <HUPreloadableViewController, HUPresentationDelegate>
- (id)hu_preloadContent;
- (id)hu_pushPreloadableViewController:(id)arg1 animated:(BOOL)arg2;
- (id)hu_presentedItem;
- (id)finishPresentation:(id)arg1 animated:(BOOL)arg2;
@end
