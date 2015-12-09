/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemCellContext : SUArtworkCellContext {
    struct __CFDictionary { } * _cachedRatingImages;
    struct { 
        int version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
        int (*hash)(); 
    }  _stringSizeCacheKeyCallBacks;
    struct __CFDictionary { } * _stringSizes;
}

@property (nonatomic) struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); } stringSizeCacheKeyCallBacks;

- (void)dealloc;
- (id)init;
- (id)ratingImageForRating:(float)arg1 style:(int)arg2;
- (void)resetLayoutCaches;
- (void)setStringSizeCacheKeyCallBacks:(struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })arg1;
- (struct CGSize { float x1; float x2; })sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize { float x1; float x2; })arg3;
- (struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })stringSizeCacheKeyCallBacks;

@end