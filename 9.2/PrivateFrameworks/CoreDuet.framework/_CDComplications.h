/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDComplications : NSObject {
    NSDictionary * _activeComplications;
    BOOL  _admissionReady;
    NSObject<OS_dispatch_queue> * complicationQueue;
    int  dataChangeToken;
    int  deviceChangeToken;
    NSMutableArray * localAttributes;
    NSMutableDictionary * meterTokens;
    NSMutableArray * remoteAttributes;
    CDDevice * remoteDevice;
    CDSession * session;
}

@property (nonatomic, readonly, copy) NSDictionary *activeComplications;
@property BOOL admissionReady;

+ (id)initializeForAdmissionChecking:(BOOL)arg1;

- (void).cxx_destruct;
- (id)CDAttributeForComplication:(id)arg1 error:(id*)arg2;
- (id)activeComplications;
- (BOOL)admissionCheckOnComplication:(id)arg1 forRemote:(BOOL)arg2 error:(id*)arg3;
- (BOOL)admissionReady;
- (id)initForAdmission:(BOOL)arg1;
- (BOOL)isBundleActiveComplication:(id)arg1;
- (void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)readOutActiveComplications;
- (void)setAdmissionReady:(BOOL)arg1;
- (void)setupForAdmissions;
- (void)updateRemoteDevice;

@end
