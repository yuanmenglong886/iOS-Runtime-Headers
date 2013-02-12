/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSURL;

@interface SSItemMedia : NSObject {
    int _duration;
    int _fullDuration;
    long long _mediaFileSize;
    NSString *_mediaKind;
    BOOL _protected;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(readonly) int durationInMilliseconds;
@property(readonly) int fullDurationInMilliseconds;
@property(readonly) long long mediaFileSize;
@property(copy) NSString * mediaKind;
@property(getter=isProtectedMedia,readonly) BOOL protectedMedia;

- (id)URL;
- (void)dealloc;
- (id)description;
- (int)durationInMilliseconds;
- (int)fullDurationInMilliseconds;
- (unsigned int)hash;
- (id)init;
- (id)initWithStoreOfferDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isProtectedMedia;
- (long long)mediaFileSize;
- (id)mediaKind;
- (void)setMediaKind:(id)arg1;

@end