/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTObjectCacheItem : NSObject {
    double  _lastAccessedDate;
    NSObject * _object;
}

@property (nonatomic, readonly) double lastAccessedDate;
@property (nonatomic, readonly) NSObject *object;

+ (id)cacheItemWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)arg1;
- (double)lastAccessedDate;
- (id)object;
- (void)touch;

@end
