/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuViewController : UITableViewController {
    UIColor * _borderColor;
    <SKUIMenuViewControllerDelegate> * _delegate;
    int  _indexOfCheckedTitle;
    NSArray * _menuImages;
    int  _menuStyle;
    NSArray * _menuTitles;
}

@property (nonatomic) <SKUIMenuViewControllerDelegate> *delegate;
@property (nonatomic) int indexOfCheckedTitle;
@property (nonatomic, readonly) NSArray *menuImages;
@property (nonatomic) int menuStyle;
@property (nonatomic, readonly) NSArray *menuTitles;

- (void).cxx_destruct;
- (void)_reloadViewStyling;
- (id)delegate;
- (int)indexOfCheckedTitle;
- (id)initWithMenuTitles:(id)arg1;
- (id)initWithMenuTitles:(id)arg1 images:(id)arg2;
- (void)loadView;
- (id)menuImages;
- (int)menuStyle;
- (id)menuTitles;
- (void)setDelegate:(id)arg1;
- (void)setIndexOfCheckedTitle:(int)arg1;
- (void)setMenuStyle:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end