/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSuggestionWidget : NSObject <PXPhotoLibraryUIChangeObserver, PXWidget> {
    NSArray * _activeConstraints;
    UIView * _bottomSeparator;
    NSArray * _cachedSuggestions;
    UIView * _containerView;
    id  _context;
    UIButton * _favoriteButton;
    NSLayoutConstraint * _favoriteButtonBottomBaselineConstraint;
    NSLayoutConstraint * _favoriteButtonTopBaselineConstraint;
    UITapGestureRecognizer * _favoriteTapRecognizer;
    NSObject<OS_dispatch_queue> * _fetchSuggestionQueue;
    bool  _fetchingSuggestion;
    UIView * _middleSeparator;
    PHManualFetchResult * _peopleFetchResult;
    UIButton * _suggestionButton;
    NSLayoutConstraint * _suggestionButtonBottomBaselineConstraint;
    NSLayoutConstraint * _suggestionButtonTopBaselineConstraint;
    UITapGestureRecognizer * _suggestionTapRecognizer;
    UIView * _topSeparator;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, retain) UIView *bottomSeparator;
@property (nonatomic, retain) NSArray *cachedSuggestions;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, retain) UIButton *favoriteButton;
@property (nonatomic, retain) NSLayoutConstraint *favoriteButtonBottomBaselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *favoriteButtonTopBaselineConstraint;
@property (nonatomic, retain) UITapGestureRecognizer *favoriteTapRecognizer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchSuggestionQueue;
@property bool fetchingSuggestion;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) UIView *middleSeparator;
@property (nonatomic, retain) PHManualFetchResult *peopleFetchResult;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (nonatomic, retain) UIButton *suggestionButton;
@property (nonatomic, retain) NSLayoutConstraint *suggestionButtonBottomBaselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *suggestionButtonTopBaselineConstraint;
@property (nonatomic, retain) UITapGestureRecognizer *suggestionTapRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, retain) UIView *topSeparator;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (long long)_currentSizeClass;
- (double)_dynamicBaselineForTextStyle:(id)arg1 originalValue:(double)arg2;
- (double)_dynamicTextBottomBaseline;
- (double)_dynamicTextTopBaseline;
- (id)_firstPerson;
- (void)_handleFavoriteTap:(id)arg1;
- (void)_handleSuggestionTap:(id)arg1;
- (id)_newButtonWithTitle:(id)arg1 tintColor:(id)arg2;
- (void)_setupViews;
- (void)_startListeningForChanges;
- (void)_stopListeningForChanges;
- (void)_updateConstraintsForSizeClass:(long long)arg1;
- (void)_updateFavoriteTitle;
- (void)_updateSuggestionState;
- (void)_updateSuggestionStateIfNeeded;
- (id)activeConstraints;
- (id)bottomSeparator;
- (id)cachedSuggestions;
- (id)containerView;
- (void)contentSizeCategoryChanged:(id)arg1;
- (id)contentView;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)favoriteButton;
- (id)favoriteButtonBottomBaselineConstraint;
- (id)favoriteButtonTopBaselineConstraint;
- (id)favoriteTapRecognizer;
- (id)fetchSuggestionQueue;
- (bool)fetchingSuggestion;
- (bool)hasContentForCurrentInput;
- (id)init;
- (void)loadContentData;
- (id)middleSeparator;
- (id)peopleFetchResult;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)prepareContentForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setActiveConstraints:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setCachedSuggestions:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFavoriteButton:(id)arg1;
- (void)setFavoriteButtonBottomBaselineConstraint:(id)arg1;
- (void)setFavoriteButtonTopBaselineConstraint:(id)arg1;
- (void)setFavoriteTapRecognizer:(id)arg1;
- (void)setFetchSuggestionQueue:(id)arg1;
- (void)setFetchingSuggestion:(bool)arg1;
- (void)setMiddleSeparator:(id)arg1;
- (void)setPeopleFetchResult:(id)arg1;
- (void)setSuggestionButton:(id)arg1;
- (void)setSuggestionButtonBottomBaselineConstraint:(id)arg1;
- (void)setSuggestionButtonTopBaselineConstraint:(id)arg1;
- (void)setSuggestionTapRecognizer:(id)arg1;
- (void)setTopSeparator:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)suggestionButton;
- (id)suggestionButtonBottomBaselineConstraint;
- (id)suggestionButtonTopBaselineConstraint;
- (id)suggestionTapRecognizer;
- (id)topSeparator;
- (void)unloadContentData;
- (id)widgetDelegate;

@end
