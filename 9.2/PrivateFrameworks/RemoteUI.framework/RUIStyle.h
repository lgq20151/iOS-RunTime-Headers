/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIStyle : NSObject {
    UIColor * _backgroundColor;
    UIColor * _buttonRowTextColor;
    UIColor * _radioGroupSelectedColor;
    UIColor * _selectPageDetailTextColor;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *buttonRowTextColor;
@property (nonatomic, readonly) UIColor *radioGroupSelectedColor;
@property (nonatomic, readonly) UIColor *selectPageDetailTextColor;

+ (id)defaultStyle;
+ (id)frontRowStyle;
+ (id)setupAssistantModalStyle;
+ (id)setupAssistantStyle;

- (void).cxx_destruct;
- (void)applyToObjectModel:(id)arg1;
- (id)backgroundColor;
- (id)buttonRowTextColor;
- (id)init;
- (id)radioGroupSelectedColor;
- (id)selectPageDetailTextColor;

@end