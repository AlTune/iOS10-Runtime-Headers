/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTVoiceTriggerEnabledPolicy : _VTStatePolicy {
    bool  _enabled;
    int  _notificationToken;
    bool  _primedPhraseSpotter;
}

- (void)_listenForReload;
- (void)_update;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (bool)isEnabled;

@end