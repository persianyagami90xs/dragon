//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface PSSubtitleDisclosureTableCell : PSTableCell
{
    UILabel *_valueLabel;
}

+ (long long)cellStyle;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (BOOL)canReload;
- (void)layoutSubviews;
- (void)_valueLabelForSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

