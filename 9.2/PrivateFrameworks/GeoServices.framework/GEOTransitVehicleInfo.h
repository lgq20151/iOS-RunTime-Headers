/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitVehicleInfo : PBCodable <NSCopying> {
    GEOTransitVehicleTime * _arrivalTime;
    GEOTransitClusterInfo * _clusterInfo;
    unsigned int  _departureFrequencyMax;
    unsigned int  _departureFrequencyMin;
    GEOTransitVehicleTime * _departureTime;
    struct { 
        unsigned int tripMuid : 1; 
        unsigned int departureFrequencyMax : 1; 
        unsigned int departureFrequencyMin : 1; 
        unsigned int lineIndex : 1; 
        unsigned int pickupDropoffType : 1; 
        unsigned int routeLineArtworkIndex : 1; 
    }  _has;
    unsigned int  _lineIndex;
    int  _pickupDropoffType;
    unsigned int  _routeLineArtworkIndex;
    unsigned long long  _tripMuid;
    NSString * _vehicleNumber;
}

@property (nonatomic, retain) GEOTransitVehicleTime *arrivalTime;
@property (nonatomic, retain) GEOTransitClusterInfo *clusterInfo;
@property (nonatomic) unsigned int departureFrequencyMax;
@property (nonatomic) unsigned int departureFrequencyMin;
@property (nonatomic, retain) GEOTransitVehicleTime *departureTime;
@property (nonatomic, readonly) BOOL hasArrivalTime;
@property (nonatomic, readonly) BOOL hasClusterInfo;
@property (nonatomic) BOOL hasDepartureFrequencyMax;
@property (nonatomic) BOOL hasDepartureFrequencyMin;
@property (nonatomic, readonly) BOOL hasDepartureTime;
@property (nonatomic) BOOL hasLineIndex;
@property (nonatomic) BOOL hasPickupDropoffType;
@property (nonatomic) BOOL hasRouteLineArtworkIndex;
@property (nonatomic) BOOL hasTripMuid;
@property (nonatomic, readonly) BOOL hasVehicleNumber;
@property (nonatomic) unsigned int lineIndex;
@property (nonatomic) int pickupDropoffType;
@property (nonatomic) unsigned int routeLineArtworkIndex;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic, retain) NSString *vehicleNumber;

- (id)arrivalTime;
- (id)clusterInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)departureFrequencyMax;
- (unsigned int)departureFrequencyMin;
- (id)departureTime;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArrivalTime;
- (BOOL)hasClusterInfo;
- (BOOL)hasDepartureFrequencyMax;
- (BOOL)hasDepartureFrequencyMin;
- (BOOL)hasDepartureTime;
- (BOOL)hasLineIndex;
- (BOOL)hasPickupDropoffType;
- (BOOL)hasRouteLineArtworkIndex;
- (BOOL)hasTripMuid;
- (BOOL)hasVehicleNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lineIndex;
- (void)mergeFrom:(id)arg1;
- (int)pickupDropoffType;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)routeLineArtworkIndex;
- (void)setArrivalTime:(id)arg1;
- (void)setClusterInfo:(id)arg1;
- (void)setDepartureFrequencyMax:(unsigned int)arg1;
- (void)setDepartureFrequencyMin:(unsigned int)arg1;
- (void)setDepartureTime:(id)arg1;
- (void)setHasDepartureFrequencyMax:(BOOL)arg1;
- (void)setHasDepartureFrequencyMin:(BOOL)arg1;
- (void)setHasLineIndex:(BOOL)arg1;
- (void)setHasPickupDropoffType:(BOOL)arg1;
- (void)setHasRouteLineArtworkIndex:(BOOL)arg1;
- (void)setHasTripMuid:(BOOL)arg1;
- (void)setLineIndex:(unsigned int)arg1;
- (void)setPickupDropoffType:(int)arg1;
- (void)setRouteLineArtworkIndex:(unsigned int)arg1;
- (void)setTripMuid:(unsigned long long)arg1;
- (void)setVehicleNumber:(id)arg1;
- (unsigned long long)tripMuid;
- (id)vehicleNumber;
- (void)writeTo:(id)arg1;

@end
