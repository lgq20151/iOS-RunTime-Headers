/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWQuickTimeReferenceMovieGenerator : NSObject {
    struct OpaqueCMByteStream { } * _byteStream;
    int  _masterMovieAudioExtractionID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieDuration;
    BOOL  _masterMovieParsingComplete;
    struct OpaqueFigFormatReader { } * _masterMovieReader;
    NSObject<OS_dispatch_queue> * _refMovieGenerationQueue;
    NSMutableArray * _refMovieInfoAndCallbacks;
    struct OpaqueFigSimpleMutex { } * _refMovieInfoAndCallbacksMutex;
    BOOL  _sourceIsFrontFacingCamera;
}

+ (BOOL)_addStillImageTimeMetadataTrackToAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3;
+ (void)initialize;

- (long)_generateRefMovieForInfo:(id)arg1;
- (void)_generateRefMovies:(BOOL)arg1;
- (void)dealloc;
- (void)flush;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream { }*)arg1 forFrontFacingCamera:(BOOL)arg2;
- (void)parseAdditionalFragments;
- (void)writeReferenceMovieWithInfo:(id)arg1 completionHandler:(id /* block */)arg2;

@end
