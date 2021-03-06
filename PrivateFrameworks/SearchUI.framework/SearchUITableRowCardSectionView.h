/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableRowCardSectionView : SearchUICardSectionView {
    int  _firstTrailingIndex;
    BOOL  _isCompactRow;
    NSArray * _itemViews;
    NSArray * _itemWidths;
    UIView * _rowContainerView;
}

@property int firstTrailingIndex;
@property BOOL isCompactRow;
@property (retain) NSArray *itemViews;
@property (retain) NSArray *itemWidths;
@property (retain) UIView *rowContainerView;

+ (Class)classForSection:(id)arg1;
+ (id)labelForView:(id)arg1;
+ (float)leadingSectionSpacingBetweenView1:(id)arg1 view2:(id)arg2;
+ (float)trailingSectionSpacingBetweenView1:(id)arg1 view2:(id)arg2 totalViewsInSection:(int)arg3;

- (void).cxx_destruct;
- (BOOL)_isBaseballScoreboardLike;
- (id)addImageViewWithImage:(id)arg1;
- (id)addLabelWithFormattedText:(id)arg1;
- (void)containerDidLayoutSubviews;
- (int)firstTrailingIndex;
- (float)fontSize;
- (BOOL)isCompactRow;
- (id)itemViews;
- (id)itemWidths;
- (float)labelBottomBaselineSpacing;
- (float)labelTopBaselineSpacing;
- (BOOL)labelsAreVibrant;
- (void)makeAndSizeViewsWithFirstTrailingIndex:(int)arg1 isCompactRow:(BOOL)arg2;
- (id)rowContainerView;
- (void)setAlignment:(unsigned int)arg1 forView:(id)arg2;
- (void)setFirstTrailingIndex:(int)arg1;
- (void)setIsCompactRow:(BOOL)arg1;
- (void)setItemViews:(id)arg1;
- (void)setItemWidths:(id)arg1;
- (void)setRowContainerView:(id)arg1;
- (void)setupWithLayoutInfo:(id)arg1;
- (BOOL)shouldAllowOtherViewsToOverlap:(id)arg1;
- (id)viewForColumn:(unsigned int)arg1;

@end
