//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPFieldTreeNodeWithChildren;

__attribute__((visibility("hidden")))
@interface TSPFieldTree : NSObject
{
    TSPFieldTreeNodeWithChildren *_rootNode;
}

// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (BOOL)addField:(id)arg1;
- (id)init;

@end
