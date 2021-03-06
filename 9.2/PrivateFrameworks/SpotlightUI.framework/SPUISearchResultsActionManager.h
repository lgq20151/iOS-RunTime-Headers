/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchResultsActionManager : NSObject {
    NSMutableSet * _currentActions;
    <SPUISearchResultsActionManagerDelegate> * _delegate;
    UIDocumentInteractionController * _docInteractionController;
}

@property (nonatomic, readonly) NSMutableSet *currentActions;
@property <SPUISearchResultsActionManagerDelegate> *delegate;
@property (nonatomic, retain) UIDocumentInteractionController *docInteractionController;
@property (readonly) BOOL hasCurrentAction;
@property (readonly) BOOL hasModalAction;

- (void).cxx_destruct;
- (id)_actionForResult:(id)arg1 inSection:(id)arg2;
- (id)_performAction:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_performActionForResult:(id)arg1 inSection:(id)arg2 urls:(id)arg3 forceDefaultAction:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (id)_performActionForResult:(id)arg1 inSection:(id)arg2 urls:(id)arg3 fromCardType:(id)arg4 sendFeedback:(BOOL)arg5 forceDefaultAction:(BOOL)arg6 completionBlock:(id /* block */)arg7;
- (void)cancelCurrentActionAnimated:(BOOL)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)currentActions;
- (id)delegate;
- (id)docInteractionController;
- (BOOL)hasCurrentAction;
- (BOOL)hasModalAction;
- (void)openURL:(id)arg1;
- (id)performActionForResult:(id)arg1 inSection:(id)arg2;
- (void)performCustomActionWithViewController:(id)arg1;
- (id)performSecondaryActionForResult:(id)arg1 inSection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDocInteractionController:(id)arg1;
- (void)willReturnToResultsList;

@end
