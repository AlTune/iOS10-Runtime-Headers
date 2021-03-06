/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLPixelBufferCoreGraphicsConverter : CVMLPixelBufferConverter

- (id)_preparePixelBufferWithImage:(struct CGImage { }*)arg1 drawTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 originalToPixelBufferTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 format:(unsigned int)arg6 error:(id*)arg7;
- (struct CGImage { }*)_subsampledImageForScale:(double)arg1 remainingScale:(double*)arg2 appliedScale:(double*)arg3 error:(id*)arg4;
- (bool)_useCoreImageForFormat:(unsigned int)arg1;
- (id)newBufferBestFitInWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 error:(id*)arg4;
- (id)newCroppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 error:(id*)arg5;

@end
