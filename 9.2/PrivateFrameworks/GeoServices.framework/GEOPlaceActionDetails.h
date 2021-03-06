/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    NSString * _actionUrl;
    unsigned long long  _animationID;
    unsigned long long  _businessID;
    struct { 
        unsigned int animationID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int searchResponseRelativeTimestamp : 1; 
        unsigned int targetID : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int resultIndex : 1; 
    }  _has;
    int  _localSearchProviderID;
    NSString * _photoId;
    long long  _placeID;
    int  _resultIndex;
    double  _searchResponseRelativeTimestamp;
    unsigned long long  _targetID;
    GEOTransitPlaceCard * _transitPlaceCard;
}

@property (nonatomic, retain) NSString *actionUrl;
@property (nonatomic) unsigned long long animationID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic, readonly) BOOL hasActionUrl;
@property (nonatomic) BOOL hasAnimationID;
@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic, readonly) BOOL hasPhotoId;
@property (nonatomic) BOOL hasPlaceID;
@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) BOOL hasSearchResponseRelativeTimestamp;
@property (nonatomic) BOOL hasTargetID;
@property (nonatomic, readonly) BOOL hasTransitPlaceCard;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic, retain) NSString *photoId;
@property (nonatomic) long long placeID;
@property (nonatomic) int resultIndex;
@property (nonatomic) double searchResponseRelativeTimestamp;
@property (nonatomic) unsigned long long targetID;
@property (nonatomic, retain) GEOTransitPlaceCard *transitPlaceCard;

+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
+ (id)actionDetailsWithTargetID:(unsigned long long)arg1;

- (id)actionUrl;
- (unsigned long long)animationID;
- (unsigned long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasActionUrl;
- (BOOL)hasAnimationID;
- (BOOL)hasBusinessID;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasPhotoId;
- (BOOL)hasPlaceID;
- (BOOL)hasResultIndex;
- (BOOL)hasSearchResponseRelativeTimestamp;
- (BOOL)hasTargetID;
- (BOOL)hasTransitPlaceCard;
- (unsigned int)hash;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (id)photoId;
- (long long)placeID;
- (BOOL)readFrom:(id)arg1;
- (int)resultIndex;
- (double)searchResponseRelativeTimestamp;
- (void)setActionUrl:(id)arg1;
- (void)setAnimationID:(unsigned long long)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setHasAnimationID:(BOOL)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasPlaceID:(BOOL)arg1;
- (void)setHasResultIndex:(BOOL)arg1;
- (void)setHasSearchResponseRelativeTimestamp:(BOOL)arg1;
- (void)setHasTargetID:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPhotoId:(id)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setSearchResponseRelativeTimestamp:(double)arg1;
- (void)setTargetID:(unsigned long long)arg1;
- (void)setTransitPlaceCard:(id)arg1;
- (unsigned long long)targetID;
- (id)transitPlaceCard;
- (void)writeTo:(id)arg1;

@end
