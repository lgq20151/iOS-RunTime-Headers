/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SABaseCommand : AceObject <AFSessionObject, SAAceCommand, SAAceSerializable>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)baseCommand;
+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)refId;
- (void)setAceId:(id)arg1;
- (void)setRefId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (BOOL)af_bufferingAllowedDuringActiveSession;
- (void)af_logDiagnostics;
- (id)serializedAceDataError:(id*)arg1;

@end
