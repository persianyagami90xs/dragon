//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BLTGizmoLegacyMap : NSObject
{
    NSMutableDictionary *_gizmoBulletinKeyMap;
    NSMutableDictionary *_phoneBulletinKeyMap;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (id)gizmoSectionInfoForPhoneKey:(id)arg1;
- (id)phoneSectionIDForGizmoKey:(id)arg1;
- (id)gizmoPublisherBulletinIDForPhoneKey:(id)arg1;
- (id)phonePublisherBulletinIDForGizmoKey:(id)arg1;
- (id)sectionSubtypeForBulletinKey:(id)arg1;
- (id)categoryIDForBulletinKey:(id)arg1;
- (void)unmapBulletin:(id)arg1;
- (void)mapBulletin:(id)arg1 bulletinMapProperty:(NSUInteger)arg2;
- (void)_addMapKey:(id)arg1 value:(id)arg2 bulletinKey:(id)arg3 version:(NSUInteger)arg4 versionDictionary:(id)arg5;
- (id)init;

@end
