/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSettings : NSObject <NSSecureCoding> {
    long long  _acceptFasterReroute;
    double  _alightSignalTimeBuffer;
    double  _backgroundTimeWindow;
    bool  _beepBeforeInstruction;
    unsigned long long  _distanceUnits;
    bool  _drivingVoiceGuidance;
    double  _etaRequestInterval;
    long long  _fakeTrafficIncidentAlert;
    double  _initialRequestDelay;
    bool  _isTracePlaybackCameraTestMode;
    bool  _pauseSpokenAudio;
    bool  _useTraceDirectionsResponses;
    bool  _useTraceETAResponses;
    NSString * _voiceLanguage;
    unsigned long long  _voiceVolume;
    bool  _walkingVoiceGuidance;
}

@property (nonatomic, readonly) long long acceptFasterReroute;
@property (nonatomic, readonly) double alightSignalTimeBuffer;
@property (nonatomic, readonly) double backgroundTimeWindow;
@property (nonatomic, readonly) bool beepBeforeInstruction;
@property (nonatomic, readonly) unsigned long long distanceUnits;
@property (nonatomic, readonly) bool drivingVoiceGuidance;
@property (nonatomic, readonly) double etaRequestInterval;
@property (nonatomic, readonly) long long fakeTrafficIncidentAlert;
@property (nonatomic, readonly) double initialRequestDelay;
@property (nonatomic, readonly) bool isTracePlaybackCameraTestMode;
@property (nonatomic, readonly) bool pauseSpokenAudio;
@property (nonatomic, readonly) bool useTraceDirectionsResponses;
@property (nonatomic, readonly) bool useTraceETAResponses;
@property (nonatomic, readonly) NSString *voiceLanguage;
@property (nonatomic, readonly) unsigned long long voiceVolume;
@property (nonatomic, readonly) bool walkingVoiceGuidance;

+ (id)_mapsSettings;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)acceptFasterReroute;
- (double)alightSignalTimeBuffer;
- (double)backgroundTimeWindow;
- (bool)beepBeforeInstruction;
- (unsigned long long)distanceUnits;
- (bool)drivingVoiceGuidance;
- (void)encodeWithCoder:(id)arg1;
- (double)etaRequestInterval;
- (long long)fakeTrafficIncidentAlert;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)initialRequestDelay;
- (bool)isTracePlaybackCameraTestMode;
- (bool)pauseSpokenAudio;
- (bool)useTraceDirectionsResponses;
- (bool)useTraceETAResponses;
- (id)voiceLanguage;
- (unsigned long long)voiceVolume;
- (bool)walkingVoiceGuidance;

@end
