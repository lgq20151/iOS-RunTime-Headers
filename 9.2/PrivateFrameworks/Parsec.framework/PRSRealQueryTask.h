/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSRealQueryTask : PRSQueryTask <PRSParsecDataHandler, PRSTriggerTask> {
    BOOL  _allowLocation;
    NSMutableData * _collectedData;
    NSURLSessionDataTask * _dataTask;
    BOOL  _doCache;
    BOOL  _doResume;
    <PRSSessionController> * _factory;
    BOOL  _failed;
    NSString * _queryString;
    float  _scaleFactor;
    double  _startTime;
}

@property (nonatomic) BOOL allowLocation;
@property (nonatomic, retain) NSMutableData *collectedData;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL doCache;
@property BOOL doResume;
@property (readonly) <PRSSessionController> *factory;
@property BOOL failed;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *queryString;
@property float scaleFactor;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_processSearchResponseOnClientQueue:(id)arg1;
- (BOOL)allowLocation;
- (void)cancel;
- (id)collectedData;
- (id)dataTask;
- (void)decodeData:(id)arg1;
- (BOOL)doCache;
- (BOOL)doResume;
- (id)factory;
- (BOOL)failed;
- (void)gotCachedResultSet:(id)arg1;
- (id)initWithSession:(id)arg1 handler:(id)arg2 factory:(id)arg3 queue:(id)arg4 scaleFactor:(float)arg5 allowLocation:(BOOL)arg6 feedback:(id)arg7;
- (id)queryString;
- (void)resume;
- (float)scaleFactor;
- (void)setAllowLocation:(BOOL)arg1;
- (void)setCollectedData:(id)arg1;
- (void)setDataTask:(id)arg1;
- (void)setDoCache:(BOOL)arg1;
- (void)setDoResume:(BOOL)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setQueryString:(id)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)triggerQuery:(BOOL)arg1;
- (void)trigger_noresults;

@end