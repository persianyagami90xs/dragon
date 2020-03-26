//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRE/MCSessionPrivateDelegate-Protocol.h>

@class MCSession, NSLock, NSMutableArray, NSMutableDictionary;
@protocol MCSessionPrivateDelegate;

__attribute__((visibility("hidden")))
@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate>
{
    struct MultipeerProtocolLayer _protocolLayer;
    MCSession *_session;
    NSMutableDictionary *_peersToHandles;
    NSMutableArray *_pendingData;
    NSLock *_handlesLock;
    id <MCSessionPrivateDelegate> _nextDelegate;
    DynamicArray_959538b5 _handles;
    DynamicArray_8f05e591 _tempBuf;
}

@property(nonatomic) __weak id <MCSessionPrivateDelegate> nextDelegate; // @synthesize nextDelegate=_nextDelegate;
@property(nonatomic) DynamicArray_8f05e591 tempBuf; // @synthesize tempBuf=_tempBuf;
@property(nonatomic) DynamicArray_959538b5 handles; // @synthesize handles=_handles;
@property(retain, nonatomic) NSLock *handlesLock; // @synthesize handlesLock=_handlesLock;
@property(retain, nonatomic) NSMutableArray *pendingData; // @synthesize pendingData=_pendingData;
@property(retain, nonatomic) NSMutableDictionary *peersToHandles; // @synthesize peersToHandles=_peersToHandles;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(nonatomic) struct MultipeerProtocolLayer protocolLayer; // @synthesize protocolLayer=_protocolLayer;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(BOOL )arg5;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(BOOL )arg6;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(BOOL )arg5;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(BOOL )arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(BOOL )arg4;
- (id)dataForPacket:(const struct Packet )arg1 channel:(unsigned char)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)initWithSession:(id)arg1 protocolLayer:(struct MultipeerProtocolLayer )arg2;

@end
