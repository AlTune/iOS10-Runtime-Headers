/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageDescriptorGabor : VCPImageDescriptor {
    unsigned short * _featureVector;
}

- (int)computeDistanceWith:(id)arg1 distance:(float*)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithImage:(struct __CVBuffer { }*)arg1;
- (int)processImage:(struct __CVBuffer { }*)arg1;
- (id)serialize;

@end
