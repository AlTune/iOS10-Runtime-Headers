/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryKeepLocalStatusRequestOperation : MSVOperation {
    struct shared_ptr<mlcore::Query> { 
        struct Query {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _downloadableItemsQuery;
    long long  _enableState;
    MPModelObject * _identifyingModelObject;
    MPMediaLibraryView * _libraryView;
    NSNumber * _redownloadableItemCount;
    id /* block */  _responseHandler;
}

@property (nonatomic) struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; } downloadableItemsQuery;
@property (nonatomic) long long enableState;
@property (nonatomic, retain) MPModelObject *identifyingModelObject;
@property (nonatomic, retain) MPMediaLibraryView *libraryView;
@property (nonatomic, copy) NSNumber *redownloadableItemCount;
@property (nonatomic, copy) id /* block */ responseHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })downloadableItemsQuery;
- (long long)enableState;
- (void)execute;
- (id)identifyingModelObject;
- (id)libraryView;
- (id)redownloadableItemCount;
- (id /* block */)responseHandler;
- (void)setDownloadableItemsQuery:(struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setEnableState:(long long)arg1;
- (void)setIdentifyingModelObject:(id)arg1;
- (void)setLibraryView:(id)arg1;
- (void)setRedownloadableItemCount:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
