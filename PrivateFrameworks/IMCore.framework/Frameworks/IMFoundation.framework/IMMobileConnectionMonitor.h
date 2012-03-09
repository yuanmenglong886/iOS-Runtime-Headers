/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMobileConnectionMonitor : IMConnectionMonitor  {
    BOOL _isHostReachable;
    Class _CPNetworkObserverClass;
}

@property BOOL _isHostReachable;
@property(retain) Class _CPNetworkObserverClass;


- (id)init;
- (void)dealloc;
- (void)set_CPNetworkObserverClass:(Class)arg1;
- (Class)_CPNetworkObserverClass;
- (void)set_isHostReachable:(BOOL)arg1;
- (BOOL)_isHostReachable;
- (void)_handleNetworkObserverDidChange:(id)arg1;
- (void)_setup;
- (BOOL)isImmediatelyReachable;

@end