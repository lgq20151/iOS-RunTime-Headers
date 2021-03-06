/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMActionSet : NSObject <HMMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSString * _actionSetType;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMThreadSafeMutableArrayCollection * _currentActions;
    HMDelegateCaller * _delegateCaller;
    BOOL  _executing;
    HMHome * _home;
    HMMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, readonly, copy) NSSet *actions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentActions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, nonatomic, readonly) BOOL executing;
@property (readonly) unsigned int hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)_handleActionAddedNotification:(id)arg1;
- (void)_handleActionRemovedNotification:(id)arg1;
- (void)_handleActionSetRenamedNotification:(id)arg1;
- (void)_handleActionUpdatedNotification:(id)arg1;
- (void)_invalidate;
- (id)_lookupActionWithInfo:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigure;
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionSetType;
- (id)actions;
- (void)addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientQueue;
- (id)currentActions;
- (void)dealloc;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (BOOL)isExecuting;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)propertyQueue;
- (void)removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentActions:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

@end
