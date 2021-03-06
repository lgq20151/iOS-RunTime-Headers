/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeePicker : UIViewController <ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, MFAutocompleteResultsTableViewControllerDelegate, MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer> {
    BOOL  _ABAccessDenied;
    NSMutableDictionary * _atomPresentationOptionsByRecipient;
    MFAutocompleteResultsTableViewController * _autocompleteTableViewController;
    NSOperationQueue * _availabilityQueue;
    MFComposeRecipientTextView * _composeRecipientView;
    <EKEventAttendeePickerDelegate> * _emailValidationDelegate;
    EKEvent * _event;
    CNAutocompleteFetchContext * _fetchContext;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _initialFrame;
    UIKeyboard * _keyboard;
    NSNumber * _lastSearchId;
    NSDate * _overriddenEventEndDate;
    NSDate * _overriddenEventStartDate;
    NSMutableDictionary * _recipientAddressesToRecipients;
    UIScrollView * _recipientScrollView;
    NSArray * _recipients;
    NSString * _searchAccountID;
    MFContactsSearchManager * _searchManager;
    NSMutableArray * _searchResults;
    UITableView * _searchResultsView;
    MFSearchShadowView * _shadowView;
    BOOL  _shouldReenableAutomaticKeyboard;
    BOOL  _showingSearchField;
    BOOL  _suppressAvailabilityRequests;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEventAttendeePickerDelegate> *emailValidationDelegate;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) NSString *remainingText;
@property (nonatomic, copy) NSString *searchAccountID;
@property (nonatomic, readonly) BOOL showAvailability;
@property (readonly) Class superclass;

+ (id)_addressForRecipient:(id)arg1;
+ (BOOL)_participantHasResponded:(id)arg1;

- (void).cxx_destruct;
- (Class)_ABPeoplePickerNavigationControllerClass;
- (Class)_ABPersonViewControllerClass;
- (Class)_CNAutocompleteFetchContextClass;
- (Class)_CNContactStoreClass;
- (Class)_CNContactViewControllerClass;
- (void)_adjustLayoutOfSubviews;
- (void)_copyRecipientsFromComposeView;
- (void)_hideSearchResultsViewAndCancelOutstandingSearches:(BOOL)arg1;
- (id)_lookUpRecipientForAddress:(id)arg1;
- (float)_maxScrollerHeight;
- (void)_refreshSearchResults;
- (void)_requestAvailabilityForRecipients:(id)arg1;
- (id)_searchManager;
- (id)_searchResultsView;
- (void)_setAtomPresentationOption:(unsigned int)arg1 forRecipient:(id)arg2;
- (void)_setRecipientsOnComposeView;
- (id)_shadowView;
- (void)_showSearchResultsView;
- (BOOL)_zeroKeyworkSearchEnabled;
- (id)addresses;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned int)arg3;
- (void)beganNetworkActivity;
- (void)commitRemainingText;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)dealloc;
- (id)emailValidationDelegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)loadView;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (id)peoplePickerPrompt;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (unsigned int)presentationOptionsForRecipient:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)recipients;
- (id)remainingText;
- (id)searchAccountID;
- (void)searchForCorecipients;
- (void)searchWithText:(id)arg1;
- (void)setEmailValidationDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (BOOL)showAvailability;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
