/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentDataProvider, PKPaymentServiceDelegate> {
    PKPaymentService * _paymentService;
    PKSecureElement * _secureElement;
    <PKPaymentDataProviderDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultPaymentPassIdentifier;
@property (nonatomic) <PKPaymentDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isDeviceInRestrictedMode;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) BOOL secureElementIsProductionSigned;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)defaultPaymentPassIdentifier;
- (id)delegate;
- (id)init;
- (BOOL)isDeviceInRestrictedMode;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (id)secureElementIdentifier;
- (BOOL)secureElementIsProductionSigned;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentPassIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned int)arg2 limit:(int)arg3 completion:(id /* block */)arg4;

@end
