/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
 */

@interface UNLocationMonitor : NSObject <CLLocationManagerDelegate> {
    NSString * _bundleIdentifier;
    <UNLocationMonitorDelegate> * _delegate;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNLocationMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;

- (void)_queue_delegate_didEnterRegion:(id)arg1;
- (void)_queue_delegate_didExitRegion:(id)arg1;
- (void)_queue_didEnterRegion:(id)arg1;
- (void)_queue_didExitRegion:(id)arg1;
- (void)_queue_markAsHavingReceivedLocation;
- (void)_queue_startMonitoringForRegion:(id)arg1;
- (void)_queue_stopMonitoringForRegion:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)markAsHavingReceivedLocation;
- (void)setDelegate:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;

@end