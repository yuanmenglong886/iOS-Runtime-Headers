/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSOperationQueue, IMAVChatParticipant, NSTimer, NSDictionary, NSString, IMAVChat, IMHandle, NSData;

@interface IMAVChatParticipant : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int _ardRole;
    BOOL _audioMuted;
    IMAVChat *_avChat;
    int _avRelayStatus;
    unsigned int _cameraOrientation;
    unsigned int _cameraType;
    unsigned int _chatEndedReason;
    int _chatError;
    NSString *_conferenceID;
    NSTimer *_connectTimeoutTimer;
    NSString *_errorString;
    IMHandle *_imHandle;
    BOOL _inviteDelivered;
    IMHandle *_inviter;
    BOOL _isAOLInterop;
    BOOL _isInitiator;
    BOOL _isRecording;
    NSData *_localICEData;
    NSOperationQueue *_messagingQueue;
    BOOL _networkStalled;
    NSDictionary *_preemptiveRelayRequest;
    NSDictionary *_preemptiveRelayUpdate;
    NSDictionary *_properties;
    NSString *_rawErrorString;
    NSData *_remoteICEData;
    } _remoteLandscapeContentRect;
    } _remoteLandscapeOrientation;
    } _remotePIPLandscapeOrientation;
    } _remotePIPPortraitOrientation;
    } _remotePortraitContentRect;
    } _remotePortraitOrientation;
    BOOL _sendingAudio;
    BOOL _sendingAuxVideo;
    BOOL _sendingVideo;
    unsigned int _state;
    BOOL _usingICE;
    NSString *_vcPartyID;
    BOOL _videoPaused;
}

@property(setter=_setConferenceID:,retain) NSString * _conferenceID;
@property(setter=_setConnectTimeoutTimer:,retain) NSTimer * _connectTimeoutTimer;
@property(setter=_setErrorString:,retain) NSString * _errorString;
@property(setter=_setInviteDelivered:) BOOL _inviteDelivered;
@property(setter=_setLocalICEData:,retain) NSData * _localICEData;
@property(setter=_setMessagingQueue:,retain) NSOperationQueue * _messagingQueue;
@property(setter=_setPreemptiveRelayInitate:,retain) NSDictionary * _preemptiveRelayInitate;
@property(setter=_setPreemptiveRelayUpdate:,retain) NSDictionary * _preemptiveRelayUpdate;
@property(setter=_setRawErrorString:,retain) NSString * _rawErrorString;
@property(setter=_setRemoteLandscapeContentRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _remoteLandscapeContentRect;
@property(setter=_setRemoteLandscapeOrientation:) struct CGSize { float x1; float x2; } _remoteLandscapeOrientation;
@property(setter=_setRemotePIPLandscapeOrientation:) struct CGSize { float x1; float x2; } _remotePIPLandscapeOrientation;
@property(setter=_setRemotePIPPortraitOrientation:) struct CGSize { float x1; float x2; } _remotePIPPortraitOrientation;
@property(setter=_setRemotePortraitContentRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _remotePortraitContentRect;
@property(setter=_setRemotePortraitOrientation:) struct CGSize { float x1; float x2; } _remotePortraitOrientation;
@property(setter=setARDRole:) int ardRole;
@property IMAVChat * avChat;
@property(setter=setAVRelayStatus:) int avRelayStatus;
@property(setter=_setCameraOrientation:) unsigned int cameraOrientation;
@property(setter=_setCameraType:) unsigned int cameraType;
@property int error;
@property(readonly) NSString * errorString;
@property(readonly) IMHandle * imHandle;
@property(readonly) IMHandle * invitedBy;
@property(setter=setAOLInterop:) BOOL isAOLInterop;
@property(setter=setAudioMuted:) BOOL isAudioMuted;
@property(setter=setAudioMuted:) BOOL isAudioMuted;
@property(readonly) BOOL isInitiator;
@property(readonly) BOOL isLocalParticipant;
@property(setter=setNetworkStalled:) BOOL isNetworkStalled;
@property(setter=setRecording:) BOOL isRecording;
@property(readonly) BOOL isSendingAudio;
@property(readonly) BOOL isSendingAudio;
@property(setter=setSendingAuxVideo:) BOOL isSendingAuxVideo;
@property(setter=setSendingAuxVideo:) BOOL isSendingAuxVideo;
@property(readonly) BOOL isSendingVideo;
@property(readonly) BOOL isSendingVideo;
@property(readonly) BOOL isUsingICE;
@property(setter=setVideoPaused:) BOOL isVideoPaused;
@property(setter=setVideoPaused:) BOOL isVideoPaused;
@property(readonly) NSString * name;
@property(retain) NSDictionary * properties;
@property(readonly) NSString * rawErrorString;
@property(readonly) unsigned int reasonChatEnded;
@property(readonly) IMAVChatParticipant * remoteErrorParticipant;
@property NSData * remoteICEData;
@property unsigned int state;
@property(setter=setVCPartyID:,retain) NSString * vcPartyID;
@property void* videoBackLayer;
@property void* videoLayer;

- (void)_cancelMessagesQueue;
- (id)_conferenceID;
- (void)_connectTimeout:(id)arg1;
- (id)_connectTimeoutTimer;
- (void)_enqueueOperation:(id)arg1;
- (id)_errorString;
- (void)_flushMessagesQueue;
- (void)_generateErrorStrings;
- (void)_getErrorString:(id*)arg1 rawString:(id*)arg2 forError:(int)arg3;
- (void)_handleIMAVResponse:(unsigned int)arg1;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(BOOL)arg3 sendingVideo:(BOOL)arg4 usingICE:(BOOL)arg5 toChat:(id)arg6 inState:(unsigned int)arg7 withError:(int)arg8 andReason:(unsigned int)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (BOOL)_inviteDelivered;
- (id)_localICEData;
- (id)_messagingQueue;
- (void)_noteInviteDelivered;
- (id)_preemptiveRelayInitate;
- (id)_preemptiveRelayUpdate;
- (void)_processPropertyUpdate:(id)arg1;
- (id)_rawErrorString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_remoteLandscapeContentRect;
- (struct CGSize { float x1; float x2; })_remoteLandscapeOrientation;
- (struct CGSize { float x1; float x2; })_remotePIPLandscapeOrientation;
- (struct CGSize { float x1; float x2; })_remotePIPPortraitOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_remotePortraitContentRect;
- (struct CGSize { float x1; float x2; })_remotePortraitOrientation;
- (void)_setCameraOrientation:(unsigned int)arg1;
- (void)_setCameraType:(unsigned int)arg1;
- (void)_setChatError:(int)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setConnectTimeoutTimer:(id)arg1;
- (void)_setError:(int)arg1;
- (void)_setErrorString:(id)arg1;
- (void)_setInviteDelivered:(BOOL)arg1;
- (void)_setLocalICEData:(id)arg1;
- (void)_setMessagingQueue:(id)arg1;
- (void)_setPreemptiveRelayInitate:(id)arg1;
- (void)_setPreemptiveRelayUpdate:(id)arg1;
- (void)_setRawErrorString:(id)arg1;
- (void)_setRemoteLandscapeContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setRemoteLandscapeOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRemotePIPLandscapeOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRemotePIPPortraitOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRemotePortraitContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setRemotePortraitOrientation:(struct CGSize { float x1; float x2; })arg1;
- (void)_setState:(unsigned int)arg1 withReason:(unsigned int)arg2 andError:(int)arg3;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (void)_updateProperties:(id)arg1;
- (int)ardRole;
- (struct CGSize { float x1; float x2; })aspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (id)avChat;
- (int)avRelayStatus;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (void)cancelInvitation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (void)disconnectFromAVChat;
- (int)error;
- (id)errorString;
- (id)errorStringFor:(int)arg1;
- (id)getLocalICEData;
- (id)imHandle;
- (id)init;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 toChat:(id)arg4 account:(id)arg5;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (id)initWithStatusNugget:(id)arg1 andChat:(id)arg2 account:(id)arg3;
- (id)invitedBy;
- (BOOL)isAOLInterop;
- (BOOL)isAudioMuted;
- (BOOL)isInitiator;
- (BOOL)isLocalParticipant;
- (BOOL)isNetworkStalled;
- (BOOL)isRecording;
- (BOOL)isSendingAudio;
- (BOOL)isSendingAuxVideo;
- (BOOL)isSendingVideo;
- (BOOL)isUsingICE;
- (BOOL)isVideoPaused;
- (struct CGSize { float x1; float x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (id)name;
- (id)properties;
- (id)rawErrorString;
- (unsigned int)reasonChatEnded;
- (id)rebuildLocalICEData;
- (void)receivedRelayProposalAcceptWithConnectionData:(id)arg1;
- (void)receivedRelayProposalRequestWithConnectionData:(id)arg1;
- (id)remoteErrorParticipant;
- (id)remoteICEData;
- (void)requestIconIfNecessary;
- (void)resetWaitingToConnectTimer;
- (void)sendAVMessage:(unsigned int)arg1 userInfo:(id)arg2;
- (void)sendCounterProposal;
- (void)sendInvitation;
- (void)sendRelayProposal;
- (void)sendResponse:(unsigned int)arg1;
- (void)sendVCUpdate;
- (void)setAOLInterop:(BOOL)arg1;
- (void)setARDRole:(int)arg1;
- (void)setAVChat:(id)arg1;
- (void)setAVRelayStatus:(int)arg1;
- (void)setAudioMuted:(BOOL)arg1;
- (void)setNetworkStalled:(BOOL)arg1;
- (void)setProperties:(id)arg1;
- (void)setRecording:(BOOL)arg1;
- (void)setRemoteICEData:(id)arg1;
- (void)setSendingAuxVideo:(BOOL)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStateToEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)setVCPartyID:(id)arg1;
- (void)setVideoBackLayer:(void*)arg1;
- (void)setVideoLayer:(void*)arg1;
- (void)setVideoPaused:(BOOL)arg1;
- (void)setWaitingToConnect:(BOOL)arg1;
- (unsigned int)state;
- (id)statusNugget;
- (id)vcPartyID;
- (void*)videoBackLayer;
- (void*)videoLayer;

@end