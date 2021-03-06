/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKFootprint : NSObject {
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    }  _boundingRect;
    double  _centerDepth;
    struct VKFootprintConvexHull_struct { 
        int edgeCount; 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } edgeOrigin[6]; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } edgeNormal[6]; 
    }  _convexHull;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    }  _cornerGroundPoints;
    int  _cornerGroundPointsCount;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    }  _furthestGroundPoint;
    double  _maxDepth;
    double  _maxDistance;
    double  _minDepth;
    double  _minDistance;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    }  _nearestGroundPoint;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } boundingRect;
@property (nonatomic, readonly) double centerDepth;
@property (nonatomic, readonly) struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; /* Warning: unhandled struct encoding: '{Matrix<double' */ struct x3[6]; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; SEL x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; SEL x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; SEL x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; long doublex118; bycopy void*x119; void*x120; long x121; void*x122; void*x123; void*x124; in void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; long long x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; char *x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; SEL x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; long long x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; out void*x210; void*x211; void*x212; unsigned long x213; int x214; in void*x215; unsigned short x216; void*x217; long x218; int x219; void*x220; void*x221; in out void*x222; void*x223; void*x224; int x225; out in void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; } convexHull; /* unknown property attribute:  1>=[3d]}]} */
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; }*cornerGroundPoints;
@property (nonatomic, readonly) int cornerGroundPointsCount;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } furthestGroundPoint;
@property (nonatomic, readonly) double maxDepth;
@property (nonatomic, readonly) double minDepth;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } nearestGroundPoint;

- (id).cxx_construct;
- (struct { double x1; double x2; double x3; double x4; })_expandedBoundingRect;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (struct { double x1; double x2; double x3; double x4; })boundingRect;
- (double)centerDepth;
- (void)computeFromCamera:(id)arg1;
- (BOOL)containsGroundPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg1;
- (struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; struct Matrix<double, 3, 1> { double x_3_1_1[3]; } x3[6]; })convexHull;
- (struct VKPoint { double x1; double x2; double x3; }*)cornerGroundPoints;
- (int)cornerGroundPointsCount;
- (struct VKPoint { double x1; double x2; double x3; })furthestGroundPoint;
- (double)maxDepth;
- (double)minDepth;
- (struct VKPoint { double x1; double x2; double x3; })nearestGroundPoint;
- (BOOL)rejectsRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;

@end
