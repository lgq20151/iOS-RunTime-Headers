/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFIncident : PBCodable <NSCopying> {
    unsigned int  _alertCCode;
    BOOL  _blocked;
    int  _color;
    NSString * _crossStreet;
    float  _delay;
    unsigned long long  _durationMin;
    double  _endOffset;
    BOOL  _endTimeReliable;
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    }  _geoids;
    BOOL  _hardBlocked;
    struct { 
        unsigned int durationMin : 1; 
        unsigned int endOffset : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int startOffset : 1; 
        unsigned int startTime : 1; 
        unsigned int updateTime : 1; 
        unsigned int alertCCode : 1; 
        unsigned int color : 1; 
        unsigned int delay : 1; 
        unsigned int laneClosureCount : 1; 
        unsigned int laneClosureType : 1; 
        unsigned int maxZoomLevel : 1; 
        unsigned int minZoomLevel : 1; 
        unsigned int significance : 1; 
        unsigned int speed : 1; 
        unsigned int trafficTrend : 1; 
        unsigned int type : 1; 
        unsigned int blocked : 1; 
        unsigned int endTimeReliable : 1; 
        unsigned int hardBlocked : 1; 
        unsigned int hidden : 1; 
        unsigned int navigationAlert : 1; 
    }  _has;
    BOOL  _hidden;
    NSString * _incidentId;
    NSMutableArray * _infos;
    unsigned int  _laneClosureCount;
    int  _laneClosureType;
    double  _latitude;
    double  _longitude;
    unsigned int  _maxZoomLevel;
    unsigned int  _minZoomLevel;
    BOOL  _navigationAlert;
    int  _significance;
    float  _speed;
    double  _startOffset;
    long long  _startTime;
    NSString * _street;
    int  _trafficTrend;
    int  _type;
    long long  _updateTime;
    NSData * _zilch;
}

@property (nonatomic) unsigned int alertCCode;
@property (nonatomic) BOOL blocked;
@property (nonatomic) int color;
@property (nonatomic, retain) NSString *crossStreet;
@property (nonatomic) float delay;
@property (nonatomic) unsigned long long durationMin;
@property (nonatomic) double endOffset;
@property (nonatomic) BOOL endTimeReliable;
@property (nonatomic, readonly) long long*geoids;
@property (nonatomic, readonly) unsigned int geoidsCount;
@property (nonatomic) BOOL hardBlocked;
@property (nonatomic) BOOL hasAlertCCode;
@property (nonatomic) BOOL hasBlocked;
@property (nonatomic) BOOL hasColor;
@property (nonatomic, readonly) BOOL hasCrossStreet;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) BOOL hasDurationMin;
@property (nonatomic) BOOL hasEndOffset;
@property (nonatomic) BOOL hasEndTimeReliable;
@property (nonatomic) BOOL hasHardBlocked;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic, readonly) BOOL hasIncidentId;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) BOOL hasLaneClosureType;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasMaxZoomLevel;
@property (nonatomic) BOOL hasMinZoomLevel;
@property (nonatomic) BOOL hasNavigationAlert;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic, readonly) BOOL hasStreet;
@property (nonatomic) BOOL hasTrafficTrend;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUpdateTime;
@property (nonatomic, readonly) BOOL hasZilch;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) NSString *incidentId;
@property (nonatomic, retain) NSMutableArray *infos;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned int maxZoomLevel;
@property (nonatomic) unsigned int minZoomLevel;
@property (nonatomic) BOOL navigationAlert;
@property (nonatomic) int significance;
@property (nonatomic) float speed;
@property (nonatomic) double startOffset;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) NSString *street;
@property (nonatomic) int trafficTrend;
@property (nonatomic) int type;
@property (nonatomic) long long updateTime;
@property (nonatomic, retain) NSData *zilch;

- (void)addGeoid:(long long)arg1;
- (void)addInfo:(id)arg1;
- (unsigned int)alertCCode;
- (BOOL)blocked;
- (void)clearGeoids;
- (void)clearInfos;
- (int)color;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreet;
- (void)dealloc;
- (float)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationMin;
- (double)endOffset;
- (BOOL)endTimeReliable;
- (long long)geoidAtIndex:(unsigned int)arg1;
- (long long*)geoids;
- (unsigned int)geoidsCount;
- (BOOL)hardBlocked;
- (BOOL)hasAlertCCode;
- (BOOL)hasBlocked;
- (BOOL)hasColor;
- (BOOL)hasCrossStreet;
- (BOOL)hasDelay;
- (BOOL)hasDurationMin;
- (BOOL)hasEndOffset;
- (BOOL)hasEndTimeReliable;
- (BOOL)hasHardBlocked;
- (BOOL)hasHidden;
- (BOOL)hasIncidentId;
- (BOOL)hasLaneClosureCount;
- (BOOL)hasLaneClosureType;
- (BOOL)hasLatitude;
- (BOOL)hasLongitude;
- (BOOL)hasMaxZoomLevel;
- (BOOL)hasMinZoomLevel;
- (BOOL)hasNavigationAlert;
- (BOOL)hasSignificance;
- (BOOL)hasSpeed;
- (BOOL)hasStartOffset;
- (BOOL)hasStartTime;
- (BOOL)hasStreet;
- (BOOL)hasTrafficTrend;
- (BOOL)hasType;
- (BOOL)hasUpdateTime;
- (BOOL)hasZilch;
- (unsigned int)hash;
- (BOOL)hidden;
- (id)incidentId;
- (id)infoAtIndex:(unsigned int)arg1;
- (id)infos;
- (unsigned int)infosCount;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)laneClosureCount;
- (int)laneClosureType;
- (double)latitude;
- (double)longitude;
- (unsigned int)maxZoomLevel;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minZoomLevel;
- (BOOL)navigationAlert;
- (BOOL)readFrom:(id)arg1;
- (void)setAlertCCode:(unsigned int)arg1;
- (void)setBlocked:(BOOL)arg1;
- (void)setColor:(int)arg1;
- (void)setCrossStreet:(id)arg1;
- (void)setDelay:(float)arg1;
- (void)setDurationMin:(unsigned long long)arg1;
- (void)setEndOffset:(double)arg1;
- (void)setEndTimeReliable:(BOOL)arg1;
- (void)setGeoids:(long long*)arg1 count:(unsigned int)arg2;
- (void)setHardBlocked:(BOOL)arg1;
- (void)setHasAlertCCode:(BOOL)arg1;
- (void)setHasBlocked:(BOOL)arg1;
- (void)setHasColor:(BOOL)arg1;
- (void)setHasDelay:(BOOL)arg1;
- (void)setHasDurationMin:(BOOL)arg1;
- (void)setHasEndOffset:(BOOL)arg1;
- (void)setHasEndTimeReliable:(BOOL)arg1;
- (void)setHasHardBlocked:(BOOL)arg1;
- (void)setHasHidden:(BOOL)arg1;
- (void)setHasLaneClosureCount:(BOOL)arg1;
- (void)setHasLaneClosureType:(BOOL)arg1;
- (void)setHasLatitude:(BOOL)arg1;
- (void)setHasLongitude:(BOOL)arg1;
- (void)setHasMaxZoomLevel:(BOOL)arg1;
- (void)setHasMinZoomLevel:(BOOL)arg1;
- (void)setHasNavigationAlert:(BOOL)arg1;
- (void)setHasSignificance:(BOOL)arg1;
- (void)setHasSpeed:(BOOL)arg1;
- (void)setHasStartOffset:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHasTrafficTrend:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHasUpdateTime:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIncidentId:(id)arg1;
- (void)setInfos:(id)arg1;
- (void)setLaneClosureCount:(unsigned int)arg1;
- (void)setLaneClosureType:(int)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMaxZoomLevel:(unsigned int)arg1;
- (void)setMinZoomLevel:(unsigned int)arg1;
- (void)setNavigationAlert:(BOOL)arg1;
- (void)setSignificance:(int)arg1;
- (void)setSpeed:(float)arg1;
- (void)setStartOffset:(double)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setStreet:(id)arg1;
- (void)setTrafficTrend:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUpdateTime:(long long)arg1;
- (void)setZilch:(id)arg1;
- (int)significance;
- (float)speed;
- (double)startOffset;
- (long long)startTime;
- (id)street;
- (int)trafficTrend;
- (int)type;
- (long long)updateTime;
- (void)writeTo:(id)arg1;
- (id)zilch;

@end