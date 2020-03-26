//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class HMFClassRegistry, HMFUnfairLock, NSArray, NSMutableDictionary, NSString;

@interface HMFPreferences : HMFObject <HMFObject>
{
    NSMutableDictionary *_preferences;
    HMFUnfairLock *_lock;
    HMFClassRegistry *_classRegistry;
}

+ (void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2;
+ (id)defaultValueForPreferenceKey:(id)arg1;
+ (id)defaultValues;
+ (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
+ (Class)preferenceClassForPreferenceKey:(id)arg1;
+ (id)classRegistry;
+ (id)sharedPreferences;
@property(readonly) HMFClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
// - (void).cxx_destruct;
- (id)preferenceForKey:(id)arg1;
@property(readonly, copy) NSArray *preferences;
- (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
- (Class)preferenceClassForPreferenceKey:(id)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)init;

@end
