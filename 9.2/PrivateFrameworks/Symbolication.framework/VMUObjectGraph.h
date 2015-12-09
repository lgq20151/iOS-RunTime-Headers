/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectGraph : VMUDirectedGraph {
    id * _classInfos;
    unsigned int  _classInfosCount;
    unsigned int  _internalizedCount;
    struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; } * _internalizedNodes;
    VMUClassInfoMap * _knownClassInfos;
    id /* block */  _nodeProvider;
    VMUObjectGraph * _referenceGraph;
    unsigned int  _referenceGraphEdgeNamespaceSize;
    unsigned int  _referenceGraphNodeNamespaceSize;
    struct _VMUObjectGraphEdge { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 5; unsigned int x_1_2_4 : 1; } x_1_1_1; struct { unsigned int x_2_2_1 : 31; unsigned int x_2_2_2 : 1; } x_1_1_2; } x1; } * _referenceTable;
    unsigned int  _referenceTableCapacity;
    struct _VMUObjectGraphEdgeLarge { unsigned int x1 : 56; unsigned int x2 : 8; unsigned int x3 : 56; unsigned int x4 : 8; } * _referenceTableLarge;
    unsigned int  _referenceTableLargeCapacity;
    unsigned int  _referenceTableLargeCount;
    int  _referencingCount;
}

@property (nonatomic, readonly) VMUClassInfoMap *indexedClassInfos;

+ (void)initialize;

- (void)_modifyDerivativeGraphCount:(int)arg1;
- (void)_renameWithNodeMap:(unsigned int*)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int*)arg3 edgeNamespace:(unsigned int)arg4;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(int)arg3 toNode:(unsigned int)arg4 destinationOffset:(unsigned long long)arg5;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)enumerateMarkedObjects:(void*)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsOfGroupNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)arg1;
- (id)indexedClassInfos;
- (id)initWithArchived:(id)arg1 options:(unsigned int)arg2;
- (id)initWithNodes:(unsigned int)arg1 nodeProvider:(id /* block */)arg2;
- (void)internalizeNodes;
- (struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; SEL x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; unsigned short x27; void*x28; short x29; void*x30; void*x31; void*x32; void*x33; unsigned long x34; int x35; unsigned int x36/* : ? */; const void*x37; const void*x38; void*x39; void*x40; const int x41; void x42; void*x43; void*x44; void*x45; void*x46; const void*x47; void*x48; void*x49; void*x50; out const void*x51; short x52; void*x53; void*x54; void*x55; short x56; int x57; BOOL x58; unsigned long x59; int x60; unsigned int x61/* : ? */; const void*x62; const void*x63; void*x64; float x65; const void*x66; void*x67; void*x68; void*x69; out const void*x70; void*x71; void*x72; void*x73; short x74; int x75; BOOL x76; unsigned long x77; int x78; unsigned int x79/* : ? */; const void*x80; const void*x81; void*x82; void*x83; void*x84; void*x85; long x86; void*x87; char *x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; SEL x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; SEL x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; unsigned short x157; void*x158; short x159; void*x160; void*x161; void*x162; void*x163; unsigned long x164; int x165; unsigned int x166/* : ? */; const void*x167; const void*x168; void*x169; void*x170; const int x171; void x172; void*x173; void*x174; void*x175; void*x176; const void*x177; void*x178; void*x179; void*x180; out const void*x181; short x182; void*x183; inout void*x184; void*x185; void*x186; out const void*x187; void*x188; float x189; const void*x190; void*x191; void*x192; void*x193; out const void*x194; void*x195; inout void*x196; void*x197; void*x198; out const void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; bycopy void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; SEL x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; unsigned short x252; void*x253; short x254; void*x255; void*x256; void*x257; void*x258; unsigned long x259; int x260; unsigned int x261/* : ? */; const void*x262; const void*x263; void*x264; void*x265; const int x266; void x267; void*x268; void*x269; void*x270; void*x271; const void*x272; void*x273; void*x274; void*x275; out const void*x276; short x277; void*x278; void*x279; void*x280; short x281; short x282; void*x283; void*x284; void*x285; void*x286; float x287; const void*x288; void*x289; void*x290; void*x291; out const void*x292; void*x293; void*x294; void*x295; short x296; short x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; long x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; SEL x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; SEL x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; in void*x542; void*x543; void*x544; void*x545; in void*x546; void*x547; void*x548; double x549; void*x550; void*x551; void*x552; short x553; void*x554; void*x555; void*x556; out void*x557; const void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; SEL x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; SEL x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; long x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; SEL x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; long x699; void*x700; void*x701; void*x702; in void*x703; void*x704; void*x705; double x706; void*x707; void*x708; void*x709; int x710; void*x711; in void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; SEL x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; long x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; SEL x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; int x830; BOOL x831; const out unsigned int x832/* : ? */; long x833; out void*x834; void*x835; int x836; BOOL x837; const out unsigned int x838/* : ? */; long x839; out void*x840; unsigned short x841; void*x842; void*x843; const BOOL x844; void*x845; void*x846; void*x847; short x848; void*x849; long x850; void*x851; inout void*x852; void*x853; short x854; void*x855; void*x856; void*x857; void*x858; void*x859; void*x860; void*x861; SEL x862; void*x863; struct x864; void*x865; unsigned short x866; void*x867; void*x868; void*x869; void*x870; void*x871; unsigned int x872/* : ? */; long x873; void*x874; void*x875; void*x876; void x877; out const int x878; void*x879; void*x880; void*x881; out void*x882; void*x883; void*x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; unsigned short x905; void*x906; void*x907; void*x908; void*x909; void*x910; unsigned short x911; void*x912; short x913; void*x914; void*x915; void*x916; void*x917; unsigned long x918; int x919; unsigned int x920/* : ? */; const void*x921; const void*x922; void*x923; void*x924; const int x925; void x926; void*x927; void*x928; void*x929; void*x930; const void*x931; void*x932; void*x933; void*x934; out const void*x935; short x936; void*x937; void*x938; void*x939; void*x940; short x941; unsigned short x942; void*x943; void*x944; void*x945; out const void*x946; void*x947; float x948; const void*x949; void*x950; void*x951; void*x952; out const void*x953; void*x954; void*x955; void*x956; void*x957; short x958; unsigned short x959; void*x960; void*x961; void*x962; out const void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; void*x976; void*x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; void*x984; void*x985; void*x986; void*x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; SEL x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; bool x1008; void*x1009; inout out void*x1010; int x1011; float x1012; int x1013; BOOL x1014; void*x1015; void*x1016; int x1017; out in unsigned long long x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; void*x1024; void*x1025; void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; unsigned long x1036; void*x1037; long doublex1038; unsigned char x1039; void*x1040; void*x1041; void*x1042; const void*x1043; void*x1044; void*x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; void*x1052; void*x1053; void*x1054; void*x1055; void*x1056; void*x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; void*x1064; void*x1065; void*x1066; bycopy void*x1067; out void*x1068; double x1069; void*x1070; void*x1071; void*x1072; BOOL x1073; void*x1074; void*x1075; void*x1076; void*x1077; void*x1078; void*x1079; void*x1080; void*x1081; void*x1082; void*x1083; void*x1084; void*x1085; void*x1086; void*x1087; void*x1088; void*x1089; void*x1090; void*x1091; void*x1092; void*x1093; void*x1094; void*x1095; void*x1096; void*x1097; void*x1098; const out long doublex1099; void*x1100; void*x1101; void*x1102; unsigned int x1103; in void*x1104; void*x1105; const in void*x1106; long x1107; void*x1108; void*x1109; void*x1110; void*x1111; void*x1112; void*x1113; void*x1114; void*x1115; void*x1116; in void*x1117; void*x1118; void*x1119; void*x1120; void*x1121; bool x1122; void*x1123; void*x1124; void*x1125; short x1126; void*x1127; out in short x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; unsigned long long x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; void*x1153; int x1154; long x1155; void*x1156; short x1157; void*x1158; const int x1159; void*x1160; void*x1161; int x1162; long x1163; void*x1164; oneway int x1165; void*x1166; void*x1167; unsigned char x1168; out in void*x1169; const out long x1170; long x1171; void*x1172; const void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void* x1187[ /* ? */ ]; void*x1188; inout unsigned short x1189; unsigned short x1190; void*x1191; void*x1192; const void*x1193; double x1194; void*x1195; void*x1196; void*x1197; unsigned short x1198; void*x1199; void*x1200; unsigned short x1201; void*x1202; void*x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; void*x1211; void*x1212; void*x1213; void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; void*x1219; void*x1220; unsigned int x1221; void*x1222; int x1223; float x1224; void*x1225; void*x1226; void*x1227; unsigned int x1228/* : ? */; long x1229; void*x1230; oneway int x1231; void*x1232; void*x1233; unsigned short x1234; void*x1235; BOOL x1236; void*x1237; int x1238; out in void*x1239; void*x1240; void*x1241; void*x1242; void*x1243; void*x1244; void*x1245; void*x1246; void*x1247; void*x1248; void*x1249; void*x1250; void*x1251; void*x1252; void*x1253; void*x1254; void*x1255; void*x1256; void*x1257; void*x1258; void*x1259; void*x1260; void*x1261; void*x1262; void*x1263; unsigned char x1264; void*x1265; void*x1266; const void*x1267; bool x1268; out void*x1269; in double x1270; short x1271; void*x1272; void*x1273; long x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; void*x1281; void*x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; void*x1288; void*x1289; void*x1290; void*x1291; unsigned short x1292; void*x1293; void*x1294; void*x1295; const short x1296; int x1297; short x1298; void*x1299; void*x1300; in void*x1301; unsigned char x1302; void*x1303; BOOL x1304; void*x1305; void*x1306; void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; })nodeDetails:(unsigned int)arg1;
- (struct { unsigned long long x1; int x2; unsigned long long x3; })referenceInfoWithName:(unsigned int)arg1;
- (void)withRootNodeMarkingMap:(id /* block */)arg1;

@end