/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFToolbar : UIToolbar {
    _UIBackdropView * _backgroundView;
    BOOL  _hasDarkBackground;
    BOOL  _hasLightButtonTint;
    int  _placement;
    UIView * _separator;
}

@property (nonatomic, readonly) float URLFieldHorizontalMargin;
@property (nonatomic) BOOL backdropComputesColorSettings;
@property (nonatomic) BOOL hasDarkBackground;
@property (nonatomic, readonly) int placement;
@property (nonatomic, readonly) int toolbarSize;

+ (float)defaultHeight;

- (void).cxx_destruct;
- (float)URLFieldHorizontalMargin;
- (BOOL)backdropComputesColorSettings;
- (BOOL)hasDarkBackground;
- (id)initWithPlacement:(int)arg1;
- (void)layoutSubviews;
- (int)placement;
- (void)setBackdropComputesColorSettings:(BOOL)arg1;
- (void)setHasDarkBackground:(BOOL)arg1;
- (int)toolbarSize;
- (void)updateTintColor;

@end