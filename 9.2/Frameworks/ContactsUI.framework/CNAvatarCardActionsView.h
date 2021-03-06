/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardActionsView : UIView <CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _actionCategories;
    NSArray * _actions;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _actionsImageFrame;
    CNQuickActionsManager * _actionsManager;
    BOOL  _actionsReversed;
    BOOL  _bypassActionValidation;
    NSArray * _contacts;
    <CNAvatarCardActionsViewDelegate> * _delegate;
    BOOL  _dismissesBeforePerforming;
    BOOL  _expanded;
    NSIndexPath * _highlightedIndexPath;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialLocation;
    UIGestureRecognizer * _rolloverGestureRecognizer;
    UIGestureRecognizer * _selectionGestureRecognizer;
    CNAvatarCardActionsTableView * _tableView;
}

@property (nonatomic, copy) NSArray *actionCategories;
@property (nonatomic, retain) NSArray *actions;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } actionsImageFrame;
@property (nonatomic, retain) CNQuickActionsManager *actionsManager;
@property (nonatomic) BOOL actionsReversed;
@property (nonatomic) BOOL bypassActionValidation;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarCardActionsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissesBeforePerforming;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSIndexPath *highlightedIndexPath;
@property (nonatomic) struct CGPoint { float x1; float x2; } initialLocation;
@property (getter=isPerformingAction, nonatomic, readonly) BOOL performingAction;
@property (nonatomic, retain) UIGestureRecognizer *rolloverGestureRecognizer;
@property (nonatomic, retain) UIGestureRecognizer *selectionGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNAvatarCardActionsTableView *tableView;

+ (BOOL)performActionsOnDeepPress;
+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_actionAtIndexPath:(id)arg1;
- (void)_configureCell:(id)arg1 forAction:(id)arg2;
- (void)_dismissCardAnimated:(BOOL)arg1;
- (id)_effectiveManagerActions;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_indexPathForGestureRecognizer:(id)arg1;
- (void)_performActionAtIndexPath:(id)arg1;
- (void)_startTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_updateActionsWithBlock:(id /* block */)arg1;
- (void)_updateAllSeparators;
- (void)_updateCellSeparator:(id)arg1 forIndexPath:(id)arg2;
- (void)_updateFromActions:(id)arg1 toActions:(id)arg2 matchingOldIndex:(int)arg3 toNewActionIndex:(int)arg4 invertedAnimation:(BOOL)arg5;
- (void)_updateWithActions:(id)arg1 withBlock:(id /* block */)arg2;
- (id)actionCategories;
- (id)actions;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })actionsImageFrame;
- (id)actionsManager;
- (id)actionsManager:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (BOOL)actionsReversed;
- (BOOL)bypassActionValidation;
- (id)contacts;
- (id)delegate;
- (BOOL)dismissesBeforePerforming;
- (BOOL)expanded;
- (id)highlightedIndexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })initialLocation;
- (BOOL)isPerformingAction;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)performHighlightedAction;
- (void)refreshActions;
- (void)reloadData;
- (void)reloadDataWithBlock:(id /* block */)arg1;
- (void)reset;
- (void)resetWithBlock:(id /* block */)arg1;
- (id)rolloverGestureRecognizer;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectionGestureRecognizer;
- (void)setActionCategories:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setActionsImageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setActionsManager:(id)arg1;
- (void)setActionsReversed:(BOOL)arg1;
- (void)setBypassActionValidation:(BOOL)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissesBeforePerforming:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setHighlightedIndexPath:(id)arg1;
- (void)setInitialLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRolloverGestureRecognizer:(id)arg1;
- (void)setSelectionGestureRecognizer:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateRollover:(id)arg1;

@end
