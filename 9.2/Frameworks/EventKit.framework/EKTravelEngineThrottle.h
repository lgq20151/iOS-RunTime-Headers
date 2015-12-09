/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngineThrottle : NSObject {
    id /* block */  _emissionBlock;
    PCPersistentTimer * _emissionTimer;
    NSDate * _nextEmissionDate;
    BOOL  _running;
    NSString * _throttleIdentifier;
    NSObject<OS_dispatch_queue> * _throttleQueue;
}

@property (nonatomic, copy) id /* block */ emissionBlock;
@property (nonatomic, retain) PCPersistentTimer *emissionTimer;
@property (nonatomic, retain) NSDate *nextEmissionDate;
@property (nonatomic) BOOL running;
@property (nonatomic, retain) NSString *throttleIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *throttleQueue;

+ (double)emissionThresholdTimeInterval;

- (void).cxx_destruct;
- (void)_emissionTimerFired:(id)arg1;
- (void)_fireEmissionBlock;
- (void)_registerForNotificationObservation;
- (void)_significantTimeChangeNotificationReceived;
- (void)_uninstallEmissionTimer;
- (void)_unregisterForNotificationObservation;
- (void)_updateEmissionDate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)emissionBlock;
- (id)emissionTimer;
- (id)init;
- (id)nextEmissionDate;
- (BOOL)running;
- (void)setEmissionBlock:(id /* block */)arg1;
- (void)setEmissionTimer:(id)arg1;
- (void)setNextEmissionDate:(id)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setThrottleIdentifier:(id)arg1;
- (void)setThrottleQueue:(id)arg1;
- (void)tearDown;
- (id)throttleIdentifier;
- (id)throttleQueue;
- (void)updatePredictedDepartureDate:(id)arg1;

@end