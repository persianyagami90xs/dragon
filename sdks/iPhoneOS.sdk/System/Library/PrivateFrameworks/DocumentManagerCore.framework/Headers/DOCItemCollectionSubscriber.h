//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject
{
    NSUUID *_UUID;
    id /* CDUnknownBlockType */ _updateBlock;
}

@property(copy) id /* CDUnknownBlockType */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* CDUnknownBlockType */)arg1;

@end
