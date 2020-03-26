//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STCommunicationLimitsScreenTimeDetailListController : PSListController
{
    BOOL _allowIntroductionsEnabled;
    PSSpecifier *_allowedCommunicationGroupSpecifier;
    PSSpecifier *_allowEveryoneSpecifier;
    PSSpecifier *_allowContactsOnlySpecifier;
    STCommunicationLimits *_communicationLimits;
}

+ (void)showCompatibilityAlertIfNeededWithCoordinator:(id)arg1 presentingViewController:(id)arg2;
@property(retain) STCommunicationLimits *communicationLimits; // @synthesize communicationLimits=_communicationLimits;
@property BOOL allowIntroductionsEnabled; // @synthesize allowIntroductionsEnabled=_allowIntroductionsEnabled;
@property(retain) PSSpecifier *allowContactsOnlySpecifier; // @synthesize allowContactsOnlySpecifier=_allowContactsOnlySpecifier;
@property(retain) PSSpecifier *allowEveryoneSpecifier; // @synthesize allowEveryoneSpecifier=_allowEveryoneSpecifier;
@property(retain) PSSpecifier *allowedCommunicationGroupSpecifier; // @synthesize allowedCommunicationGroupSpecifier=_allowedCommunicationGroupSpecifier;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_allowIntroductions:(id)arg1;
- (void)_setAllowIntroductions:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)_didFinishEditingCommunicationLimit;
- (void)willResignActive;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end
