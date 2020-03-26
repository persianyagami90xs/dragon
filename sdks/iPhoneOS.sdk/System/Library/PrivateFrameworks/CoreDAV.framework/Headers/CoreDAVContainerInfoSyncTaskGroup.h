//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class NSString, NSURL;
@protocol CoreDAVContainerInfoSyncProvider;

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSString *_previousSyncToken;
    NSURL *_containerURL;
}

// - (void).cxx_destruct;
- (id)copyContainerParserMappings;
- (Class)containerItemClass;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <CoreDAVContainerInfoSyncProvider> delegate;
- (id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;

@end
