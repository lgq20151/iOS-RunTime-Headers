/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardRotationState : NSObject {
    UIInputViewAnimationStyle * _animationStyle;
    int  _postRotationState;
    BOOL  _requiresNewState;
    int  _state;
    int  _targetOrientation;
}

@property (nonatomic, retain) UIInputViewAnimationStyle *animationStyle;
@property (nonatomic) int postRotationState;
@property (nonatomic) BOOL requiresNewState;
@property (nonatomic) int state;
@property (nonatomic) int targetOrientation;

+ (id)stateWithState:(int)arg1 targetOrientation:(int)arg2;

- (id)animationStyle;
- (void)dealloc;
- (int)postRotationState;
- (BOOL)requiresNewState;
- (void)setAnimationStyle:(id)arg1;
- (void)setPostRotationState:(int)arg1;
- (void)setPostRotationState:(int)arg1 animationStyle:(id)arg2;
- (void)setRequiresNewState:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)setTargetOrientation:(int)arg1;
- (int)state;
- (int)targetOrientation;

@end