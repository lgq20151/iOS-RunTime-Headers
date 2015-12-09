/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUVideoProxyCall : TUProxyCall {
    IMAVChat * _chat;
}

@property (nonatomic, readonly) TUProxyCall *callHistoryProxyCall;
@property (nonatomic, retain) IMAVChat *chat;

- (void).cxx_destruct;
- (id)_callHistoryIdentifierFromChat;
- (void)_setLocalAspectRatios;
- (void)answerWithSourceIdentifier:(id)arg1 wantsHoldMusic:(BOOL)arg2;
- (id)callHistoryProxyCall;
- (int)cameraType;
- (id)chat;
- (BOOL)hasReceivedFirstFrame;
- (id)initWithChat:(id)arg1;
- (BOOL)isMediaStalled;
- (BOOL)isSendingVideo;
- (BOOL)isVideoDegraded;
- (BOOL)isVideoPaused;
- (struct CGSize { float x1; float x2; })localAspectRatioForOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })remoteAspectRatio;
- (int)remoteCameraOrientation;
- (id)remoteParticipant;
- (void*)remoteVideoBackLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })remoteVideoContentRect;
- (void*)remoteVideoLayer;
- (int)service;
- (void)setChat:(id)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setRemoteVideoBackLayer:(void*)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)updateWithCall:(id)arg1;

@end