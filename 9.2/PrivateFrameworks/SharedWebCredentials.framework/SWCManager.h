/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

@interface SWCManager : NSObject <NSXPCListenerDelegate, SWCXPCServer> {
    BOOL  _addedAllApps;
    BOOL  _allowUnsigned;
    NSMutableArray * _database;
    NSMutableArray * _netRequests;
    NSObject<OS_dispatch_source> * _recheckTimer;
    BOOL  _redirects;
    NSObject<OS_dispatch_source> * _retryTimer;
    BOOL  _started;
    BOOL  _verifyEV;
    NSXPCListener * _xpcListener;
    NSMutableArray * _xpcRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (long)_addService:(id)arg1 app:(id)arg2 domain:(id)arg3;
- (id)_appEntitlementsByID:(id)arg1;
- (void)_completeAppsRequestForURLConnection:(id)arg1 status:(long)arg2 services:(id)arg3;
- (void)_connectionInvalidated:(id)arg1;
- (long)_ensureDatabaseLoaded;
- (id)_findAppRequestForURLConnection:(id)arg1;
- (id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3;
- (id)_installedAppByID:(id)arg1;
- (void)_parseServiceDomainString:(id)arg1 legacy:(BOOL)arg2 service:(id*)arg3 domain:(id*)arg4;
- (void)_performPeriodicRechecks;
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;
- (void)_retryDownloads;
- (void)_sanitizeDatabase;
- (long)_saveDatabase;
- (void)_schedulePeriodicRechecks;
- (void)_scheduleRetries;
- (long)_startAppsRequestForDomain:(id)arg1;
- (long)_verifyTrust:(struct __SecTrust { }*)arg1;
- (void)addAllAppleApps;
- (void)addAllApps;
- (void)addAllAppsWithReply:(id /* block */)arg1;
- (void)addBundleID:(id)arg1;
- (void)addBundleID:(id)arg1 preApproved:(BOOL)arg2;
- (void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logControl:(id)arg1 reply:(id /* block */)arg2;
- (void)removeBundleID:(id)arg1;
- (void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 details:(id)arg4 reply:(id /* block */)arg5;
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned int)arg4 flags:(unsigned int)arg5 reply:(id /* block */)arg6;
- (void)show:(id)arg1 reply:(id /* block */)arg2;
- (void)start;
- (void)stop;

@end
