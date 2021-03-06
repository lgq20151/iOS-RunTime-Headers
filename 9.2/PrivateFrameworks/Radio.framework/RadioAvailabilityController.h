/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAvailabilityController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BOOL  _hasSuccessfullyLoadedURLBag;
    NSNumber * _lastActiveAccountUniqueIdentifier;
    BOOL  _radioAvailable;
}

@property (getter=isRadioAvailable, nonatomic, readonly) BOOL radioAvailable;

- (void).cxx_destruct;
- (id)_currentStoreFrontIdentifier;
- (void)_networkReachabilityFlagsDidChangeNotification:(id)arg1;
- (void)_reloadRadioAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)_storeFrontDidChangeNotification:(id)arg1;
- (id)_userDefaultsDomain;
- (void)dealloc;
- (void)getRadioAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (BOOL)isRadioAvailable;

@end
