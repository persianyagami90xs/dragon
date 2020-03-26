//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject
{
    BOOL _shouldSyncToCloud;
    id <PKPaymentOptionsSynchronizationDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentOptionsSynchronizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldSyncToCloud; // @synthesize shouldSyncToCloud=_shouldSyncToCloud;
// - (void).cxx_destruct;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_updateSynchronizationBehavior;
- (id)init;

@end
