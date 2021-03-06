/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupTableViewController {
    UIActivityIndicatorView * _activityIndicator;
    BOOL  _existingVerificationMethod;
    BOOL  _loadingChannels;
    PKPaymentPass * _pass;
    UIImage * _passSnapshot;
    PKPaymentWebService * _paymentWebService;
    unsigned int  _selectedIndex;
    PKWeakReference * _setupDelegate;
    PKTableHeaderView * _tableHeader;
    NSArray * _verificationChannels;
    id /* block */  _verificationRequestHandler;
}

@property (nonatomic, retain) UIImage *passSnapshot;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (nonatomic, copy) id /* block */ verificationRequestHandler;

- (id)_detailTextLabelForChannel:(id)arg1;
- (void)_disableCells;
- (void)_enableCells;
- (void)_showRequestError:(id)arg1;
- (void)_showSendCodeError:(id)arg1;
- (void)_terminateFlow;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(int)arg3;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)passSnapshot;
- (void)send:(id)arg1;
- (void)setPassSnapshot:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setVerificationRequestHandler:(id /* block */)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id /* block */)verificationRequestHandler;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
