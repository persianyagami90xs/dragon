//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CUBitCoderEncryptRequest : NSObject
{
    NSData *_aad;
    NSUInteger _authTagLength;
    NSData *_data;
    NSData *_nonce;
}

@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) NSUInteger authTagLength; // @synthesize authTagLength=_authTagLength;
@property(copy, nonatomic) NSData *aad; // @synthesize aad=_aad;
// - (void).cxx_destruct;

@end
