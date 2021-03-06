/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent {
    long long  _shuffleType;
}

@property (nonatomic, readonly) long long shuffleType;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (long long)shuffleType;

@end
