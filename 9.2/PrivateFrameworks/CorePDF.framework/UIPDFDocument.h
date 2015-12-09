/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFDocument : NSObject {
    float  _cachedWidth;
    struct CGPDFDocument { } * _cgDocument;
    <NSObject><UIPDFDocumentDelegate> * _delegate;
    NSString * _documentID;
    NSString * _documentName;
    unsigned int  _imageCacheCount;
    int  _imageCacheLock;
    unsigned int  _imageCacheLookAhead;
    float  _imageCacheResolution;
    int  _lock;
    unsigned int  _numberOfPages;
    UIPDFPageImageCache * _pageImageCache;
    UIPDFPageImageCache * _thumbnailCache;
    int  _thumbnailLock;
}

@property (readonly) struct CGPDFDocument { }*CGDocument;
@property (nonatomic) <NSObject><UIPDFDocumentDelegate> *delegate;
@property (readonly) NSString *documentID;
@property (readonly) unsigned int numberOfPages;
@property (retain) UIPDFPageImageCache *pageImageCache;
@property (retain) UIPDFPageImageCache *thumbnailCache;

// Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF

+ (id)documentNamed:(id)arg1;

- (struct CGPDFDocument { }*)CGDocument;
- (BOOL)allowsCopying;
- (struct CGPDFDocument { }*)copyCGPDFDocument;
- (BOOL)copyDocumentTo:(id)arg1;
- (id)copyPageAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)delegate;
- (id)documentID;
- (id)initWithCGPDFDocument:(struct CGPDFDocument { }*)arg1;
- (id)initWithCGPDFDocumentLimitedMemory:(struct CGPDFDocument { }*)arg1;
- (id)initWithURL:(id)arg1;
- (float)maxHeight;
- (float)maxWidth;
- (unsigned int)numberOfPages;
- (id)pageAtIndex:(unsigned int)arg1;
- (id)pageImageCache;
- (void)purgePagesBefore:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageCacheCount:(unsigned int)arg1 lookAhead:(unsigned int)arg2 withResolution:(float)arg3;
- (void)setPageImageCache:(id)arg1;
- (void)setThumbnailCache:(id)arg1;
- (float)sumHeight;
- (float)sumWidth;
- (id)thumbnailCache;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

+ (id)newDocumentWithCGPDFDocument:(struct CGPDFDocument { }*)arg1;

@end