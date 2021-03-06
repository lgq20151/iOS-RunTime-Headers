/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant * _assistant;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  finalFrameForContainerView;
}

@property (nonatomic, readonly) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic, readonly) BOOL animatorShouldSizeResultsContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int edgeForHidingNavigationBar;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } finalFrameForContainerView;
@property (nonatomic, readonly) BOOL forceObeyNavigationBarInsets;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float resultsControllerContentOffset;
@property (nonatomic, readonly) BOOL resultsUnderlapsSearchBar;
@property (nonatomic, readonly) BOOL searchBarCanContainScopeBar;
@property (nonatomic, readonly, retain) UIView *searchBarContainerView;
@property (nonatomic, readonly) BOOL searchBarShouldClipToBounds;
@property (nonatomic, readonly) BOOL searchBarToBecomeTopAttached;
@property (nonatomic, readonly) BOOL shouldAccountForStatusBar;
@property (nonatomic, readonly) float statusBarAdjustment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_popoverHostingWindow;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (id)adaptivePresentationController;
- (int)adaptivePresentationStyle;
- (BOOL)animatorShouldSizeResultsContainerView;
- (unsigned int)edgeForHidingNavigationBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForContainerView;
- (BOOL)forceObeyNavigationBarInsets;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (float)resultsControllerContentOffset;
- (BOOL)resultsUnderlapsSearchBar;
- (BOOL)searchBarCanContainScopeBar;
- (id)searchBarContainerView;
- (BOOL)searchBarShouldClipToBounds;
- (BOOL)searchBarToBecomeTopAttached;
- (void)setContentVisible:(BOOL)arg1;
- (BOOL)shouldAccountForStatusBar;
- (float)statusBarAdjustment;

@end
