/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISVariable : NSObject {
    <NSISVariableDelegate> * _delegate;
    unsigned int  _ident;
    int  _refCount;
}

@property <NSISVariableDelegate> *delegate;
@property (readonly) BOOL shouldBeMinimized;
@property (readonly) int valueRestriction;

+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (id)delegate;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)markedConstraint;
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldBeIntegral;
- (BOOL)shouldBeMinimized;
- (BOOL)valueIsUserVisible;
- (int)valueRestriction;

@end