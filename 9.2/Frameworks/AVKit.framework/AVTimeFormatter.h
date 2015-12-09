/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface AVTimeFormatter : NSFormatter {
    NSString * _cachedDateFormatterFormat;
    NSString * _cachedDateFormatterTemplate;
    double  _formatTemplate;
    unsigned int  _fullWidth;
    unsigned int  _isRightToLeft;
    NSLocale * _locale;
    NSNumberFormatter * _numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter * _numberFormatterWithTwoMinimumIntegerDigits;
    int  _style;
}

@property double formatTemplate;
@property (getter=isFullWidth) BOOL fullWidth;
@property int style;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)formatTemplate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFullWidth;
- (void)setFormatTemplate:(double)arg1;
- (void)setFullWidth:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (int)style;

@end