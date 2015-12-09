/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardDictationMenu : UIKeyboardMenuView

+ (id)activeInstance;
+ (id)sharedInstance;

- (BOOL)centerPopUpOverKey;
- (void)cleanupForFadeOrHide;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)performShowAnimation;
- (struct CGSize { float x1; float x2; })preferredSize;
- (void)show;
- (BOOL)usesDimmingView;
- (BOOL)usesTable;

@end