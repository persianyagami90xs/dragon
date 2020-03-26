//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString;
@protocol PXPerson;

@interface PXPeopleNameSelection : NSObject
{
    NSUInteger _selectionType;
    id <PXPerson> _person;
    CNContact *_contact;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(readonly, nonatomic) NSUInteger selectionType; // @synthesize selectionType=_selectionType;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedName;
- (void)setLinkedPerson:(id)arg1;
- (id)initWithName:(id)arg1 contact:(id)arg2 person:(id)arg3 type:(NSUInteger)arg4;
- (id)initWithSelectedPerson:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithName:(id)arg1;

@end
