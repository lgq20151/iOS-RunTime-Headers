/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABGroupWrapper : NSObject {
    NSString * _accountIdentifier;
    ACAccountStore * _accountStore;
    void * _addressBook;
    NSString * _cachedName;
    NSSet * _childGroupWrappers;
    id  _delegate;
    void * _group;
    ABGroupWrapper * _parentGroupWrapper;
    BOOL  _selected;
    BOOL  _shouldBeSelectedWhenAllChildrenAreSelected;
    void * _source;
}

@property (nonatomic, readonly) NSString *_accountDescriptionBasedOnIdentifier;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, retain) NSSet *childGroupWrappers;
@property (nonatomic) <ABGroupWrapperDelegate> *delegate;
@property (nonatomic, readonly) void*group;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) ABGroupWrapper *parentGroupWrapper;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) BOOL shouldBeSelectedWhenAllChildrenAreSelected;
@property (nonatomic, readonly) void*source;
@property (nonatomic, readonly) int sourceType;

+ (id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountStore:(id)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountStore:(id)arg3 excludingSearchableStores:(BOOL)arg4 isSoleAccount:(BOOL)arg5;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 excludingSearchableStores:(BOOL)arg3;

- (id)_accountDescriptionBasedOnIdentifier;
- (id)_rootGroupWrapper;
- (id)accountIdentifier;
- (id)accountStore;
- (void*)addressBook;
- (void)childGroupWrapper:(id)arg1 didBecomeSelected:(BOOL)arg2;
- (id)childGroupWrappers;
- (int)compareToGroupWrapper:(id)arg1;
- (id)copyDictionaryRepresentation;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void*)group;
- (id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 source:(void*)arg3 group:(void*)arg4;
- (BOOL)isContainerWrapper;
- (BOOL)isDirectoryWrapper;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGlobalWrapper;
- (BOOL)isSelected;
- (id)name;
- (id)parentGroupWrapper;
- (int)score;
- (void)setAccountStore:(id)arg1;
- (void)setChildGroupWrappers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParentGroupWrapper:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 propagateSelectionToChildren:(BOOL)arg2;
- (void)setShouldBeSelectedWhenAllChildrenAreSelected:(BOOL)arg1;
- (BOOL)shouldBeSelectedWhenAllChildrenAreSelected;
- (BOOL)showLinkedPeople;
- (void*)source;
- (int)sourceType;
- (BOOL)toggleSelection;

@end