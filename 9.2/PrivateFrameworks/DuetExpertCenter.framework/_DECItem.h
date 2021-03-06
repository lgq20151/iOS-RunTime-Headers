/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECItem : NSObject <NSSecureCoding, _DECItemEquivalency> {
    NSUUID * _identifier;
    NSMutableDictionary * _metadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSMutableDictionary *metadata;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToItem:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)metadata;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
