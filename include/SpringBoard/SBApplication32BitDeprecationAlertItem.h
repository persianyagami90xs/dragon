//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem
{
    SBApplication *_associatedDisplay;
}

@property(nonatomic) __weak SBApplication *associatedDisplay; // @synthesize associatedDisplay=_associatedDisplay;
// - (void).cxx_destruct;
- (id)_message;
- (id)_title;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithApplication:(id)arg1;

@end

