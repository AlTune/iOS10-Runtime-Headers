/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorMenuViewController : MiroMemoryEditorBasePlayerViewController <UITableViewDataSource, UITableViewDelegate> {
    MiroAutoEditor * _autoEditor;
    <MiroMemoryEditorMenuViewControllerDelegate> * _menuDelegate;
    NSIndexPath * _previouslySelectedIndexPath;
    UITableView * _tableView;
}

@property (nonatomic, retain) MiroAutoEditor *autoEditor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MiroMemoryEditorMenuViewControllerDelegate> *menuDelegate;
@property (nonatomic, retain) NSIndexPath *previouslySelectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)_getTimeStringFromSeconds:(double)arg1;
- (id)_normalizedIndexPathForRow:(long long)arg1 inSection:(long long)arg2;
- (void)_updateFonts;
- (id)autoEditor;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)menuDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)popFromNavigationController;
- (id)previouslySelectedIndexPath;
- (void)setAutoEditor:(id)arg1;
- (void)setMenuDelegate:(id)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
