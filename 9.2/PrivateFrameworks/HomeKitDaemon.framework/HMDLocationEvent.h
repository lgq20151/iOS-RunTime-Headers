/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocationEvent : HMDEvent <NSSecureCoding> {
    CLRegion * _region;
}

@property (nonatomic, retain) CLRegion *region;
@property (nonatomic, readonly, copy) CLRegion *uniqueRegion;

+ (id)locationEventWithDictionary:(id)arg1 error:(id*)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (BOOL)setRegionIfValid:(id)arg1;
- (id)uniqueRegion;

@end
