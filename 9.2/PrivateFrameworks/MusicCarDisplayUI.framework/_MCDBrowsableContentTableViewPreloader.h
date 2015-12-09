/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface _MCDBrowsableContentTableViewPreloader : NSObject {
    BOOL  _cancelled;
    id /* block */  _cancelledBlock;
    MCDPCContainer * _container;
    int  _index;
    NSIndexPath * _indexPath;
    MCDPCItem * _item;
    UIViewController * _sourceViewController;
}

@property (getter=isCancelled, nonatomic) BOOL cancelled;
@property (nonatomic, readonly, copy) id /* block */ cancelledBlock;
@property (nonatomic, readonly) MCDPCContainer *container;
@property (nonatomic, readonly) int index;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) MCDPCItem *item;
@property (nonatomic, readonly) UIViewController *sourceViewController;

- (void).cxx_destruct;
- (void)_deregister;
- (void)_displayErrorAlertController:(id)arg1;
- (void)_loadContainerAndPush:(id)arg1;
- (void)_pushToPlayback:(id)arg1;
- (id /* block */)cancelledBlock;
- (id)container;
- (void)dealloc;
- (id)description;
- (int)index;
- (id)indexPath;
- (id)initWithContainer:(id)arg1 index:(int)arg2 sourceViewController:(id)arg3 cancelledBlock:(id /* block */)arg4;
- (BOOL)isCancelled;
- (id)item;
- (void)loadAndPush;
- (void)setCancelled:(BOOL)arg1;
- (id)sourceViewController;

@end