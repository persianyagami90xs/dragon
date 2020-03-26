//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <AppleMediaServices/AMSHashable-Protocol.h>

@class NSDate, NSString;

@interface NSDictionary (AppleMediaServices) <AMSHashable>
+ (id)ams_dictionaryWithEncryptionResult:(CDStruct_0f015c83)arg1;
- (id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)ams_objectForCaseInsensitiveKey:(id)arg1;
- (id)ams_mapWithTransform:(id /* CDUnknownBlockType */)arg1;
- (id)ams_firstObjectPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)ams_firstKeyObjectPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)ams_firstKeyPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)ams_filterUsingTest:(id /* CDUnknownBlockType */)arg1;
- (id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)ams_componentsJoinedByString:(id)arg1;
- (id)ams_arrayUsingTransform:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic, getter=ams_isExpired) BOOL ams_expired;
@property(readonly, nonatomic) NSDate *ams_expirationDate;
- (CDStruct_0f015c83)ams_encryptionResult;
@end
