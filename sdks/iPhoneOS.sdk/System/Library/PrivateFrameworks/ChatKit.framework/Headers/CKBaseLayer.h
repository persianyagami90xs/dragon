//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol CKLayerDelegate;

@interface CKBaseLayer : CALayer
{
    id <CKLayerDelegate> _ckLayerDelegate;
}

@property(nonatomic) __weak id <CKLayerDelegate> ckLayerDelegate; // @synthesize ckLayerDelegate=_ckLayerDelegate;
// - (void).cxx_destruct;
- (void)layerDidBecomeVisible:(BOOL)arg1;

@end
