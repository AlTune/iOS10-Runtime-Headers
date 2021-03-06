/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleAddViewController : UICollectionViewController <PXPeopleDataSourceDelegate, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout> {
    UIBarButtonItem * _addItem;
    UIBarButtonItem * _cancelItem;
    PXPeoplePersonDataSource * _dataSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _nonPriorityItemSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _priorityItemSize;
}

@property (nonatomic, retain) UIBarButtonItem *addItem;
@property (nonatomic, retain) UIBarButtonItem *cancelItem;
@property (retain) PXPeoplePersonDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } nonPriorityItemSize;
@property struct CGSize { double x1; double x2; } priorityItemSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1;
- (void)_calculateItemSize;
- (void)_cancelAction:(id)arg1;
- (id)_changeMemberAtIndex:(id)arg1 toPersonType:(long long)arg2;
- (id)_flowLayout;
- (id)_leftBarItems;
- (long long)_personTypeForIndexPath:(id)arg1;
- (id)_rightBarItems;
- (void)_updateNavBarForIndexes:(id)arg1;
- (bool)_wantsCenteringLayout;
- (id)addItem;
- (void)addSelectionToHomeScreen;
- (id)cancelItem;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)commonInit;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)init;
- (struct CGSize { double x1; double x2; })nonPriorityItemSize;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (struct CGSize { double x1; double x2; })priorityItemSize;
- (void)setAddItem:(id)arg1;
- (void)setCancelItem:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNonPriorityItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPriorityItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
