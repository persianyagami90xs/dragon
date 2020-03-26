//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID, UIView;
@protocol CRSUIDashboardFocusableItemProviding;

@interface CRSDashboardFocusableItem : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    UIView<CRSUIDashboardFocusableItemProviding> *_focusProvidingItem;
    CGRect _frameInWindow;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak UIView<CRSUIDashboardFocusableItemProviding> *focusProvidingItem; // @synthesize focusProvidingItem=_focusProvidingItem;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) CGRect frameInWindow; // @synthesize frameInWindow=_frameInWindow;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusableView:(id)arg1;
- (id)init;

@end
