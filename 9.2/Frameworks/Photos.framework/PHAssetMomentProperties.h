/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetMomentProperties : NSObject {
    PHAsset * _asset;
    NSData * _reverseLocationData;
    BOOL  _reverseLocationDataIsValid;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSData *reverseLocationData;
@property (nonatomic, readonly) BOOL reverseLocationDataIsValid;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;
- (id)reverseLocationData;
- (BOOL)reverseLocationDataIsValid;

@end