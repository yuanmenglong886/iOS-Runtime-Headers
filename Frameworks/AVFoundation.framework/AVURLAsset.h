/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVURLAssetFailedURLRequestHandling>, AVURLAssetInternal, NSString, AVAssetCache, NSURL;

@interface AVURLAsset : AVAsset  {
    AVURLAssetInternal *_asset;
}

@property(setter=setFailedURLRequestDelegate:) <AVURLAssetFailedURLRequestHandling> * failedURLRequestDelegate;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly) NSString * cacheKey;
@property(readonly) NSURL * URL;

+ (BOOL)isPlayableExtendedMIMEType:(id)arg1;
+ (id)audiovisualTypes;
+ (id)_avfValidationPlist;
+ (id)audiovisualMIMETypes;
+ (void)_ensureAudiovisualTypes;
+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (void)initialize;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)finishHandlingFailedURLRequestWithResponseProperties:(id)arg1;
- (id)failedURLRequestDelegate;
- (void)setFailedURLRequestDelegate:(id)arg1;
- (id)downloadDestinationURL;
- (id)resolvedURL;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (id)assetCache;
- (unsigned int)_addChapterMetadataItem:(id)arg1 withDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 toChapters:(id)arg4 fromIndex:(unsigned int)arg5;
- (id)_chapterGroupInfo;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (void)_setAssetInspectorLoader:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)availableChapterLocales;
- (void)_tracksDidChange;
- (struct __CFURL { }*)_URL;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)tracks;
- (id)lyrics;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (void)cancelLoading;
- (id)cacheKey;
- (void)finalize;
- (id)URL;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end