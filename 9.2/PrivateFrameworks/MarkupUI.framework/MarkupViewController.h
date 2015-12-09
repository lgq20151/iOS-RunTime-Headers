/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MarkupViewController : UIViewController <AKControllerDelegateProtocol, UINavigationBarDelegate, UIToolbarDelegate> {
    NSUndoManager * _akUndoManager;
    BOOL  _allowShakeToUndo;
    AKController * _annotationController;
    UIView * _contentContainerView;
    UIViewController<MUContentViewControllerProtocol> * _contentViewController;
    <MarkupViewControllerDelegate> * _delegate;
    id  _digestedSourceContent;
    BOOL  _isAnimatingMarkupExtensionTransition;
    UINavigationBar * _navBar;
    NSString * _preferredFileDisplayName;
    BOOL  _shapeDetectionEnabled;
    id  _sourceContent;
    NSArray * _sourceContentReplacedAnnotationIndexes;
    NSString * _sourceContentType;
    UIToolbar * _toolbar;
    NSLayoutConstraint * _toolbarBottomConstraint;
    BOOL  _toolbarHidden;
    int  _toolbarPosition;
    NSLayoutConstraint * _toolbarTopAttachedConstraint;
    NSLayoutConstraint * _toolbarTopConstraint;
    UIView * _transitionDimmingView;
    BOOL  _useFancyTransition;
    BOOL  _userDidCancel;
    UIView * _whiteView;
}

@property (nonatomic, retain) NSUndoManager *akUndoManager;
@property (nonatomic) BOOL allowShakeToUndo;
@property (retain) AKController *annotationController;
@property (retain) UIView *contentContainerView;
@property (retain) UIViewController<MUContentViewControllerProtocol> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MarkupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) id digestedSourceContent;
@property (readonly) unsigned int hash;
@property BOOL isAnimatingMarkupExtensionTransition;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (nonatomic, readonly) NSString *outputType;
@property (nonatomic, copy) NSString *preferredFileDisplayName;
@property (getter=isShapeDetectionEnabled, nonatomic) BOOL shapeDetectionEnabled;
@property (nonatomic, retain) id sourceContent;
@property (retain) NSArray *sourceContentReplacedAnnotationIndexes;
@property (retain) NSString *sourceContentType;
@property (readonly) Class superclass;
@property (retain) UIToolbar *toolbar;
@property (retain) NSLayoutConstraint *toolbarBottomConstraint;
@property (getter=isToolbarHidden, nonatomic) BOOL toolbarHidden;
@property (nonatomic) int toolbarPosition;
@property (retain) NSLayoutConstraint *toolbarTopAttachedConstraint;
@property (retain) NSLayoutConstraint *toolbarTopConstraint;
@property (retain) UIView *transitionDimmingView;
@property BOOL useFancyTransition;
@property BOOL userDidCancel;
@property (retain) UIView *whiteView;

+ (id)_exportedInterface;
+ (BOOL)_isInLowMemoryEnvironment;
+ (id)_remoteViewControllerInterface;
+ (Class)viewControllerClassForUTI:(struct __CFString { }*)arg1;

- (void).cxx_destruct;
- (void)_adjustContentInsetsForBars;
- (void)_adjustFormSheetFrameToFitSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_animateEnteringMarkupWithInfo:(id)arg1;
- (void)_animateExitWithInfo:(id)arg1;
- (id)_backgroundColor;
- (void)_bailFailedAnimateEnterMarkup;
- (void)_cancel;
- (void)_commonInit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_containerBounds;
- (void)_createCancelDoneNavBar;
- (void)_installContentViewControllerForUTI:(id)arg1;
- (void)_loadSourceContentWithCompletion:(id /* block */)arg1;
- (struct CGSize { float x1; float x2; })_minimumFormSheetDimensions;
- (id)_navBarTitleColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectBetweenNavAndToolbar;
- (void)_saveEditing:(id)arg1;
- (void)_setData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setupContainerAndDimmingViews;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_teardownContentViewController;
- (id)_toolbarItemTintColor;
- (id)_toolbarTintColor;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformToHideContainerViewBehindBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateAndLoadSourceContent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_updateAppearanceForTraitCollection:(id)arg1;
- (void)_updateConstraintsForBarPosition:(int)arg1;
- (BOOL)_validateAnimationDictionary:(id)arg1 isEntering:(BOOL)arg2;
- (void)_writeToDataConsumer:(struct CGDataConsumer { }*)arg1;
- (id)akUndoManager;
- (BOOL)allowShakeToUndo;
- (void)animateExitWithInfo:(id)arg1;
- (id)annotationController;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancel:(id)arg1;
- (id)contentContainerView;
- (id)contentViewController;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (BOOL)controllerShouldDetectFormElements:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (id)dataRepresentationWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (id)digestedSourceContent;
- (void)done:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isAnimatingMarkupExtensionTransition;
- (BOOL)isShapeDetectionEnabled;
- (BOOL)isToolbarHidden;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned int)arg1 forAnnotationController:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned int)arg1 forAnnotationController:(id)arg2;
- (float)modelBaseScaleFactorOfPageAtIndex:(unsigned int)arg1 forAnnotationController:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (id)navBar;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(float)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned int)arg4 forAnnotationController:(id)arg5;
- (id)outputType;
- (int)positionForBar:(id)arg1;
- (id)preferredFileDisplayName;
- (int)preferredStatusBarStyle;
- (void)setAkUndoManager:(id)arg1;
- (void)setAllowShakeToUndo:(BOOL)arg1;
- (void)setAnnotationController:(id)arg1;
- (void)setContentContainerView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigestedSourceContent:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsAnimatingMarkupExtensionTransition:(BOOL)arg1;
- (void)setNavBar:(id)arg1;
- (void)setPreferredFileDisplayName:(id)arg1;
- (void)setShapeDetectionEnabled:(BOOL)arg1;
- (void)setSourceContent:(id)arg1;
- (void)setSourceContentReplacedAnnotationIndexes:(id)arg1;
- (void)setSourceContentType:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarBottomConstraint:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setToolbarPosition:(int)arg1;
- (void)setToolbarTopAttachedConstraint:(id)arg1;
- (void)setToolbarTopConstraint:(id)arg1;
- (void)setTransitionDimmingView:(id)arg1;
- (void)setUseFancyTransition:(BOOL)arg1;
- (void)setUserDidCancel:(BOOL)arg1;
- (void)setWhiteView:(id)arg1;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { float x1; float x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (id)sourceContent;
- (id)sourceContentReplacedAnnotationIndexes;
- (id)sourceContentType;
- (id)toolbar;
- (id)toolbarBottomConstraint;
- (int)toolbarPosition;
- (id)toolbarTopAttachedConstraint;
- (id)toolbarTopConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionDimmingView;
- (id)undoManagerForAnnotationController:(id)arg1;
- (BOOL)useFancyTransition;
- (BOOL)userDidCancel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)whiteView;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;

@end