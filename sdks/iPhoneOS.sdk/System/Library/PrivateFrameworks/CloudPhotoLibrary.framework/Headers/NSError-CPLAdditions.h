//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (CPLAdditions)
- (id)cplSafeErrorForXPC;
- (id)_cplSafeUserInfoForXPCDidChange:(BOOL )arg1;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingPOSIXError;
- (BOOL)isCPLOperationDeferredError;
- (BOOL)isCPLOperationCancelledError;
- (BOOL)isCPLError;
- (BOOL)isCPLErrorWithCode:(long long)arg1;
@end
