/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface _NCConcreteDataSource : NSObject {
    NSMutableDictionary * _identifiersToData;
    NSMutableArray * _observers;
}

@property (nonatomic, readonly) NSArray *data;
@property (nonatomic, readonly) NSArray *dataIdentifiers;

- (void)addObserver:(id)arg1 completion:(id /* block */)arg2;
- (id)data;
- (id)dataIdentifiers;
- (void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(id /* block */)arg3;
- (void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(id /* block */)arg3;
- (id)datumWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1 completion:(id /* block */)arg2;

@end
