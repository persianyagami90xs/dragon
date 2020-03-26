//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class SASTTemplateStarRating, SAUIDecoratedText;
@protocol SASTTemplateAction;

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>
{
}

+ (id)locationListItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationListItem;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(retain, nonatomic) SAUIDecoratedText *subtitle;
@property(retain, nonatomic) SASTTemplateStarRating *rating;
@property(retain, nonatomic) SAUIDecoratedText *formattedDistance;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
