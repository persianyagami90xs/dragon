//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommonUtilities/CUTUnsafePromise.h>

@interface CUTPromise : CUTUnsafePromise
{
}

+ (id)all:(id)arg1;
+ (id)fulfilledPromiseWithValue:(id)arg1;
+ (id)failedPromiseWithError:(id)arg1;
- (id)then:(id /* CDUnknownBlockType */)arg1;
- (void)registerResultBlock:(id /* CDUnknownBlockType */)arg1;

@end
