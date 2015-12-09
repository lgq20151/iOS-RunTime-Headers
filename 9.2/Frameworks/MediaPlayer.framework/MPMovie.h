/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovie : NSObject {
    double  _endPlaybackTime;
    BOOL  _explicitlySetMovieSourceType;
    MPAVItem * _item;
    double  _lastKnownDuration;
    struct CGSize { 
        float width; 
        float height; 
    }  _lastKnownNaturalSize;
    unsigned int  _lastKnownType;
    BOOL  _movieIsUnplayable;
    int  _movieSourceType;
    double  _startPlaybackTime;
    NSURL * _url;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double endPlaybackTime;
@property (nonatomic, readonly) unsigned int movieMediaTypes;
@property (nonatomic) int movieSourceType;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic) double startPlaybackTime;
@property (nonatomic, readonly) NSURL *url;

+ (id)movieWithAsset:(id)arg1 error:(id*)arg2;
+ (id)movieWithPlayerItem:(id)arg1 error:(id*)arg2;
+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_MPArrayQueueItem;
- (void)_determineMediaType;
- (void)_durationAvailableNotification:(id)arg1;
- (id)_initWithAsset:(id)arg1 error:(id*)arg2;
- (id)_initWithPlayerItem:(id)arg1 error:(id*)arg2;
- (id)_initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_sharedInit;
- (void)_typeAvailableNotification:(id)arg1;
- (id)asset;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (unsigned int)movieMediaTypes;
- (int)movieSourceType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (double)playableDuration;
- (id)playerItem;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(int)arg1;
- (void)setStartPlaybackTime:(double)arg1;
- (double)startPlaybackTime;
- (id)url;

@end