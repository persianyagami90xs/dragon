//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol _SBProximityTouchHandlingDelegate;

@interface _SBProximityTouchHandlingView : UIView
{
    id <_SBProximityTouchHandlingDelegate> _delegate;
    double _statusBarHeight;
}

@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) id <_SBProximityTouchHandlingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;

@end
