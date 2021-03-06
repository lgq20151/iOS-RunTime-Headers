/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYOutgoingDeltaTransactionSession : SYSession {
    unsigned long long  _activity;
    BOOL  _canRestart;
    BOOL  _canRollback;
    BOOL  _cancelled;
    int  _state;
    NSObject<OS_dispatch_source> * _stateUpdateSource;
    _SYMessageTimerTable * _timers;
}

- (void).cxx_destruct;
- (void)_fetchNextBatch;
- (void)_handleError:(id)arg1;
- (void)_installStateListener;
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_notifySessionComplete;
- (void)_processNextState;
- (void)_sendSyncBatch:(id)arg1 nextState:(int)arg2;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;
- (void)_setStateQuietly:(int)arg1;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)cancel;
- (id)initWithService:(id)arg1;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (unsigned int)protocolVersion;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)start:(id /* block */)arg1;
- (int)state;
- (BOOL)wasCancelled;

@end
