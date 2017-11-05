/* ====================================================================
 * Copyright (c) 2014 - 2017 The GmSSL Project.  All rights reserved.
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
#ifndef HEADER_GMTLS_H
#define HEADER_GMTLS_H

#ifdef __cplusplus
extern "C" {
#endif

/* version */

# define GMTLS1_VERSION		0x0100
# define GMTLS1_VERSION_MAJOR	0x01
# define GMTLS1_VERSION_MINOR	0x00
# define GMTLS1_1_VERSION	0x0101
# define GMTLS1_1_VERSION_MAJOR	0x01
# define GMTLS1_1_VERSION_MINOR	0x01
# define GMTLS_VERSION		GMTLS1_1_VERSION
# define GMTLS_VERSION_MAJOR	GMTLS1_1_VERSION_MAJOR
# define GMTLS_VERSOIN_MINOR	GMTLS1_1_VERSION_MINOR

/* GM/T SSL-VPN CipherSuites */
# define GMTLS_CK_SM2DHE_WITH_SM1_SM3		0x0300E001
# define GMTLS_CK_SM2_WITH_SM1_SM3		0x0300E003
# define GMTLS_CK_SM9DHE_WITH_SM1_SM3		0x0300E005
# define GMTLS_CK_SM9_WITH_SM1_SM3		0x0300E007
# define GMTLS_CK_RSA_WITH_SM1_SM3		0x0300E009
# define GMTLS_CK_RSA_WITH_SM1_SHA1		0x0300E00A
# define GMTLS_CK_SM2DHE_WITH_SMS4_SM3		0x0300E011
# define GMTLS_CK_SM2_WITH_SMS4_SM3		0x0300E013
# define GMTLS_CK_SM9DHE_WITH_SMS4_SM3		0x0300E015
# define GMTLS_CK_SM9_WITH_SMS4_SM3		0x0300E017
# define GMTLS_CK_RSA_WITH_SMS4_SM3		0x0300E019
# define GMTLS_CK_RSA_WITH_SMS4_SHA1		0x0300E01A

/* ECDHE-SM2-WITH-[SM1|SMS4|SSF33]-[SM3|SHA256] */
# define GMTLS_CK_ECDHE_SM2_WITH_SM1_SM3	0x0300E101
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_SM3   	0x0300E102
# define GMTLS_CK_ECDHE_SM2_WITH_SSF33_SM3	0x0300E103
# define GMTLS_CK_ECDHE_SM2_WITH_SM1_SHA256	0x0300E104
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_SHA256	0x0300E105
# define GMTLS_CK_ECDHE_SM2_WITH_SSF33_SHA256	0x0300E106

/* ECDHE-SM2-WITH-SMS4-[GCM|CCM|CCM-8]-[SM3|SHA256] */
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_GCM_SM3	0x0300E107
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_CCM_SM3	0x0300E108
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_CCM_8_SM3	0x0300E109
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_GCM_SHA256 0x0300E10A
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_CCM_SHA256 0x0300E10B
# define GMTLS_CK_ECDHE_SM2_WITH_SMS4_CCM_8_SHA256 0x0300E10C

/* PSK ciphersuites with NULL cipher */
# define GMTLS_CK_PSK_WITH_NULL_SM3		0x0300F001
# define GMTLS_CK_DHE_PSK_WITH_NULL_SM3		0x0300F002
# define GMTLS_CK_RSA_PSK_WITH_NULL_SM3		0x0300F003
# define GMTLS_CK_SM2_PSK_WITH_NULL_SM3		0x0300F004
# define GMTLS_CK_ECDHE_PSK_WITH_NULL_SM3	0x0300F005

/* PSK ciphersuits with SMS4 */
# define GMTLS_CK_PSK_WITH_SMS4_CBC_SM3		0x0300F101
# define GMTLS_CK_PSK_WITH_SMS4_GCM_SM3		0x0300F102
# define GMTLS_CK_PSK_WITH_SMS4_CCM_SM3		0x0300F103
# define GMTLS_CK_DHE_PSK_WITH_SMS4_CBC_SM3	0x0300F105
# define GMTLS_CK_DHE_PSK_WITH_SMS4_GCM_SM3	0x0300F106
# define GMTLS_CK_DHE_PSK_WITH_SMS4_CCM_SM3	0x0300F107
# define GMTLS_CK_RSA_PSK_WITH_SMS4_CBC_SM3	0x0300F108
# define GMTLS_CK_RSA_PSK_WITH_SMS4_GCM_SM3	0x0300F109
# define GMTLS_CK_RSA_PSK_WITH_SMS4_CCM_SM3	0x0300F10A
# define GMTLS_CK_ECC_PSK_WITH_SMS4_CBC_SM3	0x0300F10B
# define GMTLS_CK_ECC_PSK_WITH_SMS4_GCM_SM3	0x0300F10C
# define GMTLS_CK_ECC_PSK_WITH_SMS4_CCM_SM3	0x0300F10D

# define GMTLS_CK_PSK_WITH_SM1_CBC_SM3		0x0300F10E
# define GMTLS_CK_PSK_WITH_SM1_GCM_SM3		0x0300F10F
# define GMTLS_CK_PSK_WITH_SM1_CCM_SM3		0x0300F110
# define GMTLS_CK_DHE_PSK_WITH_SM1_CBC_SM3	0x0300F111
# define GMTLS_CK_DHE_PSK_WITH_SM1_GCM_SM3	0x0300F112
# define GMTLS_CK_DHE_PSK_WITH_SM1_CCM_SM3	0x0300F113
# define GMTLS_CK_RSA_PSK_WITH_SM1_CBC_SM3	0x0300F114
# define GMTLS_CK_RSA_PSK_WITH_SM1_GCM_SM3	0x0300F115
# define GMTLS_CK_RSA_PSK_WITH_SM1_CCM_SM3	0x0300F116

# define GMTLS_CK_PSK_WITH_SSF33_CBC_SM3	0x0300F117
# define GMTLS_CK_PSK_WITH_SSF33_GCM_SM3	0x0300F118
# define GMTLS_CK_PSK_WITH_SSF33_CCM_SM3	0x0300F119
# define GMTLS_CK_DHE_PSK_WITH_SSF33_CBC_SM3	0x0300F11A
# define GMTLS_CK_DHE_PSK_WITH_SSF33_GCM_SM3	0x0300F11B
# define GMTLS_CK_DHE_PSK_WITH_SSF33_CCM_SM3	0x0300F11C
# define GMTLS_CK_RSA_PSK_WITH_SSF33_CBC_SM3	0x0300F11D
# define GMTLS_CK_RSA_PSK_WITH_SSF33_GCM_SM3	0x0300F11E
# define GMTLS_CK_RSA_PSK_WITH_SSF33_CCM_SM3	0x0300F11F

/* SRP ciphersuites */
# define GMTLS_CK_SRP_SM3_WITH_SMS4_CBC_SM3	0x0300F201
# define GMTLS_CK_SRP_SM3_WITH_SMS4_GCM_SM3	0x0300F202
# define GMTLS_CK_SRP_SM3_WITH_SMS4_CCM_SM3	0x0300F203


/**********************/
/* GM/T SSL-VPN CipherSuites */
# define GMTLS_TXT_SM2DHE_WITH_SM1_SM3		"SM2DHE-WITH-SM1-SM3"
# define GMTLS_TXT_SM2_WITH_SM1_SM3		"SM2-WITH-SM1-SM3"
# define GMTLS_TXT_SM9DHE_WITH_SM1_SM3		"SM9DHE-WITH-SM1-SM3"
# define GMTLS_TXT_SM9_WITH_SM1_SM3		"SM9-WITH-SM1-SM3"
# define GMTLS_TXT_RSA_WITH_SM1_SM3		"RSA-WITH-SM1-SM3"
# define GMTLS_TXT_RSA_WITH_SM1_SHA1		"RSA-WITH-SM1-SHA1"
# define GMTLS_TXT_SM2DHE_WITH_SMS4_SM3		"SM2DHE-WITH-SMS4-SM3"
# define GMTLS_TXT_SM2_WITH_SMS4_SM3		"SM2-WITH-SMS4-SM3"
# define GMTLS_TXT_SM9DHE_WITH_SMS4_SM3		"SM9DHE-WITH-SMS4-SM3"
# define GMTLS_TXT_SM9_WITH_SMS4_SM3		"SM9-WITH-SMS4-SM3"
# define GMTLS_TXT_RSA_WITH_SMS4_SM3		"RSA-WITH-SMS4-SM3"
# define GMTLS_TXT_RSA_WITH_SMS4_SHA1		"RSA-WITH-SMS4-SHA1"

/* ECDHE-SM2-WITH-[SM1|SMS4|SSF33]-[SM3|SHA256] */
# define GMTLS_TXT_ECDHE_SM2_WITH_SM1_SM3	"ECDHE-SM2-WITH-SM1-SM3"
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_SM3   	"ECDHE-SM2-WITH-SMS4-SM3"
# define GMTLS_TXT_ECDHE_SM2_WITH_SSF33_SM3	"ECDHE-SM2-WITH-SSF33-SM3"
# define GMTLS_TXT_ECDHE_SM2_WITH_SM1_SHA256	"ECDHE-SM2-WITH-SM1-SHA256"
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_SHA256	"ECDHE-SM2-WITH-SMS4-SHA256"
# define GMTLS_TXT_ECDHE_SM2_WITH_SSF33_SHA256	"ECDHE-SM2-WITH-SSF33-SHA256"

/* ECDHE-SM2-WITH-SMS4-[GCM|CCM|CCM-8]-[SM3|SHA256] */
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_GCM_SM3	"ECDHE-SM2-WITH-SMS4-GCM-SM3"
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_CCM_SM3	"ECDHE-SM2-WITH-SMS4-CCM-SM3"
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_CCM_8_SM3	"ECDHE-SM2-WITH-SMS4-CCM-8-SM3"
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_GCM_SHA256	"ECDHE-SM2-WITH-SMS4-GCM-SHA256"
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_CCM_SHA256	"ECDHE-SM2-WITH-SMS4-CCM-SHA256"
# define GMTLS_TXT_ECDHE_SM2_WITH_SMS4_CCM_8_SHA256	"ECDHE-SM2-WITH-SMS4-CCM-8-SHA256"

/* PSK ciphersuites with NULL cipher */
# define GMTLS_TXT_PSK_WITH_NULL_SM3		"PSK-WITH-NULL-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_NULL_SM3	"DHE-PSK-WITH-NULL-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_NULL_SM3	"RSA-PSK-WITH-NULL-SM3"
# define GMTLS_TXT_SM2_PSK_WITH_NULL_SM3	"SM2-PSK_WITH-NULL-SM3"
# define GMTLS_TXT_ECDHE_PSK_WITH_NULL_SM3	"ECDHE-PSK-WITH-NULL-SM3"

/* PSK ciphersuits with SMS4 */
# define GMTLS_TXT_PSK_WITH_SMS4_CBC_SM3	"PSK-WITH-SMS4-CBC-SM3"
# define GMTLS_TXT_PSK_WITH_SMS4_GCM_SM3	"PSK-WITH-SMS4-GCM-SM3"
# define GMTLS_TXT_PSK_WITH_SMS4_CCM_SM3	"PSK-WITH-SMS4-CCM-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SMS4_CBC_SM3	"DHE-PSK-WITH-SMS4-CBC-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SMS4_GCM_SM3	"DHE-PSK-WITH-SMS4-GCM-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SMS4_CCM_SM3	"DHE-PSK-WITH-SMS4-CCM-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SMS4_CBC_SM3	"RSA-PSK-WITH-SMS4-CBC-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SMS4_GCM_SM3	"RSA-PSK-WITH-SMS4-GCM-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SMS4_CCM_SM3	"RSA-PSK-WITH-SMS4-CCM-SM3"
# define GMTLS_TXT_ECC_PSK_WITH_SMS4_CBC_SM3	"ECC-PSK-WITH-SMS4-CBC-SM3"
# define GMTLS_TXT_ECC_PSK_WITH_SMS4_GCM_SM3	"ECC-PSK-WITH-SMS4-GCM-SM3"
# define GMTLS_TXT_ECC_PSK_WITH_SMS4_CCM_SM3	"ECC-PSK-WITH-SMS4-CCM-SM3"


# define GMTLS_TXT_PSK_WITH_SM1_CBC_SM3		"PSK-WITH-SM1-CBC-SM3"
# define GMTLS_TXT_PSK_WITH_SM1_GCM_SM3		"PSK-WITH-SM1-GCM-SM3"
# define GMTLS_TXT_PSK_WITH_SM1_CCM_SM3		"PSK-WITH-SM1-CCM-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SM1_CBC_SM3	"DHE-PSK-WITH-SM1-CBC-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SM1_GCM_SM3	"DHE-PSK-WITH-SM1-GCM-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SM1_CCM_SM3	"DHE-PSK-WITH-SM1-CCM-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SM1_CBC_SM3	"RSA-PSK-WITH-SM1-CBC-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SM1_GCM_SM3	"RSA-PSK-WITH-SM1-GCM-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SM1_CCM_SM3	"RSA-PSK-WITH-SM1-CCM-SM3"


# define GMTLS_TXT_PSK_WITH_SSF33_CBC_SM3	"PSK-WITH-SSF33-CBC-SM3"
# define GMTLS_TXT_PSK_WITH_SSF33_GCM_SM3	"PSK-WITH-SSF33-GCM-SM3"
# define GMTLS_TXT_PSK_WITH_SSF33_CCM_SM3	"PSK-WITH-SSF33-CCM-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SSF33_CBC_SM3	"DHE-PSK-WITH-SSF33-CBC-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SSF33_GCM_SM3	"DHE-PSK-WITH-SSF33-GCM-SM3"
# define GMTLS_TXT_DHE_PSK_WITH_SSF33_CCM_SM3	"DHE-PSK-WITH-SSF33-CCM-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SSF33_CBC_SM3	"RSA-PSK-WITH-SSF33-CBC-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SSF33_GCM_SM3	"RSA-PSK-WITH-SSF33-GCM-SM3"
# define GMTLS_TXT_RSA_PSK_WITH_SSF33_CCM_SM3	"RSA-PSK-WITH-SSF33-CCM-SM3"

/* SRP ciphersuites */
# define GMTLS_TXT_SRP_SM3_WITH_SMS4_CBC_SM3	"SRP-SM3-WITH-SMS4-CBC-SM3"
# define GMTLS_TXT_SRP_SM3_WITH_SMS4_GCM_SM3	"SRP-SM3-WITH-SMS4-GCM-SM3"
# define GMTLS_TXT_SRP_SM3_WITH_SMS4_CCM_SM3	"SRP-SM3-WITH-SMS4-CCM-SM3"


# define TLS_CT_SM2_SIGN	240
# define TLS_CT_SM2_FIXED_ECDH	241


/* from GM/T 0024-2014 Table 1 */
#define GMTLS_AD_UNSUPPORTED_SITE2SITE	200 /* fatal */
#define GMTLS_AD_NO_AREA		201
#define GMTLS_AD_UNSUPPORTED_AREATYPE	202
#define GMTLS_AD_BAD_IBCPARAM		203 /* fatal */
#define GMTLS_AD_UNSUPPORTED_IBCPARAM	204 /* fatal */
#define GMTLS_AD_IDENTITY_NEED		205 /* fatal */


/* SSL_MAX_DIGEST in ssl_locl.h should be update */

#define GM1_PRF_SM3 (SSL_HANDSHAKE_MAC_SM3 << TLS1_PRF_DGST_SHIFT)

#ifdef __cplusplus
}
#endif
#endif
