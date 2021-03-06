/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {
    NSObject<OS_dispatch_source> * _hudTimer;
    unsigned long long  _hudUpdateInterval;
    int  _hudXoffset;
    int  _hudYoffset;
    NSMutableDictionary * _loadingStatusCache;
    AVPlayer * _player;
    AVWeakReference * _playerLayerWeakReference;
    bool  _showCompleteURI;
    bool  _showHud;
}

+ (id)convertBitrate:(double)arg1;
+ (bool)runningAnInternalBuild;

- (void)_hudUpdate;
- (void)dealloc;
- (void)getHudSetting;
- (id)getTrackFormatDesc:(id)arg1;
- (bool)hudEnabled;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserversFromPlayer;
- (void)setColor:(int)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)startDispatchTimer;
- (void)updateBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)valueLoadedForKey:(id)arg1 onObject:(id)arg2;

@end
