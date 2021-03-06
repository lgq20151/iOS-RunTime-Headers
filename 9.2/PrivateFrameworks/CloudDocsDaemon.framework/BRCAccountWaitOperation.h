/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {
    CKContainer * _ckContainer;
    int  _lastAccountStatus;
    BOOL  _resumed;
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountChangeHandler;
- (void)_accountDidChange;
- (void)cancel;
- (void)dealloc;
- (id)descriptionForCKAccountStatus:(int)arg1 dumpContext:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithCKContainer:(id)arg1;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)start;
- (unsigned long long)startActivity;
- (id)subclassableDescriptionWithContext:(id)arg1;

@end
