//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HIDTransaction : NSObject
{
    struct __IOHIDTransaction _transaction;
}

- (BOOL)commitElements:(id)arg1 error:(out id )arg2;
@property long long direction;
- (id)description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end
