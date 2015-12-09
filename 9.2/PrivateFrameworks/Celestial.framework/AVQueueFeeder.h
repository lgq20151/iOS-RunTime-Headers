/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVQueueFeeder : NSObject

- (double)bookmarkTimeForIndex:(unsigned int)arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)init;
- (unsigned int)itemCount;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;

@end