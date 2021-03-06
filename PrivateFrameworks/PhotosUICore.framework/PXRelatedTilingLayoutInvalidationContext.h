/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext {
    PXRelatedDataSource * _fromDataSource;
    bool  _highlightedIndexPathChanged;
    bool  _maximumNumberOfRowsChanged;
    bool  _specChanged;
    PXRelatedDataSource * _toDataSource;
}

@property (nonatomic, retain) PXRelatedDataSource *fromDataSource;
@property (nonatomic) bool highlightedIndexPathChanged;
@property (nonatomic) bool maximumNumberOfRowsChanged;
@property (nonatomic) bool specChanged;
@property (nonatomic, retain) PXRelatedDataSource *toDataSource;

- (void).cxx_destruct;
- (id)fromDataSource;
- (bool)highlightedIndexPathChanged;
- (bool)maximumNumberOfRowsChanged;
- (void)setFromDataSource:(id)arg1;
- (void)setHighlightedIndexPathChanged:(bool)arg1;
- (void)setMaximumNumberOfRowsChanged:(bool)arg1;
- (void)setSpecChanged:(bool)arg1;
- (void)setToDataSource:(id)arg1;
- (bool)specChanged;
- (id)toDataSource;

@end
