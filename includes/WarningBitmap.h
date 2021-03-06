const int32 kDataWidth = 19;
const int32 kDataHeight = 19;
const color_space kDataColorSpace = B_RGB32;

const unsigned char kDataBits [] = {
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x8e,0x8e,0xff,0x32,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,
	0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,
	0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x62,0x62,0x62,0x60,0x00,0x00,0x00,0xff,0x62,0x62,0x62,0x60,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,
	0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,
	0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0x7b,0x7b,0x7b,0x44,0x00,0x00,0x00,0xff,0x7b,0x7b,0x7b,0x44,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0x89,0x89,0x89,0x36,0x00,0x00,0x00,0xff,0x89,0x89,0x89,0x36,
	0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0x98,0x98,0x98,0x29,0x00,0x00,0x00,0xff,0x98,0x98,0x98,0x29,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xa2,0xa2,0xa2,0x21,
	0x00,0x00,0x00,0xff,0xa2,0xa2,0xa2,0x21,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xbf,0xbf,0xbf,0x10,0x31,0x31,0x31,0xa6,0xbf,0xbf,0xbf,0x10,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,
	0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xce,0xce,0xce,0x09,0x45,0x45,0x45,0x87,0xce,0xce,0xce,0x09,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xd8,0xd8,0xd8,0x05,0x58,0x58,0x58,0x6d,0xd8,0xd8,0xd8,0x05,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,
	0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xb5,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,
	0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xb5,0x15,0x00,0x00,0x00,0xff,
	0xb5,0xb5,0xb5,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xb5,0xb5,0xff,0x15,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,
	0x8e,0x8e,0xff,0x32,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xb5,0xb5,0xb5,0x15,0x7b,0x7b,0x7b,0x44,0xb5,0xb5,0xb5,0x15,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0x8e,0x8e,0xff,0x32,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xb5,0xb5,0xff,0x15,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,
	0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0xb5,0xb5,0xff,0x15,0xb5,0xb5,0xff,0x15,
	0x58,0x58,0xff,0x6d,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,
	0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x58,0x58,0xff,0x6d,0xb5,0xb5,0xff,0x15,0xff,0xff,0xff,0x00,0xbf,0xbf,0xff,0x10,0x8e,0x8e,0xff,0x32,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,
	0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x58,0x58,0xff,0x6d,0x8e,0x8e,0xff,0x32,0xbf,0xbf,0xff,0x10,
	0xff,0xff,0xff,0x00
};

