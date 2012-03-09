/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVPlayerInternal, NSArray;

@interface AVPlayer : NSObject  {
    AVPlayerInternal *_player;
}

@property(getter=isAudioPlaybackEnabledAtAllRates,readonly) BOOL audioPlaybackEnabledAtAllRates;
@property float minRateForAudioPlayback;
@property float maxRateForAudioPlayback;
@property(setter=_setDisplaysUsedForPlayback:,copy) NSArray * _displaysUsedForPlayback;
@property(readonly) int _externalProtectionStatus;
@property(readonly) int status;
@property(readonly) NSError * error;

+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfVolume;
+ (id)keyPathsForValuesAffectingRate;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (void)initialize;

- (void)willChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (id)_clientName;
- (BOOL)_shouldDetachContentLayersFromFigPlayer;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (BOOL)_CALayerDestinationIsTVOut;
- (float)maxRateForAudioPlayback;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (float)minRateForAudioPlayback;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (BOOL)isAudioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;
- (int)_externalProtectionStatus;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (id)_displaysUsedForPlayback;
- (id)_playbackDisplaysForFigPlayer;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (BOOL)_shouldLogPerformanceData;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_detachLayerFromFigPlayer;
- (id)_playerLayers;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(struct dispatch_queue_s { }*)arg2 usingBlock:(id)arg3;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)isAirPlayVideoActive;
- (BOOL)allowsAirPlayVideo;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (BOOL)isClosedCaptionDisplayEnabled;
- (int)actionAtItemEnd;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (void)_removeAllItems;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setWaitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback:(BOOL)arg1;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_currentItemStatusIsReadyToPlay;
- (int)_playerType;
- (id)initWithDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (id)_fpNotificationNames;
- (BOOL)_removeItem:(id)arg1;
- (BOOL)_usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)_allowsAirPlayVideo;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (void)_setActionAtItemEnd:(int)arg1 allowingAdvance:(BOOL)arg2;
- (int)_actionAtItemEnd;
- (int)_defaultActionAtItemEnd;
- (id)playerAVAudioSession;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_attachLayerToFigPlayer;
- (id)_propertyStorage;
- (BOOL)_airPlayVideoActive;
- (void)_addFPListeners;
- (void)_preparePlaybackItemOfItemForEnqueueing:(id)arg1 withCompletionHandler:(id)arg2;
- (BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (BOOL)_attachItem:(id)arg1 andPerformOperation:(int)arg2 withObject:(id)arg3;
- (BOOL)_removeAnItem:(id)arg1;
- (BOOL)waitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback;
- (void)_setCurrentItem:(id)arg1;
- (struct OpaqueFigPlayer { }*)_figPlayer;
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)_currentItem;
- (id)_items;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_setLayer:(id)arg1;
- (void)_removeFPListeners;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (BOOL)_iapdExtendedModeIsActive;
- (void)_didFinishSuspension:(id)arg1;
- (void)setAllowsAirPlayVideo:(BOOL)arg1;
- (void)setActionAtItemEnd:(int)arg1;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2;
- (id)initWithPlayerItem:(id)arg1;
- (id)_weakReference;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (float)rate;
- (void)setRate:(float)arg1;
- (struct dispatch_queue_s { }*)_stateDispatchQueue;
- (id)_cachedValueForKey:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_addLayer:(id)arg1;
- (int)status;
- (id)error;
- (void)pause;
- (id)initWithURL:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)currentItem;
- (void)finalize;
- (float)_volume;
- (void)_setVolume:(float)arg1;
- (float)_rate;
- (void)play;
- (void)_enumerateItemsUsingBlock:(id)arg1;

@end