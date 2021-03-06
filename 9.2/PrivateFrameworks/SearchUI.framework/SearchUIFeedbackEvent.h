/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIFeedbackEvent : NSObject {
    NSString * _actionArea;
    NSString * _actionCardType;
    NSString * _actionDestination;
    NSString * _actionTarget;
    NSString * _actionType;
    <SearchUIResult> * _result;
    NSDate * _timestamp;
}

@property (nonatomic, copy) NSString *actionArea;
@property (nonatomic, copy) NSString *actionCardType;
@property (nonatomic, copy) NSString *actionDestination;
@property (nonatomic, copy) NSString *actionTarget;
@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, retain) <SearchUIResult> *result;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)feedbackEventOnResult:(id)arg1 actionArea:(id)arg2 actionType:(id)arg3 cardType:(id)arg4 actionTarget:(id)arg5 actionDestination:(id)arg6;

- (void).cxx_destruct;
- (id)actionArea;
- (id)actionCardType;
- (id)actionDestination;
- (id)actionTarget;
- (id)actionType;
- (id)result;
- (void)setActionArea:(id)arg1;
- (void)setActionCardType:(id)arg1;
- (void)setActionDestination:(id)arg1;
- (void)setActionTarget:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
