/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2MOBIKE : NSObject <NSObject> {
    NEIKEv2PacketTunnelProvider * _ikev2TunnelProvider;
    BOOL  _mobikeCapable;
    unsigned int  _mobikeRetries;
    BOOL  _mobikeRunning;
    NSObject<OS_dispatch_source> * _mobikeTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property NEIKEv2PacketTunnelProvider *ikev2TunnelProvider;
@property BOOL mobikeCapable;
@property unsigned int mobikeRetries;
@property BOOL mobikeRunning;
@property (retain) NSObject<OS_dispatch_source> *mobikeTimer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)ikev2MOBIKECleanup;
- (void)ikev2MOBIKEFailed;
- (void)ikev2MOBIKEReassert;
- (BOOL)ikev2MOBIKESetup:(BOOL)arg1 ifChange:(BOOL)arg2;
- (BOOL)ikev2MOBIKESkipTunnelNetworkSettingsUpdate;
- (void)ikev2MOBIKEStart:(unsigned int)arg1 pathStatus:(int)arg2 persist:(unsigned char)arg3;
- (void)ikev2MOBIKEStopTimer;
- (id)ikev2TunnelProvider;
- (id)initWithTunnelProvider:(id)arg1;
- (BOOL)mobikeCapable;
- (unsigned int)mobikeRetries;
- (BOOL)mobikeRunning;
- (id)mobikeTimer;
- (void)setIkev2TunnelProvider:(id)arg1;
- (void)setMobikeCapable:(BOOL)arg1;
- (void)setMobikeRetries:(unsigned int)arg1;
- (void)setMobikeRunning:(BOOL)arg1;
- (void)setMobikeTimer:(id)arg1;

@end
