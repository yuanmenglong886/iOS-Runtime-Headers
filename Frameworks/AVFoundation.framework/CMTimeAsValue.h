/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeAsValue : NSValue  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _time;
}

+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (int)intValue;
- (id)description;
- (unsigned short)unsignedShortValue;
- (short)shortValue;
- (BOOL)charValue;
- (const char *)objCType;
- (long)longValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;
- (unsigned char)unsignedCharValue;
- (unsigned long)unsignedLongValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned int)unsignedIntegerValue;
- (int)integerValue;
- (long long)longLongValue;
- (unsigned int)unsignedIntValue;
- (double)doubleValue;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (BOOL)boolValue;

@end