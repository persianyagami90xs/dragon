//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>


@class UITextField;

@interface HUAlarmEditableTextCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
// - (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long autocapitalizationType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
