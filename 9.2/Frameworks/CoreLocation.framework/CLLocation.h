/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocation : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) int _mapkit_source;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; } clientLocation;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) double course;
@property (getter=_mapkit_courseAccuracy, nonatomic, readonly) double courseAccuracy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CLFloor *floor;
@property (getter=_mapkit_hasMatch, nonatomic, readonly) BOOL hasMatch;
@property (getter=_mapkit_hasValidCourse, nonatomic, readonly) BOOL hasValidCourse;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) unsigned int integrity;
@property (getter=_mapkit_isStale, nonatomic, readonly) BOOL isStale;
@property (nonatomic, readonly) NSString *iso6709Notation;
@property (getter=_mapkit_legacyHasMatch, nonatomic, readonly) BOOL legacyHasMatch;
@property (getter=_mapkit_locationDescription, nonatomic, readonly) NSString *locationDescription;
@property (nonatomic, readonly) CLLocationMatchInfo *matchInfo;
@property (nonatomic, readonly) struct { double x1; double x2; } rawCoordinate;
@property (nonatomic, readonly) double rawCourse;
@property (nonatomic) int referenceFrame;
@property (getter=_mapkit_routeMatch, nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) double speed;
@property (getter=_mapkit_speedAccuracy, nonatomic, readonly) double speedAccuracy;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) double trustedTimestamp;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) double verticalAccuracy;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (BOOL)supportsSecureCoding;

- (id)_initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (double)altitude;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; })clientLocation;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (void)dealloc;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)floor;
- (double)getDistanceFrom:(id)arg1;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; })arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; })arg1 matchInfo:(id)arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (unsigned int)integrity;
- (id)iso6709Notation;
- (id)matchInfo;
- (id)propagateLocationToTime:(double)arg1;
- (struct { double x1; double x2; })rawCoordinate;
- (double)rawCourse;
- (int)referenceFrame;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setReferenceFrame:(int)arg1;
- (id)shortDescription;
- (id)snapToResolution:(double)arg1;
- (double)speed;
- (id)timestamp;
- (double)trustedTimestamp;
- (int)type;
- (double)verticalAccuracy;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_stringWithType:(int)arg1;
+ (double)_mapkit_timeToExpire;

- (double)_mapkit_courseAccuracy;
- (BOOL)_mapkit_hasMatch;
- (BOOL)_mapkit_hasValidCourse;
- (BOOL)_mapkit_isEqualToLocationCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)_mapkit_isStale;
- (BOOL)_mapkit_legacyHasMatch;
- (id)_mapkit_locationDescription;
- (id)_mapkit_routeMatch;
- (int)_mapkit_source;
- (double)_mapkit_speedAccuracy;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 rawCoordinate:(struct { double x1; double x2; })arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 matchInfo:(id)arg13;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

- (id)cam_videoMetadataRepresentation;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)cam_videoMetadataRepresentation;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (unsigned int)cplSpecialHash;
- (BOOL)cplSpecialIsEqual:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (int)pl_locationHash;
- (id)pl_newSurroundingLocationsHashes;

@end