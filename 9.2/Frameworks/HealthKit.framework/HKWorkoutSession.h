/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutSession : NSObject <NSSecureCoding, _HKWorkoutSessionDelegate> {
    unsigned int  _activityType;
    <HKWorkoutSessionDelegate> * _delegate;
    _HKWorkoutSession * _privateSession;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned int activityType;
@property (readonly, copy) NSString *debugDescription;
@property <HKWorkoutSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned int hash;
@property (readonly) int locationType;
@property (getter=_privateSession, nonatomic, readonly) _HKWorkoutSession *privateSession;
@property (readonly) NSDate *startDate;
@property (readonly) int state;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithActivityType:(unsigned int)arg1 locationType:(int)arg2;
- (id)_privateSession;
- (unsigned int)activityType;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithActivityType:(unsigned int)arg1 locationType:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (int)locationType;
- (void)setDelegate:(id)arg1;
- (id)startDate;
- (int)state;
- (void)workoutSession:(id)arg1 didChangeToState:(int)arg2 fromState:(int)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;

@end
