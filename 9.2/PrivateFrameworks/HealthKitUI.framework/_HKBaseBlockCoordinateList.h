/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    struct { 
        int index; 
        int zoom; 
    }  _blockPath;
    NSArray * _coordinates;
}

- (void).cxx_destruct;
- (id)_coordinatesInChartableRange:(id)arg1;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 chartableDateRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(id /* block */)arg4;
- (int)_numCoordinatesInChartableRange:(id)arg1;
- (struct { int x1; int x2; })blockPathEnd;
- (struct { int x1; int x2; })blockPathStart;
- (id)coordinates;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithCoordinates:(id)arg1 blockPath:(struct { int x1; int x2; })arg2;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 roundToViewScale:(BOOL)arg2;
- (int)numCoordinates;

@end