/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDFMIPManager : NSObject {
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionCreationQueue;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcConnectionCreationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_checkCallingOSUser;
- (void)_destroyXPCConnection;
- (void)_forceALUpgradeAlertWithCompletion:(id /* block */)arg1;
- (BOOL)_quickFetchFMIPEnabledstate;
- (id)currentXPCConnection;
- (void)dealloc;
- (void)deviceActivationDidSucceed;
- (void)didChangeFMIPAccountInfo:(id)arg1;
- (void)didReceiveLostModeExitAuthToken:(id)arg1;
- (id)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2;
- (void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned int)arg2;
- (void)disableLostMode;
- (void)disableTouchIDForLostModeWithCompletion:(id /* block */)arg1;
- (void)enableActivationLockWithCompletion:(id /* block */)arg1;
- (id)enableFMIPInContext:(unsigned int)arg1;
- (id)enableLostModeWithInfo:(id)arg1;
- (id)fmipAccount;
- (void)fmipAccountWithCompletion:(id /* block */)arg1;
- (void)fmipStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)arg1;
- (void)isActivationLockAllowedWithCompletion:(id /* block */)arg1;
- (void)isActivationLockEnabledWithCompletion:(id /* block */)arg1;
- (void)isActivationLockedWithCompletion:(id /* block */)arg1;
- (BOOL)lockdownShouldDisableDevicePairing;
- (BOOL)lockdownShouldDisableDeviceRestore;
- (id)lostModeInfo;
- (BOOL)lostModeIsActive;
- (void)lowBatteryLocateEnabledWithCompletion:(id /* block */)arg1;
- (void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)markPairedDeviceWithUDID:(id)arg1 asMissingWithCompletion:(id /* block */)arg2;
- (BOOL)needsLostModeExitAuth;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (void)setLowBatteryLocateEnabled:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionCreationQueue:(id)arg1;
- (void)userNotifiedOfActivationLockForAllPairedDevices;
- (void)userNotifiedOfActivationLockForPairedDevices:(id)arg1;
- (void)userNotifiedOfWatchActivationLock;
- (id)xpcConnection;
- (id)xpcConnectionCreationQueue;

@end
