/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenCanvas : NSObject <VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate, VKWorldDelegate> {
    NSMutableArray * _animations;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _bgColor;
    VKCamera * _camera;
    NSMutableArray * _cameraControllers;
    BOOL  _deallocing;
    float  _debugFramesPerSecond;
    VKDispatch * _dispatch;
    <MDRenderTarget> * _displayTarget;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _fullyOccludedEdgeInsets;
    BOOL  _iconsShouldAlignToPixels;
    BOOL  _isHidden;
    BOOL  _isInBackground;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _labelEdgeInsets;
    VKLayoutContext * _layoutContext;
    struct MapCamera { struct View {} *x1; struct View {} *x2; struct Viewport {} *x3; void *x4; } * _mapCamera;
    <MDMapControllerDelegate> * _mapDelegate;
    struct RenderTree { int (**x1)(); id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; int x9; void*x10; void*x11; void*x12; const void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; } * _mapScene;
    BOOL  _needsInitialization;
    BOOL  _needsLayout;
    unsigned int  _needsRepaint;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    }  _renderQueue;
    BOOL  _rendersInBackground;
    VKScene * _scene;
    BOOL  _userIsGesturing;
    unsigned int  _wantsLayout;
    VKWorld * _world;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  bgColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic, readonly) VKCamera *camera;
@property (nonatomic, readonly) NSArray *cameraControllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float debugFramesPerSecond;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property (getter=isGesturing, nonatomic) BOOL gesturing;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL iconsShouldAlignToPixels;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property (nonatomic) <MDMapControllerDelegate> *mapDelegate;
@property (nonatomic, readonly) BOOL needsInitialization;
@property (nonatomic) BOOL rendersInBackground;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char targetDisplay;
@property (nonatomic) struct VehicleState { bool x1; } vehicleState;
@property (nonatomic, readonly) VKWorld *world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_queueUpdateDisplayLinkStatus;
- (void)addCameraController:(id)arg1;
- (void)adoptAnimation:(id)arg1;
- (void)animateWithTimestamp:(double)arg1;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })bgColor;
- (id)buildingMarkerAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)camera;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (id)cameraControllers;
- (void)cameraDidChange:(id)arg1;
- (BOOL)canRender;
- (void)clearSceneIsEffectivelyHidden:(BOOL)arg1;
- (BOOL)currentSceneRequiresMSAA;
- (void)dealloc;
- (float)debugFramesPerSecond;
- (void)didEnterBackground;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (id)featureMarkerAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)forceLayout;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)gglWillDrawWithTimestamp;
- (BOOL)iconsShouldAlignToPixels;
- (id)initWithTarget:(id)arg1 device:(const struct shared_ptr<ggl::Device> { }*)arg2 inBackground:(BOOL)arg3;
- (void)initializeWithRenderer:(struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; bool x5; float x6; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_7_1_3; } x7; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_9_1_1; } x9; bool x10; id x11; struct RenderState {} x12; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_13_1_1; } x13; struct RenderTarget {} *x14; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long x_3_3_1; } x_1_2_3; } x_15_1_1; } x15; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_16_1_1; } x16; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_17_1_1; unsigned int x_17_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_18_1_1; struct BufferLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_18_1_3; } x18; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_19_1_1; struct Texture2DLoadItem {} *x_19_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_19_1_3; } x19; unsigned int x20; }*)arg1;
- (BOOL)isGesturing;
- (BOOL)isHidden;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (void)layoutRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)mapDelegate;
- (BOOL)needsInitialization;
- (void)removeCameraController:(id)arg1;
- (BOOL)rendersInBackground;
- (void)resetRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)roadMarkersForSelectionAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)runAnimation:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)setContentsScale:(float)arg1;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIconsShouldAlignToPixels:(BOOL)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setVehicleState:(struct VehicleState { bool x1; })arg1;
- (struct shared_ptr<gss::CartoStyle> { struct CartoStyle {} *x1; struct __shared_weak_count {} *x2; })styleForFeature:(id)arg1;
- (struct shared_ptr<gss::StyleSheet> { struct StyleSheet {} *x1; struct __shared_weak_count {} *x2; })stylesheet;
- (unsigned char)targetDisplay;
- (void)transferAnimationsTo:(id)arg1;
- (void)updateCameraForFrameResize;
- (BOOL)updateDisplayLinkStatus;
- (void)updateWithTimestamp:(double)arg1;
- (struct VehicleState { bool x1; })vehicleState;
- (BOOL)wantsRender;
- (BOOL)wantsTimerTick;
- (void)willEnterForeground;
- (id)world;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;

@end