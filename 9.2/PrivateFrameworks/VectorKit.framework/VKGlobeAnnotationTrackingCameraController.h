/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    struct Anchor { int (**x1)(); } * _anchor;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationEndCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationStartCoordinate;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _currentAnimationStartCoordinate;
    struct GlobeView { int (**x1)(); } * _globeView;
}

@property (nonatomic) struct GlobeView { int (**x1)(); }*globeView;

- (struct Vector2i { int x1; int x2; })_centerCursor;
- (void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3;
- (void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2;
- (void)dealloc;
- (struct GlobeView { int (**x1)(); }*)globeView;
- (id)init;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); }*)arg1;

@end
