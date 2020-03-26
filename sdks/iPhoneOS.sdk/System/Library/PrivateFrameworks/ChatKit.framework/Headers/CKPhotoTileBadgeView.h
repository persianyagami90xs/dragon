//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKPhotoTileBadgeView : UIView
{
    BOOL _enabled;
    BOOL _selected;
    UIButton *_actionButton;
    UIView *__backgroundView;
    UIImageView *__badgeImageView;
    UILabel *__textLabel;
}

+ (double)verticalBadgeInset;
+ (double)horizontalBadgeInset;
@property(readonly, nonatomic) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
@property(readonly, nonatomic) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
// - (void).cxx_destruct;
- (CGSize)maximumSize;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
