/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMovieAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    AVAsset * _avAsset;
    NSNumber * _irisPhotoExposureSec;
    NSNumber * _irisPhotoOffsetSec;
    BOOL  _isIris;
    BOOL  _isSlowmo;
    unsigned int  _requestedAnalyses;
    NSMutableDictionary * _results;
    PFVideoAVObjectBuilder * _slowmoTimeMap;
    int  _status;
}

@property (readonly) int status;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)addResults:(id)arg1 forKey:(id)arg2;
- (id)analyzeAsset:(id /* block */)arg1;
- (long)analyzeVideoTrack:(id)arg1 cancel:(id /* block */)arg2 flags:(unsigned int*)arg3;
- (id)createDecoderForTrack:(id)arg1;
- (id)createVideoAnalyzer:(id)arg1;
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned int)arg2;
- (id)initWithIrisAVAsset:(id)arg1 irisPhotoOffsetSec:(float)arg2 irisPhotoExposureSec:(float)arg3 forAnalysisTypes:(unsigned int)arg4;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned int)arg2;
- (id)orientationForVideoTrack:(id)arg1;
- (int)status;

@end