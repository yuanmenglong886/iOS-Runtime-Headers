/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRTCReportingAssetLoadEvent : MPRTCReportingEvent {
    double  _duration;
    NSError * _error;
}

@property (nonatomic) double duration;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (double)duration;
- (id)error;
- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingCategory;
- (unsigned short)rtcReportingType;
- (void)setDuration:(double)arg1;
- (void)setError:(id)arg1;

@end
