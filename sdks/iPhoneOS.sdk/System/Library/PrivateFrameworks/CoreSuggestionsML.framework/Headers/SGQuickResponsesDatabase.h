//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/_PASDatabaseMigrationProtocol-Protocol.h>

@class _PASSqliteDatabase;

@interface SGQuickResponsesDatabase : NSObject <_PASDatabaseMigrationProtocol>
{
    _PASSqliteDatabase *_db;
}

+ (id)_openAnotherHandleForPath:(id)arg1;
+ (id)_openFreshHandleForPath:(id)arg1 inMemory:(BOOL)arg2;
@property(readonly, nonatomic) _PASSqliteDatabase *db; // @synthesize db=_db;
// - (void).cxx_destruct;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int )arg1;
- (id)migrations;
- (id)databaseHandle;
- (BOOL)_performMigrationsWithPath:(id)arg1 inMemory:(BOOL)arg2 attemptIteration:(int)arg3;
- (BOOL)_handleCorruptionWithCheck:(BOOL)arg1 path:(id)arg2 inMemory:(BOOL)arg3;
- (id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3 forTools:(BOOL)arg4;
- (id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3;

@end
