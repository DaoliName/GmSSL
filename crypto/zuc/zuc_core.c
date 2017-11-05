/* ====================================================================
 * Copyright (c) 2015 - 2016 The GmSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the GmSSL Project.
 *    (http://gmssl.org/)"
 *
 * 4. The name "GmSSL Project" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    guanzhi1980@gmail.com.
 *
 * 5. Products derived from this software may not be called "GmSSL"
 *    nor may "GmSSL" appear in their names without prior written
 *    permission of the GmSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the GmSSL Project
 *    (http://gmssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE GmSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE GmSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */

/* code from ZUC 3GPP Specifications, version 1.6
 */

#include <stdlib.h>
#include "zuc_spec.h"



typedef struct {
    uint32_t lfsr_s[16];
    uint32_t f_r[2];
    uint32_t brc_x[4];
} zuc_key_t;




static unsigned char S0[256] = {
	0x3e,0x72,0x5b,0x47,0xca,0xe0,0x00,0x33,0x04,0xd1,0x54,0x98,0x09,0xb9,0x6d,0xcb,
	0x7b,0x1b,0xf9,0x32,0xaf,0x9d,0x6a,0xa5,0xb8,0x2d,0xfc,0x1d,0x08,0x53,0x03,0x90,
	0x4d,0x4e,0x84,0x99,0xe4,0xce,0xd9,0x91,0xdd,0xb6,0x85,0x48,0x8b,0x29,0x6e,0xac,
	0xcd,0xc1,0xf8,0x1e,0x73,0x43,0x69,0xc6,0xb5,0xbd,0xfd,0x39,0x63,0x20,0xd4,0x38,
	0x76,0x7d,0xb2,0xa7,0xcf,0xed,0x57,0xc5,0xf3,0x2c,0xbb,0x14,0x21,0x06,0x55,0x9b,
	0xe3,0xef,0x5e,0x31,0x4f,0x7f,0x5a,0xa4,0x0d,0x82,0x51,0x49,0x5f,0xba,0x58,0x1c,
	0x4a,0x16,0xd5,0x17,0xa8,0x92,0x24,0x1f,0x8c,0xff,0xd8,0xae,0x2e,0x01,0xd3,0xad,
	0x3b,0x4b,0xda,0x46,0xeb,0xc9,0xde,0x9a,0x8f,0x87,0xd7,0x3a,0x80,0x6f,0x2f,0xc8,
	0xb1,0xb4,0x37,0xf7,0x0a,0x22,0x13,0x28,0x7c,0xcc,0x3c,0x89,0xc7,0xc3,0x96,0x56,
	0x07,0xbf,0x7e,0xf0,0x0b,0x2b,0x97,0x52,0x35,0x41,0x79,0x61,0xa6,0x4c,0x10,0xfe,
	0xbc,0x26,0x95,0x88,0x8a,0xb0,0xa3,0xfb,0xc0,0x18,0x94,0xf2,0xe1,0xe5,0xe9,0x5d,
	0xd0,0xdc,0x11,0x66,0x64,0x5c,0xec,0x59,0x42,0x75,0x12,0xf5,0x74,0x9c,0xaa,0x23,
	0x0e,0x86,0xab,0xbe,0x2a,0x02,0xe7,0x67,0xe6,0x44,0xa2,0x6c,0xc2,0x93,0x9f,0xf1,
	0xf6,0xfa,0x36,0xd2,0x50,0x68,0x9e,0x62,0x71,0x15,0x3d,0xd6,0x40,0xc4,0xe2,0x0f,
	0x8e,0x83,0x77,0x6b,0x25,0x05,0x3f,0x0c,0x30,0xea,0x70,0xb7,0xa1,0xe8,0xa9,0x65,
	0x8d,0x27,0x1a,0xdb,0x81,0xb3,0xa0,0xf4,0x45,0x7a,0x19,0xdf,0xee,0x78,0x34,0x60,
};

static unsigned char S1[256] = {
	0x55,0xc2,0x63,0x71,0x3b,0xc8,0x47,0x86,0x9f,0x3c,0xda,0x5b,0x29,0xaa,0xfd,0x77,
	0x8c,0xc5,0x94,0x0c,0xa6,0x1a,0x13,0x00,0xe3,0xa8,0x16,0x72,0x40,0xf9,0xf8,0x42,
	0x44,0x26,0x68,0x96,0x81,0xd9,0x45,0x3e,0x10,0x76,0xc6,0xa7,0x8b,0x39,0x43,0xe1,
	0x3a,0xb5,0x56,0x2a,0xc0,0x6d,0xb3,0x05,0x22,0x66,0xbf,0xdc,0x0b,0xfa,0x62,0x48,
	0xdd,0x20,0x11,0x06,0x36,0xc9,0xc1,0xcf,0xf6,0x27,0x52,0xbb,0x69,0xf5,0xd4,0x87,
	0x7f,0x84,0x4c,0xd2,0x9c,0x57,0xa4,0xbc,0x4f,0x9a,0xdf,0xfe,0xd6,0x8d,0x7a,0xeb,
	0x2b,0x53,0xd8,0x5c,0xa1,0x14,0x17,0xfb,0x23,0xd5,0x7d,0x30,0x67,0x73,0x08,0x09,
	0xee,0xb7,0x70,0x3f,0x61,0xb2,0x19,0x8e,0x4e,0xe5,0x4b,0x93,0x8f,0x5d,0xdb,0xa9,
	0xad,0xf1,0xae,0x2e,0xcb,0x0d,0xfc,0xf4,0x2d,0x46,0x6e,0x1d,0x97,0xe8,0xd1,0xe9,
	0x4d,0x37,0xa5,0x75,0x5e,0x83,0x9e,0xab,0x82,0x9d,0xb9,0x1c,0xe0,0xcd,0x49,0x89,
	0x01,0xb6,0xbd,0x58,0x24,0xa2,0x5f,0x38,0x78,0x99,0x15,0x90,0x50,0xb8,0x95,0xe4,
	0xd0,0x91,0xc7,0xce,0xed,0x0f,0xb4,0x6f,0xa0,0xcc,0xf0,0x02,0x4a,0x79,0xc3,0xde,
	0xa3,0xef,0xea,0x51,0xe6,0x6b,0x18,0xec,0x1b,0x2c,0x80,0xf7,0x74,0xe7,0xff,0x21,
	0x5a,0x6a,0x54,0x1e,0x41,0x31,0x92,0x35,0xc4,0x33,0x07,0x0a,0xba,0x7e,0x0e,0x34,
	0x88,0xb1,0x98,0x7c,0xf3,0x3d,0x60,0x6c,0x7b,0xca,0xd3,0x1f,0x32,0x65,0x04,0x28,
	0x64,0xbe,0x85,0x9b,0x2f,0x59,0x8a,0xd7,0xb0,0x25,0xac,0xaf,0x12,0x03,0xe2,0xf2,
};

uint32_t EK_d[16] = {
	0x44D7,0x26BC,0x626B,0x135E,0x5789,0x35E2,0x7135,0x09AF,
	0x4D78,0x2F13,0x6BC4,0x1AF1,0x5E26,0x3C4D,0x789A,0x47AC,
};


inline uint32_t zuc_madd(uint32_t a, uint32_t b)
{
	u32 c = a + b;
	return (c & 0x7FFFFFFF) + (c >> 31);
}


/* LFSR with initialization mode */
#define MulByPow2(x, k) ((((x) << k) | ((x) >> (31 - k))) & 0x7FFFFFFF)

void zuc_lfsr_init(zuc_key_t *key, uint32_t u)
{
	uint32_t f, v;
	f = key->lfsr_s[0];

	v = MulByPow2(key->lfsr_s[0], 8);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[4], 20);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[10], 21);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[13], 17);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[15], 15);
	f = AddM(f, v);
	f = AddM(f, u);

	/* update the state */
	key->lfsr_s[0] = key->lfsr_s[1];
	key->lfsr_s[1] = key->lfsr_s[2];
	key->lfsr_s[2] = key->lfsr_s[3];
	key->lfsr_s[3] = key->lfsr_s[4];
	key->lfsr_s[4] = key->lfsr_s[5];
	key->lfsr_s[5] = key->lfsr_s[6];
	key->lfsr_s[6] = key->lfsr_s[7];
	key->lfsr_s[7] = key->lfsr_s[8];
	key->lfsr_s[8] = key->lfsr_s[9];
	key->lfsr_s[9] = key->lfsr_s[10];
	key->lfsr_s[10] = key->lfsr_s[11];
	key->lfsr_s[11] = key->lfsr_s[12];
	key->lfsr_s[12] = key->lfsr_s[13];
	key->lfsr_s[13] = key->lfsr_s[14];
	key->lfsr_s[14] = key->lfsr_s[15];
	key->lfsr_s[15] = f;
}

void zuc_lfst_word(zuc_key_t *key)
{
	u32 f, v;
	f = key->lfsr_s[0];
	v = MulByPow2(key->lfsr_s[0], 8);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[4], 20);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[10], 21);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[13], 17);
	f = AddM(f, v);
	v = MulByPow2(key->lfsr_s[15], 15);
	f = AddM(f, v);

	key->lfsr_s[0] = key->lfsr_s[1];
	key->lfsr_s[1] = key->lfsr_s[2];
	key->lfsr_s[2] = key->lfsr_s[3];
	key->lfsr_s[3] = key->lfsr_s[4];
	key->lfsr_s[4] = key->lfsr_s[5];
	key->lfsr_s[5] = key->lfsr_s[6];
	key->lfsr_s[6] = key->lfsr_s[7];
	key->lfsr_s[7] = key->lfsr_s[8];
	key->lfsr_s[8] = key->lfsr_s[9];
	key->lfsr_s[9] = key->lfsr_s[10];
	key->lfsr_s[10] = key->lfsr_s[11];
	key->lfsr_s[11] = key->lfsr_s[12];
	key->lfsr_s[12] = key->lfsr_s[13];
	key->lfsr_s[13] = key->lfsr_s[14];
	key->lfsr_s[14] = key->lfsr_s[15];
	key->lfsr_s[15] = f;
}

void zuc_bit_reorganization(zuc_key_t *key)
{
	key->brc_x[0] = ((key->lfsr_s[15] & 0x7FFF8000) << 1) | (key->lfsr_s[14] & 0xFFFF);
	key->brc_x[1] = ((key->lfsr_s[11] & 0xFFFF) << 16) | (key->lfsr_s[9] >> 15);
	key->brc_x[2] = ((key->lfsr_s[7] & 0xFFFF) << 16) | (key->lfsr_s[5] >> 15);
	key->brc_x[3] = ((key->lfsr_s[2] & 0xFFFF) << 16) | (key->lfsr_s[0] >> 15);
}

#define ROT32(a, k) (((a) << k) | ((a) >> (32 - k)))

#define L1(x)						\
	((x) ^						\
	ROT32((x),  2) ^				\
	ROT32((x), 10) ^				\
	ROT32((x), 18) ^				\
	ROT32((x), 24))

#define L2(x)						\
	((x) ^						\
	ROT32((x),  8) ^				\
	ROT32((x), 14) ^				\
	ROT32((x), 22) ^				\
	ROT32((x), 30))

#define GET32(pc)  (					\
	((uint32_t)(pc)[0] << 24) ^			\
	((uint32_t)(pc)[1] << 16) ^			\
	((uint32_t)(pc)[2] <<  8) ^			\
	((uint32_t)(pc)[3]))

#define PUT32(st, ct)					\
	(ct)[0] = (uint8_t)((st) >> 24);		\
	(ct)[1] = (uint8_t)((st) >> 16);		\
	(ct)[2] = (uint8_t)((st) >>  8);		\

#define MAKEU32(a, b, c, d)				\
	(((uint32_t)(a) << 24) |			\
	 ((uint32_t)(b) << 16) | 			\
	 ((uint32_t)(c) <<  8) |			\
	 ((uint32_t)(d)))

#define MAKEU31(a, b, c) 				\
	(((uint32_t)(a) << 23) |			\
	 ((uint32_t)(b) <<  8) |			\
	  (uint32_t)(c))


uint32_t F(zuc_key_t *key)
{
	uint32_t W, W1, W2, u, v;

	W = (key->brc_x[0] ^ key->f_r[1]) + key->f_r[2];
	W1 = key->f_r[1] + key->brc_x[1];
	W2 = key->f_r[2] ^ key->brc_x[2];
	u = L1((W1 << 16) | (W2 >> 16));
	v = L2((W2 << 16) | (W1 >> 16));

	key->f_r[1] = MAKEU32(
			S0[u >> 24],
			S1[(u >> 16) & 0xFF],
			S0[(u >> 8) & 0xFF],
			S1[u & 0xFF]);

	key->f_r[2] = MAKEU32(
			S0[v >> 24],
			S1[(v >> 16) & 0xFF],
			S0[(v >> 8) & 0xFF],
			S1[v & 0xFF]);

	return W;
}

void zuc_set_key(zuc_key_t *key, const unsigned char *user_key, const unsigned char *iv)
{
	uint32_t w;

	for (i = 0; i < 16; i++) {
		key->lfsr_s[i] = MAKEU31(user_key[i], EK_d[i], iv[i]);
	}

	key->f_r[1] = 0;
	key->f_r[2] = 0;

	for (i = 0; i < 32; i++) {
		zuc_bit_reorganization(key);
		w = F(key);
		zuc_lfsr_init(w >> 1);
	}

}

void zuc_generate_keystream(zuc_key_t *key, size_t num, uint32_t *keystream)
{
	size_t i;

	zuc_bit_reorg(key);
	(void)F(key);
	zuc_lfsr_work(key);

	for (i = 0; i < num; i ++) {
		zuc_bit_reorg(key);
		keystream[i] = F(key) ^ key->brc_x[3];
		zuc_lfsr_work(key);
	}
}

void ZUC(const unsigned char *key, const unsigned char *iv, uint32_t *keystream, int num)
{
	zuc_key_t zuc;
	zuc_key_init(&zuc, key, iv);
	zuc_generate_keystream(&zuc, keystream, num);
}


