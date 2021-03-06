/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCall : NSObject <NSSecureCoding> {
    TUCallNotificationManager * _callNotificationManager;
    TUCallServicesInterface * _callServicesInterface;
    double  _clientMessageReceiveTime;
    TUProxyCall * _comparativeCall;
    bool  _connected;
    bool  _connecting;
    int  _disconnectedReason;
    bool  _endpointOnCurrentDevice;
    bool  _expectedEndpointOnPairedClientDevice;
    int  _faceTimeIDStatus;
    NSString * _hardPauseDigits;
    int  _hardPauseDigitsState;
    bool  _hasAudioFinished;
    bool  _hasBegunAudioInterruption;
    bool  _hasSentInvitation;
    bool  _hasUpdatedAudio;
    double  _hostCreationTime;
    double  _hostMessageSendTime;
    NSString * _isoCountryCode;
    TUCallModel * _model;
    struct { 
        unsigned int joiningConference : 1; 
        unsigned int leavingConference : 1; 
    }  _phoneCallFlags;
    NSString * _prematurelySelectedAudioRouteUID;
    NSDictionary * _providerContext;
    long long  _provisionalHoldStatus;
    NSObject<OS_dispatch_queue> * _queue;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenAspectRatio;
    bool  _ringtoneSuppressedRemotely;
    bool  _shouldSuppressRingtone;
    long long  _soundRegion;
    NSString * _sourceIdentifier;
    int  _transitionStatus;
    NSString * _uniqueProxyIdentifier;
    long long  _videoStreamToken;
    bool  _wantsHoldMusic;
    bool  _wasDialAssisted;
    bool  _wasPulledToCurrentDevice;
}

@property (nonatomic, readonly) int abUID;
@property (nonatomic, readonly, copy) NSString *audioCategory;
@property (nonatomic, readonly, copy) NSString *audioMode;
@property (nonatomic, readonly) TUCallProvider *backingProvider;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly) TUCallCenter *callCenter;
@property (nonatomic, readonly) double callDuration;
@property (nonatomic, readonly, copy) NSString *callDurationString;
@property (nonatomic, readonly, copy) NSUUID *callGroupUUID;
@property (nonatomic, readonly, copy) NSString *callHistoryIdentifier;
@property (nonatomic, readonly) int callIdentifier;
@property (nonatomic, readonly) TUCallNotificationManager *callNotificationManager;
@property (nonatomic, readonly) int callRelaySupport;
@property (nonatomic) TUCallServicesInterface *callServicesInterface;
@property (nonatomic, readonly) NSDictionary *callStats;
@property (nonatomic, readonly) int callStatus;
@property (nonatomic, readonly, copy) NSString *callUUID;
@property (nonatomic, readonly, copy) NSString *callerNameFromNetwork;
@property (nonatomic, readonly) long long cameraType;
@property (nonatomic) double clientMessageReceiveTime;
@property (nonatomic, readonly, copy) NSString *companyName;
@property (nonatomic, retain) TUProxyCall *comparativeCall;
@property (getter=isConferenced, nonatomic, readonly) bool conferenced;
@property (getter=isConnected, nonatomic) bool connected;
@property (getter=isConnecting, nonatomic) bool connecting;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSString *destinationID;
@property (nonatomic, readonly, copy) TUDialRequest *dialRequestForRedial;
@property (nonatomic) int disconnectedReason;
@property (nonatomic, readonly, copy) TUCallDisplayContext *displayContext;
@property (nonatomic, readonly, copy) NSString *displayFirstName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) TUCallProvider *displayProvider;
@property (getter=isDownlinkMuted, nonatomic) bool downlinkMuted;
@property (getter=isEmergencyCall, nonatomic, readonly) bool emergencyCall;
@property (nonatomic, readonly) NSString *endedErrorString;
@property (nonatomic, readonly) NSString *endedReasonString;
@property (nonatomic, readonly, copy) NSDictionary *endedReasonUserInfo;
@property (getter=isEndpointOnCurrentDevice, nonatomic) bool endpointOnCurrentDevice;
@property (getter=isExpectedEndpointOnPairedClientDevice, nonatomic) bool expectedEndpointOnPairedClientDevice;
@property (nonatomic) int faceTimeIDStatus;
@property (nonatomic, copy) NSString *hardPauseDigits;
@property (nonatomic, readonly, retain) NSString *hardPauseDigitsDisplayString;
@property (nonatomic) int hardPauseDigitsState;
@property (nonatomic) bool hasAudioFinished;
@property (nonatomic) bool hasBegunAudioInterruption;
@property (nonatomic) bool hasSentInvitation;
@property (nonatomic) bool hasUpdatedAudio;
@property (nonatomic) double hostCreationTime;
@property (nonatomic) double hostMessageSendTime;
@property (getter=isHostedOnCurrentDevice, nonatomic, readonly) bool hostedOnCurrentDevice;
@property (getter=isIncoming, nonatomic, readonly) bool incoming;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isOnHold;
@property (nonatomic, readonly) bool isSendingAudio;
@property (nonatomic) bool isSendingVideo;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, readonly, retain) NSData *localFrequency;
@property (nonatomic, readonly, copy) NSString *localizedLabel;
@property (getter=isMediaStalled, nonatomic, readonly) bool mediaStalled;
@property (nonatomic, copy) TUCallModel *model;
@property (nonatomic, readonly) bool needsManualInCallSounds;
@property (getter=isOutgoing, nonatomic, readonly) bool outgoing;
@property (nonatomic, retain) NSString *prematurelySelectedAudioRouteUID;
@property (nonatomic, readonly) TUCallProvider *provider;
@property (nonatomic, readonly) NSDictionary *providerContext;
@property (nonatomic) long long provisionalHoldStatus;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *reminderString;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } remoteAspectRatio;
@property (nonatomic, readonly) long long remoteCameraOrientation;
@property (nonatomic, readonly, retain) NSData *remoteFrequency;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } remoteScreenAspectRatio;
@property (nonatomic, readonly) long long remoteScreenOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } remoteVideoContentRect;
@property (nonatomic) bool ringtoneSuppressedRemotely;
@property (nonatomic, readonly) int service;
@property (nonatomic, readonly) bool shouldDisplayLocationIfAvailable;
@property (nonatomic, readonly) bool shouldPlayDTMFTone;
@property (nonatomic) bool shouldSuppressRingtone;
@property (nonatomic) long long soundRegion;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) int status;
@property (getter=isStatusFinal, nonatomic, readonly) bool statusFinal;
@property (nonatomic, readonly) bool statusIsProvisional;
@property (readonly, copy) NSString *suggestedDisplayName;
@property (nonatomic, readonly) bool supportsDTMFTones;
@property (nonatomic) int transitionStatus;
@property (getter=isTTY, nonatomic, readonly) bool tty;
@property (nonatomic, readonly) int ttyType;
@property (nonatomic, copy) NSString *uniqueProxyIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniqueProxyIdentifierUUID;
@property (getter=isUplinkMuted, nonatomic) bool uplinkMuted;
@property (getter=isUsingBaseband, nonatomic, readonly) bool usingBaseband;
@property (getter=isVideoDegraded, nonatomic, readonly) bool videoDegraded;
@property (getter=isVideoPaused, nonatomic, readonly) bool videoPaused;
@property (nonatomic, readonly) long long videoStreamToken;
@property (getter=isVoicemail, nonatomic, readonly) bool voicemail;
@property (getter=isVoIPCall, nonatomic, readonly) bool voipCall;
@property (nonatomic) bool wantsHoldMusic;
@property (nonatomic, readonly) bool wasDeclined;
@property (nonatomic) bool wasDialAssisted;
@property (nonatomic) bool wasPulledToCurrentDevice;
@property (getter=isWiFiCall, nonatomic, readonly) bool wiFiCall;

+ (id)_supplementalDialTelephonyCallStringForLocString:(id)arg1 destination:(id)arg2 isPhoneNumber:(bool)arg3 includeFaceTimeAudio:(bool)arg4;
+ (id)faceTimeSupplementalDialTelephonyCallStringIncludingFTA:(bool)arg1;
+ (id)supplementalDialTelephonyCallString;
+ (id)supplementalDialTelephonyCallStringForDestination:(id)arg1 isPhoneNumber:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleStatusChange;
- (bool)_isDestinationID:(id)arg1 equalToDestinationIDForVideoUpgrade:(id)arg2;
- (int)abUID;
- (void)answerWithRequest:(id)arg1;
- (id)audioCategory;
- (id)audioMode;
- (id)backingProvider;
- (id)callCenter;
- (double)callDuration;
- (id)callDurationString;
- (id)callGroupUUID;
- (id)callHistoryIdentifier;
- (int)callIdentifier;
- (id)callNotificationManager;
- (int)callRelaySupport;
- (id)callServicesInterface;
- (id)callStats;
- (int)callStatus;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (long long)cameraType;
- (double)clientMessageReceiveTime;
- (id)companyName;
- (id)comparativeCall;
- (id)contactIdentifier;
- (id)contactImageDataWithFormat:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationID;
- (id)dialRequestForRedial;
- (void)disconnectWithReason:(int)arg1;
- (int)disconnectedReason;
- (id)displayContext;
- (id)displayFirstName;
- (id)displayName;
- (id)displayProvider;
- (void)encodeWithCoder:(id)arg1;
- (id)endedErrorString;
- (id)endedReasonString;
- (id)endedReasonUserInfo;
- (id)errorAlertMessage;
- (id)errorAlertTitle;
- (int)faceTimeIDStatus;
- (void)groupWithOtherCall:(id)arg1;
- (id)hardPauseDigits;
- (id)hardPauseDigitsDisplayString;
- (int)hardPauseDigitsState;
- (bool)hasAudioFinished;
- (bool)hasBegunAudioInterruption;
- (bool)hasRelaySupport:(int)arg1;
- (bool)hasSentInvitation;
- (bool)hasUpdatedAudio;
- (unsigned long long)hash;
- (void)hold;
- (double)hostCreationTime;
- (double)hostMessageSendTime;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(bool)arg2;
- (bool)isActive;
- (bool)isBlocked;
- (bool)isConferenced;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isDialRequestVideoUpgrade:(id)arg1;
- (bool)isDownlinkMuted;
- (bool)isEmergencyCall;
- (bool)isEndpointOnCurrentDevice;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCall:(id)arg1;
- (bool)isExpectedEndpointOnPairedClientDevice;
- (bool)isHostedOnCurrentDevice;
- (bool)isIncoming;
- (bool)isMediaStalled;
- (bool)isMuted;
- (bool)isOnHold;
- (bool)isOutgoing;
- (bool)isSendingAudio;
- (bool)isSendingVideo;
- (bool)isStatusFinal;
- (bool)isTTY;
- (bool)isUplinkMuted;
- (bool)isUsingBaseband;
- (bool)isVideo;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (bool)isVideoUpgradeFromCall:(id)arg1;
- (bool)isVoIPCall;
- (bool)isVoicemail;
- (bool)isWiFiCall;
- (id)isoCountryCode;
- (struct CGSize { double x1; double x2; })localAspectRatioForOrientation:(long long)arg1;
- (id)localFrequency;
- (id)localizedLabel;
- (id)model;
- (bool)needsManualInCallSounds;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (id)prematurelySelectedAudioRouteUID;
- (id)provider;
- (id)providerContext;
- (long long)provisionalHoldStatus;
- (id)queue;
- (id)reminderString;
- (struct CGSize { double x1; double x2; })remoteAspectRatio;
- (long long)remoteCameraOrientation;
- (id)remoteFrequency;
- (struct CGSize { double x1; double x2; })remoteScreenAspectRatio;
- (long long)remoteScreenOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteVideoContentRect;
- (void)resetProvisionalState;
- (void)resetWantsHoldMusic;
- (bool)ringtoneSuppressedRemotely;
- (void)sendHardPauseDigits;
- (int)service;
- (id)serviceDisplayString;
- (void)setCallServicesInterface:(id)arg1;
- (void)setClientMessageReceiveTime:(double)arg1;
- (void)setComparativeCall:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setConnecting:(bool)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setDownlinkMuted:(bool)arg1;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (void)setExpectedEndpointOnPairedClientDevice:(bool)arg1;
- (void)setFaceTimeIDStatus:(int)arg1;
- (void)setHardPauseDigits:(id)arg1;
- (void)setHardPauseDigitsState:(int)arg1;
- (void)setHasAudioFinished:(bool)arg1;
- (void)setHasBegunAudioInterruption:(bool)arg1;
- (void)setHasSentInvitation:(bool)arg1;
- (void)setHasUpdatedAudio:(bool)arg1;
- (void)setHostCreationTime:(double)arg1;
- (void)setHostMessageSendTime:(double)arg1;
- (void)setIsOnHold:(bool)arg1;
- (void)setIsSendingVideo:(bool)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setModel:(id)arg1;
- (bool)setMuted:(bool)arg1;
- (void)setPrematurelySelectedAudioRouteUID:(id)arg1;
- (void)setProvisionalHoldStatus:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRingtoneSuppressedRemotely:(bool)arg1;
- (void)setShouldSuppressRingtone:(bool)arg1;
- (void)setSoundRegion:(long long)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (void)setUplinkMuted:(bool)arg1;
- (void)setWantsHoldMusic:(bool)arg1;
- (void)setWasDialAssisted:(bool)arg1;
- (void)setWasPulledToCurrentDevice:(bool)arg1;
- (bool)shouldDisplayLocationIfAvailable;
- (bool)shouldPlayDTMFTone;
- (bool)shouldSuppressRingtone;
- (long long)soundRegion;
- (id)sourceIdentifier;
- (double)startTime;
- (int)status;
- (id)statusDisplayStringWithLabel:(id)arg1;
- (bool)statusIsProvisional;
- (id)suggestedDisplayName;
- (id)supplementalInCallString;
- (bool)supportsDTMFTones;
- (void)suppressRingtone;
- (void)suppressRingtoneDueToRemoteSuppression;
- (int)transitionStatus;
- (int)ttyType;
- (void)ungroup;
- (void)unhold;
- (id)uniqueProxyIdentifier;
- (id)uniqueProxyIdentifierUUID;
- (void)updateComparativeCall;
- (void)updateWithCall:(id)arg1;
- (long long)videoStreamToken;
- (bool)wantsHoldMusic;
- (bool)wasDeclined;
- (bool)wasDialAssisted;
- (bool)wasPulledToCurrentDevice;

@end
