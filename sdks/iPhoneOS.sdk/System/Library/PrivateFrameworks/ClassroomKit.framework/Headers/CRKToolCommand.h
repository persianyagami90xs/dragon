//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskClientDelegate-Protocol.h>

@class CATOperation, CATOperationQueue, CATTaskClient, NSString;
@protocol CRKToolCommandDelegate, OS_dispatch_source;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate>
{
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
    BOOL _printJSON;
    BOOL _printVerbose;
    id <CRKToolCommandDelegate> _delegate;
    NSString *_sessionIdentifier;
}

+ (BOOL)handlesProgress;
+ (BOOL)instructorCommand;
+ (void)printHelp;
+ (id)help;
+ (id)description;
+ (id)aliases;
+ (id)subcommandPath;
+ (BOOL)supportsVerboseOutput;
+ (BOOL)supportsJSON;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) __weak id <CRKToolCommandDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=shouldPrintVerbose) BOOL printVerbose; // @synthesize printVerbose=_printVerbose;
@property(nonatomic, getter=shouldPrintJSON) BOOL printJSON; // @synthesize printJSON=_printJSON;
// - (void).cxx_destruct;
- (void)clientDidDisconnect:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)clientDidConnect:(id)arg1;
- (BOOL)didOperationSucceed:(id)arg1;
- (BOOL)didCommandSucceed;
- (BOOL)isCommandFinished;
- (void)cleanupAndExitIfNeeded;
- (void)_remoteTaskDidFinish:(id)arg1;
- (void)_remoteTaskDidProgress:(id)arg1;
- (void)executeOperation:(id)arg1;
- (void)connectToTaskClientWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)transportProvider;
- (void)remoteTaskDidFinish:(id)arg1;
- (void)remoteTaskDidProgress:(id)arg1;
- (id)requestWithArguments:(id)arg1;
- (id)operationWithClient:(id)arg1 arguments:(id)arg2;
- (id)arrayByParsingAndRemovingArgumentFlags:(id)arg1;
- (void)runWithClient:(id)arg1 arguments:(id)arg2;
- (void)runWithArguments:(id)arg1;
- (id)init;

@end
