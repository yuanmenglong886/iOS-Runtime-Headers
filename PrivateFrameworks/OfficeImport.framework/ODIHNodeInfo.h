/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIHNodeInfo : NSObject  {
    int mTreeDepth;
    int mRow;
    struct ODIHRange { 
        float mMid; 
        float mLength; 
    } mXRange;
    BOOL mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mXRanges;
}


- (id)init;
- (void)dealloc;
- (int)row;
- (void)setTreeDepth:(int)arg1;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)xRanges;
- (int)treeDepth;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg1;
- (void)setConnectToVerticalSide:(BOOL)arg1;
- (void)addToXOffsetRelativeToParent:(float)arg1;
- (void)setXRange:(struct ODIHRange { float x1; float x2; })arg1;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (struct ODIHRange { float x1; float x2; })xRange;
- (int)extraRowsBetweenParentAndSelf;
- (void)setRow:(int)arg1;
- (float)xOffsetRelativeToParent;
- (BOOL)connectToVerticalSide;

@end