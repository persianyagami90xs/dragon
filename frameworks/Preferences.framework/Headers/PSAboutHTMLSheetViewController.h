//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>
{
}

+ (void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3;
- (void)setHTMLContent:(id)arg1 isFragment:(BOOL)arg2;
- (void)donePressed;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidBecomeVisible;
- (void)dealloc;
- (void)loadView;

@end

