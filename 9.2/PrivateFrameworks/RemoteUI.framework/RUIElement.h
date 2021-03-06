/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIElement : NSObject {
    NSDictionary * _attributes;
    BOOL  _enabled;
    NSString * _identifier;
    RUIElement * _parent;
    RUIStyle * _style;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) RUIElement *parent;
@property (nonatomic, retain) RUIStyle *style;

- (void).cxx_destruct;
- (id)URLAttributeForImageName:(id)arg1 getScale:(float*)arg2;
- (int)_horizontalAlignmentForString:(id)arg1;
- (id)attributes;
- (void)configureView:(id)arg1;
- (void)dealloc;
- (BOOL)enabled;
- (id)identifier;
- (void)imageLoaded:(id)arg1;
- (id)init;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (BOOL)loadImage;
- (id)name;
- (id)parent;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setStyle:(id)arg1;
- (id)sourceURL;
- (id)style;
- (id)subElementsWithName:(id)arg1;

@end
