/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKJSDOMElement, IKJSDOMParentNode, IKStyleableElement, JSExport> {
    NSMutableDictionary * _metadataDict;
    <IKStyleableElement> * parentStyleableElement;
    IKViewElementStyleComposer * styleComposer;
}

@property (nonatomic, readonly) unsigned long childElementCount;
@property (nonatomic, readonly) IKDOMHTMLCollection *children;
@property (nonatomic, readonly, copy) NSString *elementName;
@property (nonatomic, readonly) IKDOMElement *firstElementChild;
@property (nonatomic, retain) NSString *innerHTML;
@property (nonatomic, readonly) IKDOMElement *lastElementChild;
@property (nonatomic, retain) NSString *outerHTML;
@property (nonatomic, readonly) <IKStyleableElement> *parentStyleableElement;
@property (nonatomic, retain) IKViewElementStyleComposer *styleComposer;
@property (nonatomic, readonly, retain) NSString *tagName;

- (void).cxx_destruct;
- (id)attributes;
- (id)childElementByTagName:(id)arg1;
- (unsigned long)childElementCount;
- (id)childElements;
- (id)childElementsByTagName:(id)arg1;
- (id)children;
- (id)elementName;
- (id)firstElementChild;
- (id)getAttribute:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (id)innerHTML;
- (void)insertAdjacentHTML:(id)arg1 :(id)arg2;
- (id)lastElementChild;
- (id)nodeName;
- (int)nodeType;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)outerHTML;
- (id)parentStyleableElement;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 :(id)arg2;
- (void)setAttributeValue:(id)arg1 withName:(id)arg2;
- (void)setInnerHTML:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOuterHTML:(id)arg1;
- (void)setStyleComposer:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)styleComposer;
- (id)tagName;
- (id)textContent;

@end