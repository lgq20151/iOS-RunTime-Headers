/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNode : IKJSObject <IKJSDOMEventTarget, IKJSDOMNode> {
    int  _ITMLID;
    NSHashTable * _domObservers;
    NSMutableDictionary * _eventListenersMap;
    JSManagedValue * _managedChildNodeList;
    JSManagedValue * _managedOwnerDocument;
    JSManagedValue * _managedParent;
    JSManagedValue * _managedSelf;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } * _nodePtr;
}

@property (nonatomic) int ITMLID;
@property (nonatomic, readonly, retain) IKDOMNodeList *childNodes;
@property (nonatomic, retain) NSHashTable *domObservers;
@property (nonatomic, retain) NSMutableDictionary *eventListenersMap;
@property (nonatomic, readonly, retain) IKDOMNode *firstChild;
@property (nonatomic, readonly, retain) IKDOMNodeData *jsNodeData;
@property (nonatomic, readonly, retain) IKDOMNode *lastChild;
@property (nonatomic, retain) JSManagedValue *managedChildNodeList;
@property (nonatomic, retain) JSManagedValue *managedOwnerDocument;
@property (nonatomic, retain) JSManagedValue *managedParent;
@property (nonatomic, readonly, retain) JSManagedValue *managedSelf;
@property (nonatomic, readonly) IKDOMNode *nextSibling;
@property (nonatomic, readonly, retain) NSString *nodeName;
@property (nonatomic, readonly) int nodeType;
@property (nonatomic, retain) NSString *nodeValue;
@property (nonatomic, readonly) IKDOMDocument *ownerDocument;
@property (nonatomic, readonly) IKDOMNode *parentNode;
@property (nonatomic, readonly) IKDOMNode *previousSibling;
@property (nonatomic, retain) NSString *textContent;

+ (id)_eventListenerMapKeyForType:(id)arg1 useCapture:(BOOL)arg2;
+ (void)handleNodeParentDidChange:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (void)handleNodeWillRelease:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (id)nodeWithAppContext:(id)arg1 nodePtr:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;

- (void).cxx_destruct;
- (int)ITMLID;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)_appendNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)_insertNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 refNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 operation:(unsigned int)arg3;
- (void)_linkManagedObjects;
- (void)_notifyUpdatesToDOMObservers;
- (BOOL)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(BOOL)arg3;
- (void)_unlinkManagedObjects;
- (BOOL)_validateDOMOperation:(unsigned int)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (void)addDOMObserver:(id)arg1;
- (void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (id)appendChild:(id)arg1;
- (unsigned long)childElementCount;
- (id)childNodes;
- (id)childNodesAsArray;
- (id)children;
- (id)cloneNode:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)dispatchEvent:(id)arg1;
- (id)domObservers;
- (void)enumerateEventListernersForType:(id)arg1 xmlAttribute:(id)arg2 phase:(int)arg3 usingBlock:(id /* block */)arg4;
- (id)eventListenersMap;
- (id)firstChild;
- (id)firstElementChild;
- (id)getFeature:(id)arg1 :(id)arg2;
- (BOOL)hasChildNodes;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)isSameNode:(id)arg1;
- (id)jsNodeData;
- (id)lastChild;
- (id)lastElementChild;
- (id)managedChildNodeList;
- (id)managedOwnerDocument;
- (id)managedParent;
- (id)managedSelf;
- (id)nextSibling;
- (id)nodeName;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)nodePtr;
- (int)nodeType;
- (id)nodeValue;
- (id)nodesForXPath:(id)arg1 error:(id*)arg2;
- (void)notifyChildrenUpdatedWithUpdatedChildNodes:(id)arg1;
- (void)notifyUpdatedAndMark:(BOOL)arg1;
- (id)ownerDocument;
- (id)parentNode;
- (id)performDOMOperation:(unsigned int)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (id)previousSibling;
- (id)removeChild:(id)arg1;
- (void)removeDOMObserver:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (void)setDomObservers:(id)arg1;
- (void)setEventListenersMap:(id)arg1;
- (void)setITMLID:(int)arg1;
- (void)setManagedChildNodeList:(id)arg1;
- (void)setManagedOwnerDocument:(id)arg1;
- (void)setManagedParent:(id)arg1;
- (void)setNodeValue:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (id)writeToStringWithError:(id*)arg1;

@end
