//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSNumber, NSString, SSURLRequestProperties;

@interface SUStorePageProtocol : NSObject <NSCopying>
{
    NSArray *_allowedOrientations;
    NSString *_copyright;
    NSArray *_expectedClientIdentifiers;
    NSNumber *_focusedItemIdentifier;
    NSArray *_navigationButtons;
    NSArray *_navigationHistoryItems;
    NSArray *_navigationMenus;
    SSURLRequestProperties *_overlayBackgroundURLRequestProperties;
    NSString *_rootSectionIdentifier;
    BOOL _shouldDisplayInOverlay;
    BOOL _shouldExcludeFromNavigationHistory;
    BOOL _shouldReplaceRootViewController;
}

@property(nonatomic) BOOL shouldReplaceRootViewController; // @synthesize shouldReplaceRootViewController=_shouldReplaceRootViewController;
@property(nonatomic) BOOL shouldExcludeFromNavigationHistory; // @synthesize shouldExcludeFromNavigationHistory=_shouldExcludeFromNavigationHistory;
@property(nonatomic) BOOL shouldDisplayInOverlay; // @synthesize shouldDisplayInOverlay=_shouldDisplayInOverlay;
@property(retain, nonatomic) NSString *rootSectionIdentifier; // @synthesize rootSectionIdentifier=_rootSectionIdentifier;
@property(retain, nonatomic) SSURLRequestProperties *overlayBackgroundURLRequestProperties; // @synthesize overlayBackgroundURLRequestProperties=_overlayBackgroundURLRequestProperties;
@property(copy, nonatomic) NSArray *navigationMenus; // @synthesize navigationMenus=_navigationMenus;
@property(retain, nonatomic) NSArray *navigationHistoryItems; // @synthesize navigationHistoryItems=_navigationHistoryItems;
@property(copy, nonatomic) NSArray *navigationButtons; // @synthesize navigationButtons=_navigationButtons;
@property(retain, nonatomic) NSNumber *focusedItemIdentifier; // @synthesize focusedItemIdentifier=_focusedItemIdentifier;
@property(copy, nonatomic) NSArray *expectedClientIdentifiers; // @synthesize expectedClientIdentifiers=_expectedClientIdentifiers;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSArray *allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
// - (void).cxx_destruct;
- (id)_newNavigationMenusFromArray:(id)arg1;
- (id)_newNavigationHistoryItemsFromArray:(id)arg1;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (void)setValuesFromStorePageDictionary:(id)arg1;
- (void)setOverlayBackgroundURLRequest:(id)arg1;
- (id)overlayBackgroundURLRequest;
- (id)navigationMenuForLocation:(long long)arg1;
- (id)navigationButtonForLocation:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)_initCommon;

@end
