//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (VideosUI)
+ (id)_vui_indexPathsWithIndexSet:(id)arg1 andSection:(NSUInteger)arg2;
- (void)_vui_applyUpdateChanges:(id)arg1 inSection:(NSUInteger)arg2 rowAnimation:(long long)arg3;
- (void)_vui_applyMoveChanges:(id)arg1 inSection:(NSUInteger)arg2 rowAnimation:(long long)arg3;
- (void)_vui_applyInsertChange:(id)arg1 inSection:(NSUInteger)arg2 rowAnimation:(long long)arg3;
- (void)_vui_applyDeleteChange:(id)arg1 inSection:(NSUInteger)arg2 rowAnimation:(long long)arg3;
- (void)vui_applyChangeSet:(id)arg1 inSection:(NSUInteger)arg2 rowAnimation:(long long)arg3 updateDataSourceBlock:(id /* CDUnknownBlockType */)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)vui_applyChangeSet:(id)arg1 inSection:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)vui_applyChangeSet:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@end
