/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}


- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)unlock;
- (void)lock;
- (BOOL)_lockBlocking:(BOOL)arg1;
- (BOOL)tryLock;

@end