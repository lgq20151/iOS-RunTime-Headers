/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarkerShield : VKFeatureMarker <GEOTransitShieldDataSource> {
    VKImageSourceKey * _imageKey;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{?={Matrix<float' */ struct  color; /* unknown property attribute:  1>=[4f]}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (unsigned int)_unusedMethod;
- (struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; })color;
- (void)dealloc;
- (id)initWithImageKey:(id)arg1;
- (id)locale;
- (id)text;
- (long long)type;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)shieldColorString;
- (id)shieldText;
- (long long)shieldType;

@end
