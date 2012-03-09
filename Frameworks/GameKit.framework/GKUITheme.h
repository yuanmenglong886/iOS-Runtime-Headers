/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementProgressBrush, UIImage, UIFont, GKImageSource, NSCache, GKGameListIconBrush, GKAchievementIconBrush, GKImageAtlas, GKLeaderboardCategoryIconBrush, UIColor;

@interface GKUITheme : NSObject  {
    NSCache *_resourceCache;
    GKImageAtlas *_imageAtlas;
}

@property(readonly) GKImageSource * gameListIconSource;
@property(readonly) GKImageSource * gameListIconSourceWithShine;
@property(readonly) GKImageSource * gameDetailIconSource;
@property(readonly) GKImageSource * gameDetailHorizontallyFlippedIconSource;
@property(readonly) GKImageSource * achievementIconSource;
@property(readonly) GKImageSource * achievementIconSourcePad;
@property(readonly) GKImageSource * photoDetailSource;
@property(readonly) GKImageSource * photoDetailLandscapeSource;
@property(readonly) GKImageSource * photoListSource;
@property(readonly) GKImageSource * photoLeaderboardSource;
@property(readonly) GKImageSource * leaderboardCategoryIconSource;
@property(readonly) GKGameListIconBrush * gameListIconBrush;
@property(readonly) GKGameListIconBrush * gameListIconBrushWithShine;
@property(readonly) GKAchievementProgressBrush * achievementProgressBrush;
@property(readonly) GKAchievementProgressBrush * achievementProgressBrushPad;
@property(readonly) GKAchievementIconBrush * achievementIconBrush;
@property(readonly) GKAchievementIconBrush * achievementIconBrushPad;
@property(readonly) GKLeaderboardCategoryIconBrush * leaderboardCategoryIconBrush;
@property(readonly) UIColor * buttonTitleColor;
@property(readonly) UIColor * headerButtonTitleColor;
@property(readonly) UIColor * buttonTitleEmbossColor;
@property(readonly) UIColor * highlightedButtonTitleColor;
@property(readonly) UIColor * labelColor;
@property(readonly) UIColor * secondaryLabelColor;
@property(readonly) UIColor * lowContrastSecondaryLabelColor;
@property(readonly) UIColor * secondaryButtonTitleColor;
@property(readonly) UIColor * focusButtonTextColor;
@property(readonly) UIColor * infoTextColor;
@property(readonly) UIColor * darkerInfoTextColor;
@property(readonly) UIColor * highlightedInfoTextColor;
@property(readonly) UIColor * tableSectionHeaderColor;
@property(readonly) UIColor * typedTextColor;
@property(readonly) UIColor * placeholderTextColor;
@property(readonly) UIColor * headerPlaceholderTextColor;
@property(readonly) UIColor * shadowColor;
@property(readonly) UIColor * embossColor;
@property(readonly) UIColor * headerEmbossColor;
@property(readonly) UIColor * highlightedEmbossColor;
@property(readonly) UIColor * tableCellSeparatorColor;
@property(readonly) UIColor * activeSegmentedControlLabelColor;
@property(readonly) UIColor * inactiveSegmentedControlLabelColor;
@property(readonly) UIColor * playerHeaderColor;
@property(readonly) UIColor * playerHeaderShadowColor;
@property(readonly) UIColor * playerHeaderEmbossColor;
@property(readonly) UIColor * leaderboardRankColor;
@property(readonly) UIColor * leaderboardLabelColor;
@property(readonly) UIColor * leaderboardDetailColor;
@property(readonly) UIColor * leaderboardScoreColor;
@property(readonly) UIColor * uninviteNowButtonTitleColor;
@property(readonly) UIColor * uninviteNowButtonTitleHighlightColor;
@property(readonly) UIColor * ribbonSegmentedControlSelectedTextColor;
@property(readonly) UIColor * headerSegmentedControlSelectedTextColor;
@property(readonly) UIColor * welcomeBannerTextColor;
@property(readonly) UIColor * textFieldSelectionColor;
@property(readonly) UIColor * textFieldInsertionPointColor;
@property(readonly) UIFont * headlineFont;
@property(readonly) UIFont * titleFont;
@property(readonly) UIFont * boldTitleFont;
@property(readonly) UIFont * smallTitleFont;
@property(readonly) UIFont * boldSmallTitleFont;
@property(readonly) UIFont * boldSmallButtonTitleFont;
@property(readonly) UIFont * infoFont;
@property(readonly) UIFont * boldInfoFont;
@property(readonly) UIFont * typedTextFont;
@property(readonly) UIFont * inviteButtonFont;
@property(readonly) UIFont * ribbonSegmentedControlFont;
@property(readonly) UIFont * headerSegmentedControlFont;
@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * friendsLabelBackgroundImage;
@property(readonly) UIImage * gamesLabelBackgroundImage;
@property(readonly) UIImage * achievementsLabelBackgroundImage;
@property(readonly) UIImage * friendsLabelLargeBackgroundImage;
@property(readonly) UIImage * gamesLabelLargeBackgroundImage;
@property(readonly) UIImage * achievementsLabelLargeBackgroundImage;
@property(readonly) UIImage * ratingStarsBackgroundImage;
@property(readonly) UIImage * ratingStarsForegroundImage;
@property(readonly) UIImage * ratingStarsBackgroundOnHeaderImage;
@property(readonly) UIImage * ratingStarsForegroundOnHeaderImage;
@property(readonly) UIImage * ratingStarsLargeBackgroundOnHeaderImage;
@property(readonly) UIImage * ratingStarsLargeForegroundOnHeaderImage;
@property(readonly) UIImage * interactiveRatingStarsForeground;
@property(readonly) UIImage * interactiveRatingStarsBackground;
@property(readonly) UIImage * inviteButtonImage;
@property(readonly) UIImage * inviteButtonPressedImage;
@property(readonly) UIImage * uninviteNowButtonImage;
@property(readonly) UIImage * removeButtonImage;
@property(readonly) UIImage * removeButtonPressedImage;
@property(readonly) struct CGSize { float x1; float x2; } formSheetSize;
@property(readonly) float modalTableViewMargin;
@property(retain) NSCache * resourceCache;
@property(retain) GKImageAtlas * imageAtlas;

+ (id)themeForGame:(id)arg1;
+ (id)sharedTheme;

- (id)init;
- (void)dealloc;
- (id)matchmakerAppOutline;
- (id)welcomeScreenRightSquare;
- (id)welcomeScreenLeftSquare;
- (id)welcomeScreenBottomSquare;
- (id)welcomeScreenTopSquare;
- (id)welcomeScreenIcon;
- (id)gameDetailRotatedIconEffectsForUserInterfaceIdiom:(int)arg1;
- (id)gameDetailRotatedIconMaskForUserInterfaceIdiom:(int)arg1;
- (id)defaultPlayerPhoto;
- (id)leaderboardCategoryIconSource;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tokenInsetsForRow:(unsigned int)arg1;
- (id)compareSplitterForHeader:(BOOL)arg1;
- (id)compareHeaderPiece:(int)arg1;
- (id)smallTokenBackgroundForType:(int)arg1;
- (id)tokenBackgroundForType:(int)arg1;
- (id)emptyFriendRequestsImage;
- (id)emptyGamesListImage;
- (id)emptyFriendsListImage;
- (id)leaderboardCellBackgroundGreenFill;
- (id)leaderboardCellBackgroundRedFill;
- (id)leaderboardCellBackgroundBlackFill;
- (id)tabbarIconRequestsActive:(BOOL)arg1;
- (id)tabbarIconMeActive:(BOOL)arg1;
- (id)tabbarIconGamesActive:(BOOL)arg1;
- (id)tabbarIconFriendsActive:(BOOL)arg1;
- (id)tabbarCornerImage;
- (id)tabbarShadowImage;
- (id)tabbarLandscapeImage;
- (id)navbarFocusButtonForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)formSheetNavbarBackground;
- (id)achievementsTokenFriendPlayer;
- (id)achievementsTokenLocalPlayer;
- (id)achievementsCompareCheckMark;
- (id)achievementsCompareCellShortSeparator;
- (id)achievementsCompareCellSeparator;
- (id)navbarSplitCornerImage;
- (id)navbarCornerImage;
- (id)navbarShadowImage;
- (id)eventIconImage;
- (id)gameDetailSectionTitleBackgroundImage;
- (id)playerHeaderOutlineImage;
- (id)welcomeSubviewOutlineImage;
- (id)welcomeSubviewMask;
- (id)welcomeBannerTextImageForLocation:(int)arg1;
- (id)welcomeBannerImageForLocation:(int)arg1;
- (id)eventBackgroundImage;
- (id)headerWoodenFrameRightMask;
- (id)headerWoodenFrameLeftMask;
- (id)headerWoodenFrameCenterMask;
- (id)headerWoodenFrameNarrowMask;
- (id)headerWoodenFrameRight;
- (id)headerWoodenFrameLeft;
- (id)headerWoodenFrameCenter;
- (id)headerWoodenFrameNarrow;
- (id)headerWoodenBottomBar;
- (id)headerBackgroundWideWithGlow;
- (id)headerBackgroundNarrowWithGlow;
- (id)headerBackground;
- (id)listIconShineImage;
- (id)listIconShadowImage;
- (id)listIconMaskImage;
- (id)bluePuckForCompareHeader;
- (id)redPuckForCompareHeader;
- (id)smallAlternateButtonImageSelected:(BOOL)arg1;
- (id)segmentedControlRibbonLargeDivider;
- (id)segmentedControlRibbonLargeBackgroundSelected;
- (id)segmentedControlRibbonLargeWoodOverlay;
- (id)segmentedControlRibbonLargeWoodMask;
- (id)segmentedControlRibbonLargeWoodBackground;
- (id)segmentedControlRibbonLargeFeltMask;
- (id)segmentedControlRibbonLargeFeltBackground;
- (id)segmentedControlRibbonDivider;
- (id)segmentedControlRibbonBackgroundSelected;
- (id)segmentedControlRibbonBackground;
- (id)segmentedControlHeaderBackgroundSelected;
- (id)segmentedControlHeaderBackground;
- (id)uninviteNowButtonImage;
- (id)removeButtonPressedImage;
- (id)removeButtonImage;
- (id)inviteButtonPressedImage;
- (id)inviteButtonImage;
- (id)ratingStarsLargeForegroundOnHeaderImage;
- (id)ratingStarsLargeBackgroundOnHeaderImage;
- (id)ratingStarsForegroundOnHeaderImage;
- (id)ratingStarsBackgroundOnHeaderImage;
- (id)ratingStarsForegroundImage;
- (id)ratingStarsBackgroundImage;
- (id)achievementsLabelBackgroundImage;
- (id)gamesLabelBackgroundImage;
- (id)friendsLabelBackgroundImage;
- (id)achievementsLabelLargeBackgroundImage;
- (id)gamesLabelLargeBackgroundImage;
- (id)friendsLabelLargeBackgroundImage;
- (id)sectionHeaderDisclosureTriangle;
- (id)sectionHeaderOrnamentRight;
- (id)sectionHeaderOrnamentLeft;
- (id)tableCellBorderColor;
- (id)headerTextFieldBackgroundImageWithSectionLocation:(int)arg1;
- (id)textFieldBackgroundImageWithHeight:(float)arg1;
- (id)textFieldClearButtonImage;
- (id)darkBackgroundImageTiled;
- (id)headerSegmentedControlFont;
- (id)ribbonSegmentedControlFont;
- (id)inviteButtonFont;
- (id)boldSmallButtonTitleFont;
- (id)smallTitleFont;
- (id)headlineFont;
- (id)gameCompareDetailBoldFontOfSize:(float)arg1;
- (id)gameCompareDetailFontOfSize:(float)arg1;
- (id)gameCompareBoldFontOfSize:(float)arg1;
- (id)gameCompareFontOfSize:(float)arg1;
- (id)leaderboardDetailFontOfSize:(float)arg1;
- (id)leaderboardLabelFontOfSize:(float)arg1;
- (id)headerOnHeaderStatusFontOfSize:(float)arg1;
- (id)headerStatusFontOfSize:(float)arg1;
- (id)headerBodyFontOfSize:(float)arg1;
- (id)playerStatsFontOfSize:(float)arg1;
- (id)gameHeaderFontOfSize:(float)arg1;
- (id)playerHeaderFontOfSize:(float)arg1;
- (id)welcomeBannerFontOfSize:(float)arg1;
- (id)headerSegmentedControlSelectedTextColor;
- (id)ribbonSegmentedControlSelectedTextColor;
- (id)uninviteNowButtonTitleHighlightColor;
- (id)uninviteNowButtonTitleColor;
- (id)leaderboardDetailColor;
- (id)leaderboardLabelColor;
- (id)playerHeaderEmbossColor;
- (id)playerHeaderShadowColor;
- (id)playerHeaderColor;
- (id)tableCellSeparatorColor;
- (id)highlightedEmbossColor;
- (id)headerEmbossColor;
- (id)headerPlaceholderTextColor;
- (id)focusButtonTextColor;
- (id)highlightedInfoTextColor;
- (id)secondaryButtonTitleColor;
- (id)welcomeBannerTextColor;
- (id)lowContrastSecondaryLabelColor;
- (void)applyTheme;
- (void)applyStartupTheme;
- (id)leaderboardCategoryIconBrush;
- (id)achievementIconBrushPad;
- (id)achievementIconBrush;
- (id)gameListIconBrushWithShine;
- (id)gameListIconBrush;
- (id)verticalLineImage;
- (void)setImageAtlas:(id)arg1;
- (void)setResourceCache:(id)arg1;
- (id)imageAtlas;
- (id)resourceCache;
- (id)searchbarBezelImage;
- (id)toolbarBackgroundImage;
- (id)segmentedControlDividerForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)segmentedControlBackgroundForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)inactiveSegmentedControlLabelColor;
- (id)activeSegmentedControlLabelColor;
- (id)navbarBackButtonForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)navbarButtonForControlState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)navbarLandscapeImage;
- (id)navbarPortraitImage;
- (id)tabbarActiveTabImage;
- (id)tabbarPortraitImage;
- (id)placeholderTextColor;
- (id)atomBackgroundImageSelected:(BOOL)arg1;
- (id)addContactImageSelected:(BOOL)arg1;
- (id)horizontalSeparatorImage;
- (id)typedTextColor;
- (id)textFieldBackgroundImageWithSectionLocation:(int)arg1;
- (id)textFieldSelectionDragDotImage;
- (id)textFieldSelectionColor;
- (id)textFieldInsertionPointColor;
- (id)typedTextFont;
- (id)achievementsNotStartedIconiPad;
- (id)achievementIconSourcePad;
- (id)achievementProgressBrush;
- (id)achievementProgressBrushPad;
- (id)achievementIconSource;
- (id)infoFont;
- (id)secondaryLabelColor;
- (id)backgroundImageForOrientation:(int)arg1;
- (id)friendPickerSelectedCheckbox;
- (id)friendPickerUnselectedCheckbox;
- (id)boldInfoFont;
- (id)leaderboardScoreColor;
- (id)leaderboardScoreFontOfSize:(float)arg1;
- (id)leaderboardRankColor;
- (id)leaderboardRankFontOfSize:(float)arg1;
- (id)infoTextColor;
- (id)boldHeaderBodyFontOfSize:(float)arg1;
- (id)boldSmallTitleFont;
- (id)buttonTitleEmbossColor;
- (id)buttonTitleColor;
- (id)headerButtonTitleColor;
- (id)highlightedButtonTitleColor;
- (id)tableCellDisclosureIndicatorImage;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)formSheetFrameShadow;
- (id)formSheetFrameRight;
- (id)formSheetFrameLeft;
- (id)formSheetFrameBottom;
- (id)tableSectionHeaderColor;
- (id)headerLabelFontOfSize:(float)arg1;
- (id)tableCellBorderFill;
- (id)tableCellBorderShadowColor;
- (id)selectedBackgroundImageForOrientation:(int)arg1;
- (id)selectedDarkBackgroundImageTiled;
- (id)tableSectionCapCellBackgroundFill;
- (id)showMoreCellBackgroundFill;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tableCellBackgroundBorderInsetsForSectionLocation:(int)arg1;
- (id)smallButtonImageSelected:(BOOL)arg1;
- (id)buttonImageSelected:(BOOL)arg1;
- (id)boldHeaderLabelFontOfSize:(float)arg1;
- (id)interactiveRatingStarsBackground;
- (id)interactiveRatingStarsForeground;
- (id)headerBackgroundWithGlowForWidth:(float)arg1;
- (float)modalTableViewMargin;
- (id)matchmakerButtonFontOfSize:(float)arg1;
- (id)embossColor;
- (id)darkerInfoTextColor;
- (id)photoLeaderboardSource;
- (id)photoListSource;
- (id)photoDetailLandscapeSource;
- (id)photoDetailSource;
- (id)gameDetailHorizontallyFlippedIconSource;
- (id)gameDetailIconSource;
- (id)gameListIconSourceWithShine;
- (id)gameListIconSource;
- (void)clearResourceCache;
- (id)labelColor;
- (id)boldTitleFont;
- (struct CGSize { float x1; float x2; })formSheetSize;
- (id)titleFont;
- (id)backgroundImage;
- (id)imageNamed:(id)arg1;
- (id)shadowColor;

@end