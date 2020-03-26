//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSMIGServer : NSObject
{
    NSString *_portName;
    unsigned int _port;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec _field2;
        char _field3[8176];
    } _thread;
    struct mig_subsystem _subsystem;
    struct __CFRunLoopObserver _entryObserver;
    struct __CFRunLoopObserver _exitObserver;
}

// - (void).cxx_destruct;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString )arg1;
- (unsigned int)_createPortNamed:(id)arg1;
- (void )_start;
@property(readonly, copy, nonatomic) NSString *threadName;
@property(nonatomic) int threadPriority;
- (unsigned int)port;
- (id)init;
- (id)initWithPortName:(id)arg1 subsystem:(struct mig_subsystem )arg2 separateThread:(BOOL)arg3;

@end
