//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFServiceNameComponents, UIColor, UIVisualEffect;
@protocol HFStringGenerator;

@interface HUGridServiceCellTextConfiguration : NSObject
{
    HFServiceNameComponents *_nameComponents;
    id <HFStringGenerator> _descriptionText;
    UIColor *_nameTextColor;
    UIColor *_descriptionTextColor;
    UIVisualEffect *_descriptionTextEffect;
}

@property(retain, nonatomic) UIVisualEffect *descriptionTextEffect; // @synthesize descriptionTextEffect=_descriptionTextEffect;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) UIColor *nameTextColor; // @synthesize nameTextColor=_nameTextColor;
@property(retain, nonatomic) id <HFStringGenerator> descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) HFServiceNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
// - (void).cxx_destruct;

@end
