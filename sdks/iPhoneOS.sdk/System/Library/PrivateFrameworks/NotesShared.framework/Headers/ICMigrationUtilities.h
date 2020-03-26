//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICMigrationUtilities : NSObject
{
}

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)deleteMigratedHTMLAccounts;
+ (void)updateAllLegacyAccountMigrationStates;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;
+ (void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 didMigrateOnMac:(BOOL)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
+ (void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;

@end
