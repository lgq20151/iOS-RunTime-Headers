/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchCompleter : NSObject {
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _boundingRegion;
    GEOSearchCategory * _categoryFilter;
    id  _context;
    <MKSearchCompleterDelegate> * _delegate;
    CLLocation * _deviceLocation;
    int  _entriesType;
    NSString * _fragment;
    NSString * _identifier;
    int  _listType;
    unsigned int  _mapType;
    double  _timeSinceLastInBoundingRegion;
}

@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRegion;
@property (nonatomic, retain) GEOSearchCategory *categoryFilter;
@property (nonatomic) id context;
@property (nonatomic) <MKSearchCompleterDelegate> *delegate;
@property (nonatomic, retain) CLLocation *deviceLocation;
@property (nonatomic) int entriesType;
@property (nonatomic, copy) NSString *fragment;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int listType;
@property (nonatomic) unsigned int mapType;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic) double timeSinceLastInBoundingRegion;

+ (id)alloc;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRegion;
- (void)cancel;
- (id)categoryFilter;
- (id)context;
- (id)delegate;
- (id)deviceLocation;
- (int)entriesType;
- (id)fragment;
- (id)identifier;
- (id)init;
- (BOOL)isSearching;
- (int)listType;
- (unsigned int)mapType;
- (id)results;
- (BOOL)resultsAreCurrent;
- (void)retry;
- (void)setBoundingRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCategoryFilter:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setEntriesType:(int)arg1;
- (void)setFragment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setListType:(int)arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setTimeSinceLastInBoundingRegion:(double)arg1;
- (double)timeSinceLastInBoundingRegion;

@end
