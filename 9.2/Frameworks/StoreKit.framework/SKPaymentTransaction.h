/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentTransaction : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) NSString *_transactionIdentifier;
@property (nonatomic, readonly) NSArray *downloads;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *matchingIdentifier;
@property (nonatomic, readonly) SKPaymentTransaction *originalTransaction;
@property (nonatomic, readonly) SKPayment *payment;
@property (nonatomic, readonly) NSDate *transactionDate;
@property (nonatomic, readonly) NSString *transactionIdentifier;
@property (nonatomic, readonly) NSData *transactionReceipt;
@property (nonatomic, readonly) int transactionState;

- (void)_setDownloads:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionState:(int)arg1;
- (id)_transactionIdentifier;
- (BOOL)canMergeWithTransaction:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloads;
- (id)error;
- (id)init;
- (id)initWithPayment:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)matchingIdentifier;
- (BOOL)mergeWithTransaction:(id)arg1;
- (id)originalTransaction;
- (id)payment;
- (id)transactionDate;
- (id)transactionIdentifier;
- (id)transactionReceipt;
- (int)transactionState;

@end