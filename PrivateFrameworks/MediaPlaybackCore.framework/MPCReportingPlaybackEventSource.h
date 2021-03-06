/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingPlaybackEventSource : NSObject {
    double  _eventDuration;
    NSString * _featureName;
    NSString * _lyricsID;
    MPModelPlayEvent * _modelPlayEvent;
    MPModelSong * _modelSong;
    unsigned long long  _overrideItemType;
    NSString * _playbackSessionID;
    NSData * _recommendationData;
    bool  _shouldReportPlayEventsToStore;
    NSData * _trackInfo;
}

@property (nonatomic) double eventDuration;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic, copy) NSString *lyricsID;
@property (nonatomic, retain) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic, retain) MPModelSong *modelSong;
@property (nonatomic) unsigned long long overrideItemType;
@property (nonatomic, copy) NSString *playbackSessionID;
@property (nonatomic, copy) NSData *recommendationData;
@property (nonatomic) bool shouldReportPlayEventsToStore;
@property (nonatomic, copy) NSData *trackInfo;

- (void).cxx_destruct;
- (double)eventDuration;
- (id)featureName;
- (id)initWithAVItem:(id)arg1;
- (id)lyricsID;
- (id)modelPlayEvent;
- (id)modelSong;
- (unsigned long long)overrideItemType;
- (id)playbackSessionID;
- (id)recommendationData;
- (void)setEventDuration:(double)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setLyricsID:(id)arg1;
- (void)setModelPlayEvent:(id)arg1;
- (void)setModelSong:(id)arg1;
- (void)setOverrideItemType:(unsigned long long)arg1;
- (void)setPlaybackSessionID:(id)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setShouldReportPlayEventsToStore:(bool)arg1;
- (void)setTrackInfo:(id)arg1;
- (bool)shouldReportPlayEventsToStore;
- (id)trackInfo;

@end
