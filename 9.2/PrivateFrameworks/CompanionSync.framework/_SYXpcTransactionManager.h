/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYXpcTransactionManager : NSObject {
    NSMutableDictionary * _table;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)beginTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4;
- (void)dealloc;
- (void)endTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4;
- (id)init;
- (void)logOpenTransactions;

@end