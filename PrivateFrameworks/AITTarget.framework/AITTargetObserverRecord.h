/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AITTargetObserverRecord : NSObject  {
    struct dispatch_queue_s { } *_queue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    id _observer;
}

@property(readonly) id observer;
@property(readonly) struct dispatch_queue_s { }* queue;
@property(readonly) id handler;

+ (id)recordForObserver:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2 block:(id)arg3;

- (void)dealloc;
- (struct dispatch_queue_s { }*)queue;
- (id)observer;
- (id)handler;

@end