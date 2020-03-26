//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDThreadChangeHookResponder-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMCollectionItemIDStateCapturerDelegate-Protocol.h>

@class EDThreadPersistence, EDThreadReloadSummaryHelper, EDUpdateThrottler, EFCancelationToken, EMCollectionItemIDStateCapturer, EMMailboxScope, EMThreadScope, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol EFCancelable, EFScheduler;

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate>
{
    EMThreadScope *_threadScope;
    EDThreadPersistence *_threadPersistence;
    id <EFScheduler> _changeScheduler;
    id <EFScheduler> _backgroundWorkScheduler;
    EFCancelationToken *_cancelationToken;
    NSMutableDictionary *_pendingChanges;
    NSMutableArray *_pendingPositionChanges;
    NSMutableSet *_unreportedJournaledObjectIDs;
    NSMutableDictionary *_reportedJournaledObjectIDs;
    NSMutableDictionary *_oldestThreadObjectIDsByMailbox;
    id <EFCancelable> _updateOldestThreadsCancelationToken;
    EDUpdateThrottler *_updateThrottler;
    EDThreadReloadSummaryHelper *_reloadSummaryHelper;
    EMMailboxScope *_mailboxScope;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

+ (id)log;
@property(readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // @synthesize stateCapturer=_stateCapturer;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property(readonly, nonatomic) EDThreadReloadSummaryHelper *reloadSummaryHelper; // @synthesize reloadSummaryHelper=_reloadSummaryHelper;
@property(readonly, nonatomic) EDUpdateThrottler *updateThrottler; // @synthesize updateThrottler=_updateThrottler;
@property(retain, nonatomic) id <EFCancelable> updateOldestThreadsCancelationToken; // @synthesize updateOldestThreadsCancelationToken=_updateOldestThreadsCancelationToken;
@property(retain, nonatomic) NSMutableDictionary *oldestThreadObjectIDsByMailbox; // @synthesize oldestThreadObjectIDsByMailbox=_oldestThreadObjectIDsByMailbox;
@property(retain, nonatomic) NSMutableDictionary *reportedJournaledObjectIDs; // @synthesize reportedJournaledObjectIDs=_reportedJournaledObjectIDs;
@property(retain, nonatomic) NSMutableSet *unreportedJournaledObjectIDs; // @synthesize unreportedJournaledObjectIDs=_unreportedJournaledObjectIDs;
@property(retain, nonatomic) NSMutableArray *pendingPositionChanges; // @synthesize pendingPositionChanges=_pendingPositionChanges;
@property(retain, nonatomic) NSMutableDictionary *pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property(retain, nonatomic) EFCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(readonly, nonatomic) id <EFScheduler> backgroundWorkScheduler; // @synthesize backgroundWorkScheduler=_backgroundWorkScheduler;
@property(readonly, nonatomic) id <EFScheduler> changeScheduler; // @synthesize changeScheduler=_changeScheduler;
@property(readonly, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property(readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
// - (void).cxx_destruct;
- (id)itemIDsForStateCaptureWithErrorString:(id )arg1;
- (id)labelForStateCapture;
- (void)_oldestThreadsNeedUpdate;
- (id)_messageForPersistedMessage:(id)arg1;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceWillResetThreadScope:(id)arg1 denyBlock:(id /* CDUnknownBlockType */)arg2;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (BOOL)_keyPathsAffectSorting:(id)arg1;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
- (void)_persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2;
- (void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (void)_persistenceIsAddingThreadWithObjectID:(id)arg1;
- (void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3;
- (void)_flushUpdatesWithReason:(id)arg1;
- (BOOL)_isAddingOrDeletingObjectID:(id)arg1;
- (void)_addChangeToPendingChanges:(id)arg1 forThreadObjectID:(id)arg2;
- (id)threadForObjectID:(id)arg1 error:(id )arg2;
- (void)_getInitialResults;
- (void)cancel;
- (void)start;
- (id)initWithQuery:(id)arg1 threadScope:(id)arg2 messagePersistence:(id)arg3 threadPersistence:(id)arg4 hookRegistry:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7;

@end
