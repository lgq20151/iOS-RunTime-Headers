/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding> {
    int  _selectedButtonIndex;
    NSArray * _textFieldValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int selectedButtonIndex;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *textFieldValues;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (int)selectedButtonIndex;
- (void)setSelectedButtonIndex:(int)arg1;
- (void)setTextFieldValues:(id)arg1;
- (id)textFieldValues;

@end