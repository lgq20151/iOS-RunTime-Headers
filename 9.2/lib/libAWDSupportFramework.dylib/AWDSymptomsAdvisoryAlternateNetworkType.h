/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSymptomsAdvisoryAlternateNetworkType : PBCodable <NSCopying> {
    int  _advice;
    unsigned long long  _adviceHeldForSecs;
    int  _bailOutOf;
    unsigned int  _comingFromState;
    int  _egressMobilityCode;
    int  _egressTrigger;
    unsigned int  _egressTriggerMultiplier;
    int  _egressTriggerOn;
    unsigned int  _egressTriggerPercentagex100;
    NSMutableArray * _egressTriggerSignatures;
    struct { 
        unsigned int adviceHeldForSecs : 1; 
        unsigned int timestamp : 1; 
        unsigned int advice : 1; 
        unsigned int bailOutOf : 1; 
        unsigned int comingFromState : 1; 
        unsigned int egressMobilityCode : 1; 
        unsigned int egressTrigger : 1; 
        unsigned int egressTriggerMultiplier : 1; 
        unsigned int egressTriggerOn : 1; 
        unsigned int egressTriggerPercentagex100 : 1; 
        unsigned int ingressMobilityCode : 1; 
        unsigned int ingressTrigger : 1; 
        unsigned int ingressTriggerMultiplier : 1; 
        unsigned int ingressTriggerOn : 1; 
        unsigned int ingressTriggerPercentagex100 : 1; 
        unsigned int transitionsSuppressedByMobility : 1; 
        unsigned int kernelProbingActivated : 1; 
    }  _has;
    int  _ingressMobilityCode;
    int  _ingressTrigger;
    unsigned int  _ingressTriggerMultiplier;
    int  _ingressTriggerOn;
    unsigned int  _ingressTriggerPercentagex100;
    NSMutableArray * _ingressTriggerSignatures;
    BOOL  _kernelProbingActivated;
    unsigned long long  _timestamp;
    unsigned int  _transitionsSuppressedByMobility;
}

@property (nonatomic) int advice;
@property (nonatomic) unsigned long long adviceHeldForSecs;
@property (nonatomic) int bailOutOf;
@property (nonatomic) unsigned int comingFromState;
@property (nonatomic) int egressMobilityCode;
@property (nonatomic) int egressTrigger;
@property (nonatomic) unsigned int egressTriggerMultiplier;
@property (nonatomic) int egressTriggerOn;
@property (nonatomic) unsigned int egressTriggerPercentagex100;
@property (nonatomic, retain) NSMutableArray *egressTriggerSignatures;
@property (nonatomic) BOOL hasAdvice;
@property (nonatomic) BOOL hasAdviceHeldForSecs;
@property (nonatomic) BOOL hasBailOutOf;
@property (nonatomic) BOOL hasComingFromState;
@property (nonatomic) BOOL hasEgressMobilityCode;
@property (nonatomic) BOOL hasEgressTrigger;
@property (nonatomic) BOOL hasEgressTriggerMultiplier;
@property (nonatomic) BOOL hasEgressTriggerOn;
@property (nonatomic) BOOL hasEgressTriggerPercentagex100;
@property (nonatomic) BOOL hasIngressMobilityCode;
@property (nonatomic) BOOL hasIngressTrigger;
@property (nonatomic) BOOL hasIngressTriggerMultiplier;
@property (nonatomic) BOOL hasIngressTriggerOn;
@property (nonatomic) BOOL hasIngressTriggerPercentagex100;
@property (nonatomic) BOOL hasKernelProbingActivated;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransitionsSuppressedByMobility;
@property (nonatomic) int ingressMobilityCode;
@property (nonatomic) int ingressTrigger;
@property (nonatomic) unsigned int ingressTriggerMultiplier;
@property (nonatomic) int ingressTriggerOn;
@property (nonatomic) unsigned int ingressTriggerPercentagex100;
@property (nonatomic, retain) NSMutableArray *ingressTriggerSignatures;
@property (nonatomic) BOOL kernelProbingActivated;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transitionsSuppressedByMobility;

- (void)addEgressTriggerSignature:(id)arg1;
- (void)addIngressTriggerSignature:(id)arg1;
- (int)advice;
- (unsigned long long)adviceHeldForSecs;
- (int)bailOutOf;
- (void)clearEgressTriggerSignatures;
- (void)clearIngressTriggerSignatures;
- (unsigned int)comingFromState;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)egressMobilityCode;
- (int)egressTrigger;
- (unsigned int)egressTriggerMultiplier;
- (int)egressTriggerOn;
- (unsigned int)egressTriggerPercentagex100;
- (id)egressTriggerSignatureAtIndex:(unsigned int)arg1;
- (id)egressTriggerSignatures;
- (unsigned int)egressTriggerSignaturesCount;
- (BOOL)hasAdvice;
- (BOOL)hasAdviceHeldForSecs;
- (BOOL)hasBailOutOf;
- (BOOL)hasComingFromState;
- (BOOL)hasEgressMobilityCode;
- (BOOL)hasEgressTrigger;
- (BOOL)hasEgressTriggerMultiplier;
- (BOOL)hasEgressTriggerOn;
- (BOOL)hasEgressTriggerPercentagex100;
- (BOOL)hasIngressMobilityCode;
- (BOOL)hasIngressTrigger;
- (BOOL)hasIngressTriggerMultiplier;
- (BOOL)hasIngressTriggerOn;
- (BOOL)hasIngressTriggerPercentagex100;
- (BOOL)hasKernelProbingActivated;
- (BOOL)hasTimestamp;
- (BOOL)hasTransitionsSuppressedByMobility;
- (unsigned int)hash;
- (int)ingressMobilityCode;
- (int)ingressTrigger;
- (unsigned int)ingressTriggerMultiplier;
- (int)ingressTriggerOn;
- (unsigned int)ingressTriggerPercentagex100;
- (id)ingressTriggerSignatureAtIndex:(unsigned int)arg1;
- (id)ingressTriggerSignatures;
- (unsigned int)ingressTriggerSignaturesCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)kernelProbingActivated;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAdvice:(int)arg1;
- (void)setAdviceHeldForSecs:(unsigned long long)arg1;
- (void)setBailOutOf:(int)arg1;
- (void)setComingFromState:(unsigned int)arg1;
- (void)setEgressMobilityCode:(int)arg1;
- (void)setEgressTrigger:(int)arg1;
- (void)setEgressTriggerMultiplier:(unsigned int)arg1;
- (void)setEgressTriggerOn:(int)arg1;
- (void)setEgressTriggerPercentagex100:(unsigned int)arg1;
- (void)setEgressTriggerSignatures:(id)arg1;
- (void)setHasAdvice:(BOOL)arg1;
- (void)setHasAdviceHeldForSecs:(BOOL)arg1;
- (void)setHasBailOutOf:(BOOL)arg1;
- (void)setHasComingFromState:(BOOL)arg1;
- (void)setHasEgressMobilityCode:(BOOL)arg1;
- (void)setHasEgressTrigger:(BOOL)arg1;
- (void)setHasEgressTriggerMultiplier:(BOOL)arg1;
- (void)setHasEgressTriggerOn:(BOOL)arg1;
- (void)setHasEgressTriggerPercentagex100:(BOOL)arg1;
- (void)setHasIngressMobilityCode:(BOOL)arg1;
- (void)setHasIngressTrigger:(BOOL)arg1;
- (void)setHasIngressTriggerMultiplier:(BOOL)arg1;
- (void)setHasIngressTriggerOn:(BOOL)arg1;
- (void)setHasIngressTriggerPercentagex100:(BOOL)arg1;
- (void)setHasKernelProbingActivated:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransitionsSuppressedByMobility:(BOOL)arg1;
- (void)setIngressMobilityCode:(int)arg1;
- (void)setIngressTrigger:(int)arg1;
- (void)setIngressTriggerMultiplier:(unsigned int)arg1;
- (void)setIngressTriggerOn:(int)arg1;
- (void)setIngressTriggerPercentagex100:(unsigned int)arg1;
- (void)setIngressTriggerSignatures:(id)arg1;
- (void)setKernelProbingActivated:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransitionsSuppressedByMobility:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)transitionsSuppressedByMobility;
- (void)writeTo:(id)arg1;

@end
