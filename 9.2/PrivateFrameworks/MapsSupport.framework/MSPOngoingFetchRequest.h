/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPOngoingFetchRequest : NSObject <MSPContainerObserver> {
    id /* block */  _changeHandler;
    MSPContainer * _container;
    NSArray * _contents;
    id /* block */  _mapBlock;
    NSMapTable * _oldUnmappedObjectsByContentObject;
    id  _owner;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _unmappedContents;
    NSMapTable * _unmappedObjectsByContentObject;
}

@property (nonatomic, readonly) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *unmappedContents;

- (void).cxx_destruct;
- (void)_updateContentsFromContainerContents:(id)arg1 context:(id)arg2;
- (void)container:(id)arg1 didEditByReplacingObjectsWithReplacements:(id)arg2 context:(id)arg3;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(int)arg4 context:(id)arg5;
- (id)contents;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 owner:(id)arg2 queue:(id)arg3 mappingObjectsWithConcurrentBlock:(id /* block */)arg4 availabilityHandler:(id /* block */)arg5 changeHandler:(id /* block */)arg6;
- (void)invalidate;
- (id)observationQueueForContainer:(id)arg1;
- (id)unmappedContents;
- (id)unmappedObjectForContentsObject:(id)arg1;

@end
