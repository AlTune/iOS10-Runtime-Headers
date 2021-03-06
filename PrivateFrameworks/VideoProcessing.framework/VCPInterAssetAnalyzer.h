/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPInterAssetAnalyzer : NSObject

+ (bool)canUseLastFrameForDistance:(id)arg1;

- (int)distanceFromAsset:(id)arg1 toAsset:(id)arg2 distance:(float*)arg3;
- (int)distanceFromFeatureArray:(id)arg1 toFeatureArray:(id)arg2 distance:(float*)arg3;
- (int)generateFeature:(id)arg1 lastFrame:(bool)arg2 feature:(id*)arg3;
- (int)generateFeatureLastFrame:(id)arg1 feature:(id*)arg2;
- (struct __CVBuffer { }*)getThumbnailForAsset:(id)arg1;
- (id)init;

@end
