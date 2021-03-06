/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet {
    bool  _isOriginalSRGB;
    NSString * _originalAssetsUUID;
    short  _originalExifOrientation;
    NSString * _originalFilename;
    int  _originalFilesize;
    short  _originalHeight;
    NSString * _originalPath;
    short  _originalWidth;
}

@property (nonatomic, readonly) bool isOriginalSRGB;
@property (nonatomic, readonly) NSString *originalAssetsUUID;
@property (nonatomic, readonly) short originalExifOrientation;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) int originalFilesize;
@property (nonatomic, readonly) short originalHeight;
@property (nonatomic, readonly) NSString *originalPath;
@property (nonatomic, readonly) short originalWidth;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (bool)isOriginalSRGB;
- (id)originalAssetsUUID;
- (short)originalExifOrientation;
- (id)originalFilename;
- (int)originalFilesize;
- (short)originalHeight;
- (id)originalPath;
- (short)originalWidth;

@end
