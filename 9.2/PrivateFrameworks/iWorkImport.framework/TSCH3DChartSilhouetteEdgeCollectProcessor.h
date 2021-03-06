/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor {
    struct EdgeDetectionParameters { 
        BOOL detectSilhouetteEdges; 
        BOOL detectSharpEdges; 
        float sharpEdgeThreshold; 
    }  mEdgeDetectionParameters;
    TSCH3Dvec3DataBuffer * mEdges;
    TSCH3DResource * mVertices;
}

@property (nonatomic, readonly) TSCH3Dvec3DataBuffer *edges;
@property (nonatomic, retain) TSCH3DResource *vertices;

- (id).cxx_construct;
- (int)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg3;
- (void)dealloc;
- (id)edges;
- (id)initWithEdgeDetectionParameters:(const struct EdgeDetectionParameters { BOOL x1; BOOL x2; float x3; }*)arg1;
- (id)matrix;
- (void)setVertices:(id)arg1;
- (void)submit:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; SEL x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; unsigned short x48; void*x49; short x50; void*x51; void*x52; void*x53; void*x54; unsigned long x55; int x56; unsigned int x57/* : ? */; const void*x58; const void*x59; void*x60; void*x61; const void*x62; void*x63; void*x64; void*x65; out const void*x66; short x67; void*x68; unsigned char x69; out const void*x70; unsigned int x71; void*x72; void*x73; void*x74; void*x75; void*x76; float x77; const void*x78; void*x79; void*x80; void*x81; out const void*x82; void*x83; unsigned char x84; out const void*x85; unsigned int x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; SEL x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; long long x155; void*x156; void*x157; void*x158; void*x159; void*x160; long long x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; SEL x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; SEL x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; id x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; const void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; int x268; void*x269; void*x270; void*x271; void*x272; struct x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; unsigned int x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; long x332; void*x333; bool x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; SEL x364; void*x365; void*x366; void*x367; void*x368; void*x369; unsigned char x370; void*x371; long doublex372; void*x373; const void*x374; in double x375; long x376; int x377; in void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; }*)arg1;
- (id)vertices;

@end
