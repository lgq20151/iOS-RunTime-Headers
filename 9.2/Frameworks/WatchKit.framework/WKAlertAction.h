/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKAlertAction : NSObject <NSSecureCoding> {
    id /* block */  _handler;
    int  _style;
    NSString * _title;
    NSUUID * _uuid;
}

@property (nonatomic, copy) id /* block */ handler;
@property int style;
@property (nonatomic, copy) NSString *title;
@property (setter=setUUID:, nonatomic, retain) NSUUID *uuid;

+ (id)actionWithTitle:(id)arg1 style:(int)arg2 handler:(id /* block */)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (int)style;
- (id)title;
- (id)uuid;

@end
