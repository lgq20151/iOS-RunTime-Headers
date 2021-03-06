/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyMember : NSObject <SSXPCCoding> {
    NSString * _firstName;
    NSString * _iCloudAccountName;
    NSNumber * _iCloudIdentifier;
    NSNumber * _iTunesIdentifier;
    NSString * _lastName;
    BOOL  _me;
    BOOL  _sharingPurchases;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *iCloudAccountName;
@property (nonatomic, retain) NSNumber *iCloudIdentifier;
@property (nonatomic, retain) NSNumber *iTunesIdentifier;
@property (nonatomic, retain) NSString *lastName;
@property (getter=isMe, nonatomic) BOOL me;
@property (getter=isSharingPurchases, nonatomic) BOOL sharingPurchases;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (id)description;
- (id)firstName;
- (id)iCloudAccountName;
- (id)iCloudIdentifier;
- (id)iTunesIdentifier;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isMe;
- (BOOL)isSharingPurchases;
- (id)lastName;
- (id)newCacheRepresentation;
- (void)setFirstName:(id)arg1;
- (void)setICloudAccountName:(id)arg1;
- (void)setICloudIdentifier:(id)arg1;
- (void)setITunesIdentifier:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMe:(BOOL)arg1;
- (void)setSharingPurchases:(BOOL)arg1;

@end
