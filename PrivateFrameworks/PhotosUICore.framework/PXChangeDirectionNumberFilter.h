/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXChangeDirectionNumberFilter : PXNumberFilter {
    double  _minimumChange;
    double  _threshold;
}

@property (nonatomic) double minimumChange;

- (id)initWithInput:(float)arg1;
- (float)initialOutputForInput:(float)arg1;
- (float)minimumChange;
- (void)setMinimumChange:(float)arg1;
- (float)updatedOutput;

@end