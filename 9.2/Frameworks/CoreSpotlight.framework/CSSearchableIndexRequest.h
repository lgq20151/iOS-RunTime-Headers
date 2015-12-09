/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableIndexRequest : NSObject {
    id /* block */  _completionBlock;
    NSData * _data;
    BOOL  _finished;
    CSSearchableIndex * _index;
    NSString * _label;
    unsigned int  _maxRetryCount;
    id /* block */  _performBlock;
    int  _requestID;
    unsigned int  _retryCount;
    BOOL  _shouldThrottle;
    BOOL  _started;
    BOOL  _throttled;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) BOOL finished;
@property (nonatomic, retain) CSSearchableIndex *index;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned int maxRetryCount;
@property (nonatomic, copy) id /* block */ performBlock;
@property (nonatomic) int requestID;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL shouldThrottle;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL throttled;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_perform;
- (void)_throttleIfNecessary;
- (void)_unthrottleIfNecessary;
- (id /* block */)completionBlock;
- (id)data;
- (void)dealloc;
- (id)description;
- (void)finishWithError:(id)arg1;
- (BOOL)finished;
- (id)index;
- (id)initWithSearchableIndex:(id)arg1 label:(id)arg2;
- (id)label;
- (unsigned int)maxRetryCount;
- (id /* block */)performBlock;
- (int)requestID;
- (unsigned int)retryCount;
- (void)retryIfNecessaryWithError:(id)arg1;
- (void)retryIfNecessaryWithError:(id)arg1 data:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setIndex:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRetryCount:(unsigned int)arg1;
- (void)setPerformBlock:(id /* block */)arg1;
- (void)setRequestID:(int)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (void)setShouldThrottle:(BOOL)arg1;
- (void)setStarted:(BOOL)arg1;
- (void)setThrottled:(BOOL)arg1;
- (BOOL)shouldThrottle;
- (void)start;
- (BOOL)started;
- (BOOL)throttled;

@end