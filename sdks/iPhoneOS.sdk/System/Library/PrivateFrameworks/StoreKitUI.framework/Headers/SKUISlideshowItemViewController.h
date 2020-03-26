//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class SKUIClientContext, SKUISlideshowImageScrollView, UIImage, UIView;
@protocol SKUISlideshowItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    SKUIClientContext *_clientContext;
    UIView *_loadingView;
    BOOL _zoomingGestureThresholdBroken;
    CGPoint _lastContentOffset;
    double _lastZoomScale;
    id <SKUISlideshowItemViewControllerDelegate> _delegate;
    SKUISlideshowImageScrollView *_imageScrollView;
    long long _indexInCollection;
}

@property(nonatomic) long long indexInCollection; // @synthesize indexInCollection=_indexInCollection;
@property(readonly, nonatomic) SKUISlideshowImageScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) __weak id <SKUISlideshowItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)_pinchGestureAction:(id)arg1;
- (id)_newLoadingView;
- (BOOL)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
@property(retain, nonatomic) UIImage *itemImage;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
