/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIAsset : NSObject <NSCopying> {
    struct __CFArray { } * _categories;
    NSArray * _contentStrings;
    struct __CFArray { } * _owningCategories;
    NSString * _uuid;
}

@property (nonatomic, readonly, retain) struct __CFArray { }*categories;
@property (nonatomic, readonly, retain) NSArray *contentStrings;
@property (nonatomic, readonly, retain) struct __CFArray { }*owningCategories;
@property (setter=setUUID:, nonatomic, copy) NSString *uuid;

- (id)_initForCopy:(BOOL)arg1;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (struct __CFArray { }*)categories;
- (void)clear;
- (id)contentStrings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (struct __CFArray { }*)owningCategories;
- (void)reverse;
- (void)setUUID:(id)arg1;
- (id)uuid;

@end
