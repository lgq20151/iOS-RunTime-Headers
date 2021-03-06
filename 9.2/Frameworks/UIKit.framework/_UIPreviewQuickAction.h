/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewQuickAction : NSObject {
    id /* block */  _handler;
    UIImage * _highlightedImage;
    UIImage * _image;
    NSString * _title;
    UIColor * _titleColor;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;

+ (id)actionWithImage:(id)arg1 highlightedImage:(id)arg2 title:(id)arg3 titleColor:(id)arg4 handler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)highlightedImage;
- (id)image;
- (void)setHandler:(id /* block */)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (id)title;
- (id)titleColor;

@end
