/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayer : GKPlayer <GKLocalPlayerAuthenticationUIPersonality, GKSavedGameListener, NSCoding, NSSecureCoding> {
    GKInvite * _acceptedInvite;
    BOOL  _authenticated;
    UIAlertView * _currentAlert;
    NSInvocation * _currentFriendRequestInvocation;
    BOOL  _didAuthenticate;
    BOOL  _enteringForeground;
    int  _environment;
    GKEventEmitter<GKLocalPlayerListener> * _eventEmitter;
    UIAlertView * _loginAlertView;
    BOOL  _newToGameCenter;
    BOOL  _showingInGameUI;
    id /* block */  _validateAccountCompletionHandler;
    BOOL  _validatingAccount;
}

@property (nonatomic, retain) GKInvite *acceptedInvite;
@property (nonatomic, retain) NSString *accountName;
@property (nonatomic, retain) UIViewController *activeViewController;
@property (nonatomic, readonly) BOOL allowNearbyMultiplayer;
@property (nonatomic) BOOL appIsInBackground;
@property (nonatomic, copy) id /* block */ authenticateHandler;
@property (getter=isAuthenticated, nonatomic) BOOL authenticated;
@property (getter=isAuthenticating, nonatomic, readonly) BOOL authenticating;
@property (nonatomic, readonly) BOOL canChangePhoto;
@property (nonatomic) UIAlertView *currentAlert;
@property (nonatomic, retain) NSInvocation *currentFriendRequestInvocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAuthenticate;
@property (nonatomic) BOOL enteringForeground;
@property (nonatomic, readonly) int environment;
@property (nonatomic, retain) GKEventEmitter<GKLocalPlayerListener> *eventEmitter;
@property (nonatomic, readonly) NSString *facebookUserID;
@property (getter=isFindable, nonatomic, readonly) BOOL findable;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *iCloudUserID;
@property (nonatomic) BOOL insideAuthenticatorInvocation;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) UIAlertView *loginAlertView;
@property (getter=isNewToGameCenter, nonatomic) BOOL newToGameCenter;
@property (getter=isPurpleBuddyAccount, nonatomic) BOOL purpleBuddyAccount;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (getter=isShowingInGameUI, nonatomic) BOOL showingInGameUI;
@property (nonatomic, retain) UIViewController<GKAuthenticateViewController> *signInViewController;
@property (readonly) Class superclass;
@property (getter=isUnderage, nonatomic, readonly) BOOL underage;
@property (nonatomic, copy) id /* block */ validateAccountCompletionHandler;
@property (nonatomic) BOOL validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_localPlayersFromInternals:(id)arg1 authenticated:(BOOL)arg2;
+ (void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4;
+ (void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)authenticatedLocalPlayers;
+ (void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(id /* block */)arg2;
+ (id)authenticatedLocalPlayersFiltered:(int)arg1;
+ (id)authenticatedLocalPlayersWithStatus:(unsigned int)arg1;
+ (id)localPlayer;
+ (id)localPlayerAccessQueue;
+ (id)localPlayerForCredential:(id)arg1;
+ (id)localPlayers;
+ (void)performAsync:(id /* block */)arg1;
+ (void)performSync:(id /* block */)arg1;
+ (BOOL)supportsSecureCoding;

- (void)acceptFriendRequestsFromPlayers:(id)arg1 withHandles:(id)arg2 handler:(id /* block */)arg3;
- (id)acceptedInvite;
- (BOOL)appIsInBackground;
- (id /* block */)authenticateHandler;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (void)callAuthHandlerWithError:(id)arg1;
- (BOOL)canChangePhoto;
- (void)cancelGameInvite:(id)arg1;
- (id)currentAlert;
- (id)currentFriendRequestInvocation;
- (void)dealloc;
- (void)declineFriendRequestsFromPlayers:(id)arg1 handler:(id /* block */)arg2;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)didAuthenticate;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)enteringForeground;
- (int)environment;
- (id)eventEmitter;
- (void)fetchMultiplayerGameInvite;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchTurnBasedEvent;
- (id)friends;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id /* block */)arg1;
- (BOOL)hasEmailAddress:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)insideAuthenticatorInvocation;
- (void)inviteeAcceptedGameInviteWithNotification:(id)arg1;
- (void)inviteeDeclinedGameInviteWithNotification:(id)arg1;
- (BOOL)isAuthenticated;
- (BOOL)isNewToGameCenter;
- (BOOL)isShowingInGameUI;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id /* block */)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendRequests:(id /* block */)arg1;
- (void)loadFriendsWithCompletionHandler:(id /* block */)arg1;
- (void)loadGameRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (id)loginAlertView;
- (void)registerListener:(id)arg1;
- (void)removeFriend:(id)arg1 block:(id /* block */)arg2;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(id /* block */)arg8;
- (void)setAcceptedInvite:(id)arg1;
- (void)setAppIsInBackground:(BOOL)arg1;
- (void)setAuthenticateHandler:(id /* block */)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setCurrentAlert:(id)arg1;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDidAuthenticate:(BOOL)arg1;
- (void)setEnteringForeground:(BOOL)arg1;
- (void)setEventEmitter:(id)arg1;
- (void)setInsideAuthenticatorInvocation:(BOOL)arg1;
- (void)setLoginAlertView:(id)arg1;
- (void)setLoginStatus:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)setNewToGameCenter:(BOOL)arg1;
- (void)setShowingInGameUI:(BOOL)arg1;
- (void)setStatus:(id)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setValidateAccountCompletionHandler:(id /* block */)arg1;
- (void)setValidatingAccount:(BOOL)arg1;
- (void)setupForCloudSavedGames;
- (void)showSettings;
- (void)signOutWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)updateFromLocalPlayer:(id)arg1;
- (id /* block */)validateAccountCompletionHandler;
- (BOOL)validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)accountName;
+ (id)authenticationPersonality;
+ (BOOL)hasAuthenticatedAccount;
+ (void)setAuthenticationPersonality:(id)arg1;
+ (id)sharedLocalPlayerAuthenticator;

- (void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (id)activeViewController;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (BOOL)alertUserInStoreDemoModeEnabled;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)authenticationDidCompleteWithError:(id)arg1;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1;
- (void)cancelAuthentication;
- (void)deletePhoto;
- (void)deletePhotoWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isAuthenticating;
- (void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)rootViewController;
- (void)setActiveViewController:(id)arg1;
- (void)setPhoto:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setRootViewController:(id)arg1;
- (void)setSignInViewController:(id)arg1;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)showCreateAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showLoginFailedAlert;
- (void)showSignInAccountRestrictedAlert;
- (void)showViewController:(id)arg1 wrapInNavController:(BOOL)arg2;
- (id)signInViewController;
- (void)startAuthenticationForExistingPrimaryPlayer;
- (void)startLegacyAuthenticationWithCompletionHandler:(id /* block */)arg1;
- (void)validateAccountWithCompletionHandler:(id /* block */)arg1;

@end
