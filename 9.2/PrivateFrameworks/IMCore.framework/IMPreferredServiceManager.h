/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMPreferredServiceManager : NSObject <IDSIDQueryControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)hasActiveiMessageAccount;
+ (BOOL)isiMessageAvailable;
+ (BOOL)mmsEnabled;
+ (id)sharedPreferredServiceManager;
+ (BOOL)smsEnabled;

- (unsigned int)__optionsForChat:(id)arg1;
- (unsigned int)__preferredServiceTypeForRecipientCount:(int)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (unsigned int)__preferrediMessageFallbackServiceForRecipientCount:(int)arg1 iMessageAvailable:(BOOL)arg2 options:(unsigned int)arg3 error:(char *)arg4;
- (void)_handleConnectionChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_handleOperationalAccountsChanged:(id)arg1;
- (unsigned int)_optionsForRecipients:(id)arg1 inChat:(id)arg2;
- (id)_preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char *)arg4 serverCheckCompletionBlock:(id /* block */)arg5;
- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned int)arg2 error:(char *)arg3 serverCheckCompletionBlock:(id /* block */)arg4;
- (void)dealloc;
- (id)init;
- (void)notifyOfServiceAvailabilityChange;
- (id)preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char *)arg4 serverCheckCompletionBlock:(id /* block */)arg5;
- (id)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 error:(char *)arg3 serverCheckCompletionBlock:(id /* block */)arg4;

@end