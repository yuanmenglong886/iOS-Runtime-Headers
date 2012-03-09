/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, SSAccount, NSString;

@interface SUScriptAccount : SUScriptObject  {
    SSAccount *_account;
}

@property(retain) SSAccount * account;
@property(copy) NSString * credits;
@property(retain) NSNumber * dsID;
@property(copy) NSString * identifier;
@property(copy) NSString * kind;
@property(getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount;
@property(retain) id lockerEnabled;
@property(retain) id purchaseHistoryEnabled;
@property(retain) id socialEnabled;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)setAccount:(id)arg1;
- (id)account;
- (id)init;
- (void)dealloc;
- (id)kind;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)attributeKeys;
- (id)socialEnabled;
- (void)setSocialEnabled:(id)arg1;
- (void)setPurchaseHistoryEnabled:(id)arg1;
- (void)setLockerEnabled:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setDsID:(id)arg1;
- (void)setCredits:(id)arg1;
- (id)purchaseHistoryEnabled;
- (id)lockerEnabled;
- (id)isPrimaryLockerAccount;
- (id)credits;
- (BOOL)isSecureTokenValid;
- (BOOL)isPrimaryAccount;
- (void)_setServiceType:(int)arg1 enabled:(id)arg2;
- (void)_commitChanges;
- (void)setSecureToken:(id)arg1;
- (id)dsID;
- (id)_className;
- (id)scriptAttributeKeys;

@end