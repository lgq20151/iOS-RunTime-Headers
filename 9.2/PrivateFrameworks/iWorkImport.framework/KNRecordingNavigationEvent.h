/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingNavigationEvent : KNRecordingEvent {
    int  mAnimationPhase;
    unsigned int  mTargetEventIndex;
    TSPLazyReference * mTargetSlideNodeReference;
}

@property (nonatomic, readonly) int animationPhase;
@property (nonatomic, readonly) unsigned int targetEventIndex;
@property (nonatomic, readonly) KNSlideNode *targetSlideNode;

- (int)animationPhase;
- (BOOL)canPrecedeDiscontinuity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithContext:(id)arg1 archive:(const struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg2 unarchiver:(id)arg3;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 targetSlideNode:(id)arg2 targetEventIndex:(unsigned int)arg3 animationPhase:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIgnoredWhenSeeking;
- (void)saveToArchive:(struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg1 archiver:(id)arg2;
- (unsigned int)targetEventIndex;
- (id)targetSlideNode;

@end
