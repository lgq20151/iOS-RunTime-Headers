/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject> {
    _MKAnnotationViewAnchor * _anchor;
    BOOL  _animatingToCoordinate;
    <MKAnnotation> * _annotation;
    MKAnnotationManager * _annotationManager;
    id /* block */  _calloutHitTest;
    struct CGPoint { 
        float x; 
        float y; 
    }  _calloutOffset;
    UICalloutView * _calloutView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _centerOffset;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    BOOL  _customTransformApplied;
    UIView * _detailCalloutAccessoryView;
    unsigned int  _dragState;
    BOOL  _explicitlyHidden;
    struct { 
        unsigned int disabled : 1; 
        unsigned int selected : 1; 
        unsigned int canShowCallout : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int canDisplayDisclosureInCallout : 1; 
        unsigned int canDisplayPlacemarkInCallout : 1; 
        unsigned int draggable : 1; 
    }  _flags;
    BOOL  _hiddenForInvalidPoint;
    BOOL  _hiddenForOffscreen;
    UIImage * _image;
    BOOL  _internalTransformApplied;
    UIView * _leftCalloutAccessoryView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _leftCalloutOffset;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
    }  _mapDisplayStyle;
    float  _mapPitchRadians;
    float  _mapRotationRadians;
    unsigned int  _mapType;
    struct { 
        double latitude; 
        double longitude; 
    }  _presentationCoordinate;
    id /* block */  _presentationCoordinateChangedCallback;
    double  _presentationCourse;
    NSString * _reuseIdentifier;
    UIView * _rightCalloutAccessoryView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _rightCalloutOffset;
    float  _rotationRadians;
    GEORouteMatch * _routeMatch;
    BOOL  _tracking;
    MKUserLocationAnnotationViewProxy * _userLocationProxy;
    unsigned int  _zIndex;
}

@property (getter=_isAnimatingToCoordinate, setter=_setAnimatingToCoordinate:, nonatomic) BOOL _animatingToCoordinate;
@property (setter=_setAnnotationManager:, nonatomic) MKAnnotationManager *_annotationManager;
@property (nonatomic, copy) id /* block */ _calloutHitTest;
@property (setter=_setPresentationCoordinate:, nonatomic) struct { double x1; double x2; } _presentationCoordinate;
@property (setter=_setPresentationCoordinateChangedCallback:, nonatomic, copy) id /* block */ _presentationCoordinateChangedCallback;
@property (setter=_setPresentationCourse:, nonatomic) double _presentationCourse;
@property (setter=_setRouteMatch:, nonatomic, retain) GEORouteMatch *_routeMatch;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _significantFrame;
@property (getter=_isTracking, setter=_setTracking:, nonatomic) BOOL _tracking;
@property (nonatomic, readonly) MKUserLocationAnnotationViewProxy *_userLocationProxy;
@property (nonatomic, readonly) VKAnchorWrapper *anchor;
@property (nonatomic, retain) <MKAnnotation> *annotation;
@property (nonatomic) struct CGPoint { float x1; float x2; } calloutOffset;
@property (nonatomic) BOOL canShowCallout;
@property (nonatomic) struct CGPoint { float x1; float x2; } centerOffset;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailCalloutAccessoryView;
@property (nonatomic) unsigned int dragState;
@property (getter=isDraggable, nonatomic) BOOL draggable;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (getter=_isHiddenForInvalidPoint, setter=_setHiddenForInvalidPoint:, nonatomic) BOOL hiddenForInvalidPoint;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIView *leftCalloutAccessoryView;
@property (nonatomic) struct CGPoint { float x1; float x2; } leftCalloutOffset;
@property (getter=_mapDisplayStyle, setter=_setMapDisplayStyle:, nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; } mapDisplayStyle;
@property (getter=_mapPitchRadians, setter=_setMapPitchRadians:, nonatomic) float mapPitchRadians;
@property (getter=_mapRotationRadians, setter=_setMapRotationRadians:, nonatomic) float mapRotationRadians;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, retain) UIView *rightCalloutAccessoryView;
@property (nonatomic) struct CGPoint { float x1; float x2; } rightCalloutOffset;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (getter=_significantBounds, nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } significantBounds;
@property (readonly) Class superclass;

+ (id)_disclosureCalloutButton;
+ (BOOL)_followsTerrain;
+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentLocationTitle;
+ (id)droppedPinTitle;

- (void).cxx_destruct;
- (id)_annotationContainer;
- (id)_annotationManager;
- (id /* block */)_calloutHitTest;
- (id)_calloutView;
- (BOOL)_canChangeOrientation;
- (BOOL)_canDisplayDisclosureInCallout;
- (BOOL)_canDisplayPlacemarkInCallout;
- (id)_containerView;
- (id)_contentLayer;
- (void)_didUpdatePosition;
- (struct CGPoint { float x1; float x2; })_draggingDropOffset;
- (void)_enableRotationForHeadingMode:(float)arg1;
- (id)_getPopover:(id)arg1;
- (BOOL)_hasAlternateOrientation;
- (void)_invalidateCachedCoordinate;
- (BOOL)_isAnimatingToCoordinate;
- (BOOL)_isHiddenForInvalidPoint;
- (BOOL)_isTracking;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; })_mapDisplayStyle;
- (float)_mapPitchRadians;
- (float)_mapRotationRadians;
- (unsigned int)_mapType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mapkit_visibleRect;
- (unsigned int)_orientationCount;
- (float)_pointsForDistance:(double)arg1;
- (struct { double x1; double x2; })_presentationCoordinate;
- (id /* block */)_presentationCoordinateChangedCallback;
- (double)_presentationCourse;
- (void)_removePopover;
- (void)_resetZIndex;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (id)_routeMatch;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (void)_setAnnotationManager:(id)arg1;
- (void)_setCalloutView:(id)arg1;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (void)_setHiddenForInvalidPoint:(BOOL)arg1;
- (void)_setHiddenForOffscreen:(BOOL)arg1;
- (void)_setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;
- (void)_setMapPitchRadians:(float)arg1;
- (void)_setMapRotationRadians:(float)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)_setPresentationCoordinateChangedCallback:(id /* block */)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setRotationRadians:(float)arg1 withAnimation:(id)arg2;
- (void)_setRouteMatch:(id)arg1;
- (void)_setTracking:(BOOL)arg1;
- (void)_setZIndex:(unsigned int)arg1;
- (void)_setZIndex:(unsigned int)arg1 notify:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantFrame;
- (void)_transitionFrom:(int)arg1 to:(int)arg2 duration:(double)arg3;
- (void)_updateFromMap;
- (id)_userLocationProxy;
- (void)_userTrackingModeDidChange:(id)arg1;
- (id)_vkMarker;
- (unsigned int)_zIndex;
- (id)anchor;
- (id)annotation;
- (struct CGPoint { float x1; float x2; })calloutOffset;
- (BOOL)canShowCallout;
- (struct CGPoint { float x1; float x2; })centerOffset;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)detailCalloutAccessoryView;
- (unsigned int)dragState;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct UIImage { Class x1; }*)image;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDraggable;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isPersistent;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (id)leftCalloutAccessoryView;
- (struct CGPoint { float x1; float x2; })leftCalloutOffset;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { float x1; float x2; })rightCalloutOffset;
- (void)setAnnotation:(id)arg1;
- (void)setCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCanShowCallout:(BOOL)arg1;
- (void)setCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setDragState:(unsigned int)arg1;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDraggable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)set_calloutHitTest:(id /* block */)arg1;

@end