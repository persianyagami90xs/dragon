//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLSandboxHelper : NSObject
{
}

+ (BOOL)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (BOOL)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;

@end
