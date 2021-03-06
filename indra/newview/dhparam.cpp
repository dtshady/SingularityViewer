/* Generated using openssl */
#include "llviewerprecompiledheaders.h"
#include <openssl/dh.h>

DH *get_dh2048()
	{
	static unsigned char dh2048_p[]={
		0xAC,0x31,0xAA,0xFD,0x76,0x1B,0x47,0x24,0x99,0x6D,0xF8,0xD5,
		0x5B,0x4B,0xD1,0x7E,0xF9,0x1A,0x41,0xF6,0x29,0xCC,0xA9,0x02,
		0x6B,0xED,0xFD,0xC9,0x37,0xCE,0xF6,0x11,0x78,0x6F,0x37,0x38,
		0x7D,0x49,0x3F,0x78,0x36,0x83,0x0A,0x6F,0xBA,0x6F,0x74,0xD9,
		0xB1,0xC1,0xC4,0x5A,0x7D,0x84,0x26,0x56,0x8B,0x53,0xF4,0xFE,
		0xD1,0x34,0xF1,0xE0,0x08,0x65,0xA6,0xFD,0xDB,0x5D,0xAC,0x14,
		0xCD,0xC9,0x7E,0x79,0xE9,0x3B,0xAF,0x92,0xC7,0x4D,0x91,0x15,
		0x0B,0x1E,0x2F,0x0A,0x56,0x4E,0x0D,0x3A,0x4D,0x9E,0xB0,0xB5,
		0xFC,0x0D,0xB1,0x55,0x40,0xC6,0x30,0x99,0xCD,0xE8,0x7E,0x72,
		0x08,0x93,0x9C,0x7F,0x55,0x23,0x27,0x09,0xF4,0x50,0xF2,0x96,
		0xB5,0x30,0x35,0x6A,0x99,0x4C,0xD6,0x85,0x72,0x8D,0x9C,0x19,
		0x70,0x9A,0x77,0x52,0xE8,0x33,0x03,0x7A,0x00,0xDA,0xFE,0xD7,
		0x98,0xD0,0x7B,0x26,0xBA,0xD7,0xFF,0xD1,0x49,0x61,0x27,0x3E,
		0xFC,0x12,0x81,0xC9,0xB0,0xAF,0x34,0x14,0x97,0x66,0xFB,0xEF,
		0xD3,0xFE,0xC9,0x01,0x25,0xEC,0xF4,0xE8,0xA8,0xD8,0x21,0x45,
		0x20,0x6F,0xFC,0xA8,0xB3,0xCE,0xCF,0x0D,0xA1,0x14,0xCC,0x38,
		0x81,0x74,0x6A,0x5E,0x36,0x09,0x1D,0xBE,0x4C,0x08,0x52,0x5E,
		0xC2,0x5F,0xA4,0x48,0x3A,0x71,0x85,0xF2,0x97,0x32,0xEC,0x3B,
		0xFB,0x1B,0x9A,0x8A,0x4B,0x20,0x32,0xFE,0x6A,0x94,0x4C,0x02,
		0xB2,0xD7,0xC3,0x1B,0xF8,0x90,0x54,0x76,0x70,0x49,0x81,0x86,
		0x30,0x12,0xD2,0x91,0xF0,0xFD,0x1B,0x53,0x2E,0x60,0x13,0x78,
		0x8B,0x3F,0x1B,0x13,
		};
	static unsigned char dh2048_g[]={
		0x05,
		};
	DH *dh;

	if ((dh=DH_new()) == NULL) return(NULL);
	dh->p=BN_bin2bn(dh2048_p,sizeof(dh2048_p),NULL);
	dh->g=BN_bin2bn(dh2048_g,sizeof(dh2048_g),NULL);
	if ((dh->p == NULL) || (dh->g == NULL))
		{ DH_free(dh); return(NULL); }
	return(dh);
	}
