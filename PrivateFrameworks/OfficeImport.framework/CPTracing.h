/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface CPTracing : NSObject  {
    NSString *mFilename;
}


- (void)dealloc;
- (void)writeOpstat:(long*)arg1 tracePoint:(long)arg2 filter:(int)arg3;
- (void)writeHeader;
- (id)initWithFilename:(id)arg1;
- (void)updateOpstat:(long*)arg1 isStarting:(bool)arg2;

@end