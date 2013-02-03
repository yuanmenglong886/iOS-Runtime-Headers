/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString;

@interface GMMWaypointFeedback : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    BOOL _hasStatus;
    NSInteger _status;
    NSString *_streetViewPanoId;
    NSMutableArray *_waypoints;
}

@property(retain) NSString *streetViewPanoId; /* unknown property attribute: V_streetViewPanoId */
@property(retain) NSMutableArray *waypoints; /* unknown property attribute: V_waypoints */
@property BOOL hasStatus; /* unknown property attribute: V_hasStatus */
@property NSInteger status; /* unknown property attribute: V_status */
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) NSInteger waypointsCount;

- (void)addWaypoint:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasStatus;
- (BOOL)hasStreetViewPanoId;
- (id)init;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setStatus:(NSInteger)arg1;
- (void)setStreetViewPanoId:(id)arg1;
- (void)setWaypoint:(id)arg1 atIndex:(NSInteger)arg2;
- (void)setWaypoints:(id)arg1;
- (NSInteger)status;
- (id)streetViewPanoId;
- (id)waypointAtIndex:(NSUInteger)arg1;
- (id)waypoints;
- (NSInteger)waypointsCount;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end