
//{{BLOCK(logo)

//======================================================================
//
//	logo, 128x32@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles lz77 compressed
//	Total size: 32 + 480 = 512
//
//	Time-stamp: 2013-07-29, 08:11:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LOGO_H
#define GRIT_LOGO_H

#define logoTilesLen 480
extern const unsigned short logoTiles[240];

#define logoPalLen 32
extern const unsigned short logoPal[16];

#endif // GRIT_LOGO_H

const unsigned short logoTiles[240] __attribute__((aligned(4)))=
{
	0x0010,0x0008,0xDD20,0xF0DD,0xDD01,0xFDDD,0xDDFF,0xDD3D,
	0x00DF,0x1016,0xC003,0x5002,0xFF16,0x1F00,0xDF3B,0xF0FD,
	0x4039,0x0031,0xFF40,0x1D00,0x40F0,0x608E,0xDF46,0xFDFD,
	0x40F0,0x01F0,0x01F0,0x5DDD,0x30FD,0xDF7A,0x0310,0x1DF0,
	0x8750,0x10FD,0xCF5C,0x5FF0,0x0A50,0xFFFF,0x2310,0x18F0,
	0xC240,0x0101,0x10FF,0xF0E1,0x9020,0xF040,0xE07E,0xF0A4,
	0xF019,0xF001,0xE601,0x01F0,0x01F0,0x0C30,0x0000,0x01F0,
	0x0590,0x7F11,0xF011,0x9001,0x3105,0x214D,0x00B6,0x11AC,

	0xD1D4,0xFFEF,0xC511,0x0380,0x2CF1,0x2160,0xF401,0x3FE0,
	0xE311,0x8B01,0x10FF,0x3003,0x2223,0x0258,0xF05E,0xF001,
	0x3001,0x217E,0xFFE7,0xEF11,0xF701,0x3302,0x5C32,0xE781,
	0x6702,0x4B32,0xD101,0xE0FF,0x1158,0x50E3,0x2103,0x20B2,
	0x7031,0x22E6,0x0023,0xFF57,0x16C0,0xF0F2,0xDEF0,0x06B2,
	0x4521,0xD7F0,0x01F0,0x01F0,0xF0F9,0xF001,0xF001,0xF001,
	0xF001,0xDD01,0x11DD,0x00F1,0x2222,0x2222,0x3333,0x3333,
	0x5500,0x5555,0x8855,0x8888,0x0088,0x9999,0x9999,0xAAAB,

	0xBBBB,0xCC0F,0xCCCC,0xF0CC,0xF032,0xF001,0xD001,0x3E01,
	0xEEED,0x0300,0x0710,0x0350,0x0F80,0x2D30,0x0FDE,0xEEED,
	0xDEDE,0x2200,0x0310,0x2AA0,0x4C50,0x209B,0xDE41,0x00ED,
	0x7026,0xEE39,0x2D20,0x1E30,0xDE6F,0x2140,0x6B00,0x10ED,
	0x006B,0x004C,0x0074,0xFD77,0x8270,0x5F00,0x6310,0x4010,
	0x0320,0x0B20,0x10DE,0xFB7C,0xA110,0x0800,0x1930,0x0F20,
	0x1720,0xA0ED,0x305F,0xFFA7,0xB550,0x3700,0x5C70,0x01F0,
	0x01F0,0x01F0,0x01F0,0x01F0,0xF0FE,0xF001,0xF001,0xF001,

	0xF001,0x3001,0x110C,0xBAE3,0xAB10,0xBBBA,0xF311,0x7867,
	0x8788,0x5408,0x5555,0x1254,0x220B,0x1222,0x227F,0xFF33,
	0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,0xF0FF,0xF001,
	0xF001,0xF001,0xF001,0xF001,0xF001,0xF001,0xFF01,0x01F0,
	0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,0xF0FE,
	0xF001,0xF001,0xF001,0xB301,0xF0FF,0x7001,0x0007,0x0053,
};

const unsigned short logoPal[16] __attribute__((aligned(4)))=
{
	0x7C1F,0x0000,0x0401,0x0C01,0x1402,0x1002,0x1403,0x1802,
	0x1803,0x1C04,0x2405,0x2404,0x2806,0x3006,0x5F18,0x7FFF,
};

const unsigned short logoblueTiles[230] __attribute__((aligned(4)))=
{
	0x0010,0x0008,0xDD3D,0xF0DD,0xF001,0xF001,0x3001,0xFD0B,
	0x12F0,0xF0FF,0xF001,0xF001,0xF001,0xF001,0xF001,0xF001,
	0xF001,0xFF01,0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,0x01F0,
	0x01F0,0x01F0,0xF0F9,0xF001,0xF001,0xF001,0x4001,0x000B,
	0xF000,0x9D01,0x0590,0x1111,0x01F0,0x0590,0xC301,0x31FF,
	0xEBC7,0x0320,0x0B90,0x0F20,0x11FF,0xDFE3,0x0330,0x0B90,
	0x60D4,0x400F,0xDF93,0x0130,0x90FD,0xFD03,0x5FDF,0x60DF,
	0xFFB1,0x0A10,0x2E02,0x5000,0x2F30,0x0B10,0x20DF,0x001E,

	0xFD19,0x4802,0x2A10,0x0390,0x1310,0x2140,0x40BE,0xFD2F,
	0x0390,0x1F40,0x8072,0xC610,0x8610,0xF7FD,0x6900,0x8A50,
	0x80A0,0xC900,0x10DF,0x40CD,0x003C,0xFF0B,0x8C40,0xC422,
	0x0501,0xBB20,0x8D30,0xBF40,0xE0A0,0x2F10,0x20FF,0x90A7,
	0xF003,0xE0DF,0xF0DF,0xF001,0xF001,0xF001,0xF001,0x01F0,
	0x01F0,0x01F0,0xF111,0x2222,0x2222,0x3300,0x3333,0x5533,
	0x5555,0x0055,0x8888,0x8888,0x9999,0x9999,0xAB00,0xBBAA,
	0xCCBB,0xCCCC,0xF9CC,0x31F0,0x01F0,0x01F0,0x01F0,0x0B30,

	0xEEED,0x0300,0x10F0,0x5007,0x0003,0xB00F,0xDE25,0xEEED,
	0x7EDE,0x00DE,0x1022,0x2003,0x112A,0x9055,0x2048,0xDE41,
	0xED7E,0x2600,0x1E40,0x04B0,0x1600,0x2130,0x6B00,0xFBED,
	0x21F0,0x8220,0x5F00,0x6310,0x4010,0x31DE,0x0294,0xFF87,
	0x0900,0x0D10,0x5710,0x1950,0x1320,0x5FF0,0xA730,0x9E60,
	0xF0FF,0xF001,0xF001,0xF001,0xF001,0xF001,0xF001,0xF001,
	0xF001,0x01F0,0x01F0,0x0870,0xE311,0xABBA,0xBBBA,0x1180,
	0x67F3,0x8878,0x5487,0x5555,0x5443,0x0B12,0x2222,0x2212,

	0xFF33,0x01F0,0xF0FF,0xF001,0x8101,0xF1F3,0xF029,0xF01E,
	0x8018,0x011E,0xFFD4,0x21F0,0x3072,0x1212,0x47E2,0x5F80,
	0xEB31,0x19F0,0xC881,0xF0FF,0x905F,0xF01F,0xF05C,0xF001,
	0xF001,0xF001,0xF001,0xFF01,0x01F0,0x01F0,0x01F0,0x01F0,
	0x01F0,0x01F0,0xFF53,0x01F0,0x7080,0x0007,
};

const unsigned short logobluePal[16] __attribute__((aligned(4)))=
{
	0x7C1F,0x0C40,0x0440,0x0C40,0x1440,0x1060,0x1460,0x1860,
	0x1860,0x1C80,0x2480,0x2480,0x28A0,0x30A0,0x5F18,0x7FFF,
};

const unsigned short logoTileData[] = {
0xC010, 0x0005, 0x0F3F, 0xF010, 0xF001, 0xF013, 0xF025, 0xF037, 
0xF049, 0xFB5B, 0x6DF0, 0x7FF0, 0x91F0, 0xA3F0, 0xB570, 0xF01F, 
0xF001, 0xDF13, 0x25F0, 0x3760, 0xF004, 0xF001, 0xF013, 0xF025, 
0xF037, 0xFF49, 0x5BF0, 0x6DF0, 0x7FF0, 0x91F0, 0xA3F0, 0xB5F0, 
0xC7F0, 0xD9F0, 0xF0E0, 0xF0EB, 0x21FD, 0x000F, 0x0110, 0x0210, 
0x1020, 0x0103, 0x051B, 0x0610, 0x0710, 0x1000, 0x1008, 0x1009, 
0x100A, 0xE00B, 0x0100, 0x2DF1, 0x3FF1, 0x1004, 0x1010, 0x0011, 
0x1210, 0x1310, 0x1410, 0x1510, 0x1000, 0x1016, 0x1017, 0x1018, 
0x0E19, 0x1A10, 0x1B10, 0x0100, 0x6DF1, 0x7FF1, 0x0004, 0x2010, 
0x2110, 0x2210, 0x2310, 0x1000, 0x1024, 0x1025, 0x1026, 0x0027, 
0x2810, 0x2910, 0x2A10, 0x2B10, 0x00E0, 0xF101, 0xF1AD, 0x04BF, 
0x3010, 0x3110, 0x1000, 0x1032, 0x1033, 0x1034, 0x0035, 0x3610, 
0x3710, 0x3810, 0x3910, 0x100F, 0x103A, 0x003B, 0xF101, 0xF1ED, 
0xF2FF, 0xFF11, 0x23F2, 0x35F2, 0x47F2, 0x59F2, 0x6BF2, 0x7DF2, 
0x8FF2, 0xA1F2, 0xF2FB, 0xF2B3, 0xF2C5, 0xF2D7, 0x12E9, 0x2FFB, 
0x01F0, 0x13F0, 0xF0FF, 0x6025, 0xF437, 0xF43F, 0xF451, 0xF463, 
0xF475, 0xF487, 0xFF99, 0xABF4, 0xBDF4, 0xCFF4, 0xE1F4, 0xF3F4, 
0x05F5, 0x17F5, 0x29F5, 0xF5FF, 0xF53B, 0xF54D, 0xF55F, 0xF571, 
0xF583, 0xF595, 0x35A7, 0x0B9, };

//}}BLOCK(logo)