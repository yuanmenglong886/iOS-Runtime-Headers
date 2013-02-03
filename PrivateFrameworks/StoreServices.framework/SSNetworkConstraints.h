/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary;

@interface SSNetworkConstraints : NSObject <SSCoding, SSXPCCoding, NSCopying> {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSMutableDictionary *_sizeLimits;
}

@property(getter=isAnyNetworkTypeEnabled,readonly) BOOL anyNetworkTypeEnabled;

+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(int)arg2 legacyDictionary:(id)arg3;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;

- (id)_copySizeLimits;
- (void)_disableAllNetworkTypes;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (long long)_sizeLimitForNetworkType:(int)arg1;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)disableCellularNetworkTypes;
- (id)init;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (BOOL)isAnyNetworkTypeEnabled;
- (BOOL)isEqual:(id)arg1;
- (void)setAllNetworkTypesDisabled;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (long long)sizeLimitForNetworkType:(int)arg1;

@end