/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface _WBUDynamicMeCard : NSObject {
    NSMutableArray * _blocksPendingMeCard;
    CNContact * _me;
    BOOL  _meCardExists;
}

@property (nonatomic, readonly) BOOL meCardExists;

+ (id)_contactObjectComponentForString:(id)arg1;

- (void).cxx_destruct;
- (void)_addressBookChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)me;
- (BOOL)meCardExists;
- (void)performWhenReady:(id /* block */)arg1;
- (id)valueForProperty:(id)arg1 contact:(id)arg2;

@end
