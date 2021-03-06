/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {
    float  __rate;
    double  __videoZoomFactor;
}

@property (nonatomic, readonly) float _rate;
@property (nonatomic, readonly) double _videoZoomFactor;

- (float)_rate;
- (double)_videoZoomFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2;

@end
