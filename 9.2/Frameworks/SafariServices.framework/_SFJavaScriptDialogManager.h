/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFJavaScriptDialogManager : NSObject {
    unsigned int  _allowedNumberOfConsecutiveShortDialoglessIntervals;
    NSDate * _lastDismissalDate;
    unsigned int  _numberOfConsecutiveShortDialoglessIntervals;
    double  _shortInterval;
    BOOL  _suppressing;
}

- (void).cxx_destruct;
- (void)_accessibilityOptionsChanged:(id)arg1;
- (void)_updateShortInterval;
- (void)didDismissDialog;
- (id)init;
- (BOOL)mayShowDialogFromSecurityOrigin:(id)arg1 inViewController:(id)arg2;
- (void)reset;
- (void)willShowDialog;

@end
