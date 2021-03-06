/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardSectionView : UIView {
    SearchUICardViewController * _controller;
    BOOL  _fullWidthSeparator;
    BOOL  _hideSeparatorBelow;
    <SearchUICardSection> * _section;
    NSURL * _url;
}

@property SearchUICardViewController *controller;
@property (nonatomic) BOOL fullWidthSeparator;
@property (nonatomic) BOOL hideSeparatorBelow;
@property (nonatomic, retain) <SearchUICardSection> *section;
@property (retain) NSURL *url;

+ (Class)classForSection:(id)arg1;

- (void).cxx_destruct;
- (id)controller;
- (BOOL)fullWidthSeparator;
- (BOOL)hideSeparatorBelow;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2;
- (id)section;
- (float)separatorLeftInset;
- (void)setController:(id)arg1;
- (void)setFullWidthSeparator:(BOOL)arg1;
- (void)setHideSeparatorBelow:(BOOL)arg1;
- (void)setSection:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
