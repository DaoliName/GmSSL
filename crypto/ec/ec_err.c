/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ec.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_EC,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_EC,0,reason)

static ERR_STRING_DATA EC_str_functs[] = {
    {ERR_FUNC(EC_F_BN_TO_FELEM), "BN_to_felem"},
    {ERR_FUNC(EC_F_D2I_ECIESPARAMETERS), "d2i_ECIESParameters"},
    {ERR_FUNC(EC_F_D2I_ECPARAMETERS), "d2i_ECParameters"},
    {ERR_FUNC(EC_F_D2I_ECPKPARAMETERS), "d2i_ECPKParameters"},
    {ERR_FUNC(EC_F_D2I_ECPRIVATEKEY), "d2i_ECPrivateKey"},
    {ERR_FUNC(EC_F_DO_EC_KEY_PRINT), "do_EC_KEY_print"},
    {ERR_FUNC(EC_F_ECDH_CMS_DECRYPT), "ecdh_cms_decrypt"},
    {ERR_FUNC(EC_F_ECDH_CMS_SET_SHARED_INFO), "ecdh_cms_set_shared_info"},
    {ERR_FUNC(EC_F_ECDH_COMPUTE_KEY), "ECDH_compute_key"},
    {ERR_FUNC(EC_F_ECDH_SIMPLE_COMPUTE_KEY), "ecdh_simple_compute_key"},
    {ERR_FUNC(EC_F_ECDSA_DO_SIGN_EX), "ECDSA_do_sign_ex"},
    {ERR_FUNC(EC_F_ECDSA_DO_VERIFY), "ECDSA_do_verify"},
    {ERR_FUNC(EC_F_ECDSA_SIGN_EX), "ECDSA_sign_ex"},
    {ERR_FUNC(EC_F_ECDSA_SIGN_SETUP), "ECDSA_sign_setup"},
    {ERR_FUNC(EC_F_ECDSA_SIG_NEW), "ECDSA_SIG_new"},
    {ERR_FUNC(EC_F_ECDSA_VERIFY), "ECDSA_verify"},
    {ERR_FUNC(EC_F_ECIES_DECRYPT), "ECIES_decrypt"},
    {ERR_FUNC(EC_F_ECIES_DO_DECRYPT), "ECIES_do_decrypt"},
    {ERR_FUNC(EC_F_ECIES_DO_ENCRYPT), "ECIES_do_encrypt"},
    {ERR_FUNC(EC_F_ECIES_ENCRYPT), "ECIES_encrypt"},
    {ERR_FUNC(EC_F_ECIES_PARAMS_GET_ENC), "ECIES_PARAMS_get_enc"},
    {ERR_FUNC(EC_F_ECIES_PARAMS_GET_KDF), "ECIES_PARAMS_get_kdf"},
    {ERR_FUNC(EC_F_ECIES_PARAMS_GET_MAC), "ECIES_PARAMS_get_mac"},
    {ERR_FUNC(EC_F_ECIES_PARAMS_INIT_WITH_RECOMMENDED),
     "ECIES_PARAMS_init_with_recommended"},
    {ERR_FUNC(EC_F_ECIES_PARAMS_INIT_WITH_TYPE),
     "ECIES_PARAMS_init_with_type"},
    {ERR_FUNC(EC_F_ECKEY_PARAM2TYPE), "eckey_param2type"},
    {ERR_FUNC(EC_F_ECKEY_PARAM_DECODE), "eckey_param_decode"},
    {ERR_FUNC(EC_F_ECKEY_PRIV_DECODE), "eckey_priv_decode"},
    {ERR_FUNC(EC_F_ECKEY_PRIV_ENCODE), "eckey_priv_encode"},
    {ERR_FUNC(EC_F_ECKEY_PUB_DECODE), "eckey_pub_decode"},
    {ERR_FUNC(EC_F_ECKEY_PUB_ENCODE), "eckey_pub_encode"},
    {ERR_FUNC(EC_F_ECKEY_TYPE2PARAM), "eckey_type2param"},
    {ERR_FUNC(EC_F_ECPARAMETERS_PRINT_FP), "ECParameters_print_fp"},
    {ERR_FUNC(EC_F_ECPKPARAMETERS_PRINT), "ECPKParameters_print"},
    {ERR_FUNC(EC_F_ECPKPARAMETERS_PRINT_FP), "ECPKParameters_print_fp"},
    {ERR_FUNC(EC_F_ECP_NISTZ256_GET_AFFINE), "ecp_nistz256_get_affine"},
    {ERR_FUNC(EC_F_ECP_NISTZ256_MULT_PRECOMPUTE),
     "ecp_nistz256_mult_precompute"},
    {ERR_FUNC(EC_F_ECP_NISTZ256_POINTS_MUL), "ecp_nistz256_points_mul"},
    {ERR_FUNC(EC_F_ECP_NISTZ256_PRE_COMP_NEW), "ecp_nistz256_pre_comp_new"},
    {ERR_FUNC(EC_F_ECP_NISTZ256_WINDOWED_MUL), "ecp_nistz256_windowed_mul"},
    {ERR_FUNC(EC_F_ECX_KEY_OP), "ecx_key_op"},
    {ERR_FUNC(EC_F_ECX_PRIV_ENCODE), "ecx_priv_encode"},
    {ERR_FUNC(EC_F_ECX_PUB_ENCODE), "ecx_pub_encode"},
    {ERR_FUNC(EC_F_EC_ASN1_GROUP2CURVE), "ec_asn1_group2curve"},
    {ERR_FUNC(EC_F_EC_ASN1_GROUP2FIELDID), "ec_asn1_group2fieldid"},
    {ERR_FUNC(EC_F_EC_GF2M_MONTGOMERY_POINT_MULTIPLY),
     "ec_GF2m_montgomery_point_multiply"},
    {ERR_FUNC(EC_F_EC_GF2M_SIMPLE_GROUP_CHECK_DISCRIMINANT),
     "ec_GF2m_simple_group_check_discriminant"},
    {ERR_FUNC(EC_F_EC_GF2M_SIMPLE_GROUP_SET_CURVE),
     "ec_GF2m_simple_group_set_curve"},
    {ERR_FUNC(EC_F_EC_GF2M_SIMPLE_OCT2POINT), "ec_GF2m_simple_oct2point"},
    {ERR_FUNC(EC_F_EC_GF2M_SIMPLE_POINT2OCT), "ec_GF2m_simple_point2oct"},
    {ERR_FUNC(EC_F_EC_GF2M_SIMPLE_POINT_GET_AFFINE_COORDINATES),
     "ec_GF2m_simple_point_get_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_GF2M_SIMPLE_POINT_SET_AFFINE_COORDINATES),
     "ec_GF2m_simple_point_set_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_GF2M_SIMPLE_SET_COMPRESSED_COORDINATES),
     "ec_GF2m_simple_set_compressed_coordinates"},
    {ERR_FUNC(EC_F_EC_GFP_MONT_FIELD_DECODE), "ec_GFp_mont_field_decode"},
    {ERR_FUNC(EC_F_EC_GFP_MONT_FIELD_ENCODE), "ec_GFp_mont_field_encode"},
    {ERR_FUNC(EC_F_EC_GFP_MONT_FIELD_MUL), "ec_GFp_mont_field_mul"},
    {ERR_FUNC(EC_F_EC_GFP_MONT_FIELD_SET_TO_ONE),
     "ec_GFp_mont_field_set_to_one"},
    {ERR_FUNC(EC_F_EC_GFP_MONT_FIELD_SQR), "ec_GFp_mont_field_sqr"},
    {ERR_FUNC(EC_F_EC_GFP_MONT_GROUP_SET_CURVE),
     "ec_GFp_mont_group_set_curve"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP224_GROUP_SET_CURVE),
     "ec_GFp_nistp224_group_set_curve"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP224_POINTS_MUL), "ec_GFp_nistp224_points_mul"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP224_POINT_GET_AFFINE_COORDINATES),
     "ec_GFp_nistp224_point_get_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP256_GROUP_SET_CURVE),
     "ec_GFp_nistp256_group_set_curve"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP256_POINTS_MUL), "ec_GFp_nistp256_points_mul"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP256_POINT_GET_AFFINE_COORDINATES),
     "ec_GFp_nistp256_point_get_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP521_GROUP_SET_CURVE),
     "ec_GFp_nistp521_group_set_curve"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP521_POINTS_MUL), "ec_GFp_nistp521_points_mul"},
    {ERR_FUNC(EC_F_EC_GFP_NISTP521_POINT_GET_AFFINE_COORDINATES),
     "ec_GFp_nistp521_point_get_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_GFP_NIST_FIELD_MUL), "ec_GFp_nist_field_mul"},
    {ERR_FUNC(EC_F_EC_GFP_NIST_FIELD_SQR), "ec_GFp_nist_field_sqr"},
    {ERR_FUNC(EC_F_EC_GFP_NIST_GROUP_SET_CURVE),
     "ec_GFp_nist_group_set_curve"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_GROUP_CHECK_DISCRIMINANT),
     "ec_GFp_simple_group_check_discriminant"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_GROUP_SET_CURVE),
     "ec_GFp_simple_group_set_curve"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_MAKE_AFFINE), "ec_GFp_simple_make_affine"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_OCT2POINT), "ec_GFp_simple_oct2point"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_POINT2OCT), "ec_GFp_simple_point2oct"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_POINTS_MAKE_AFFINE),
     "ec_GFp_simple_points_make_affine"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_POINT_GET_AFFINE_COORDINATES),
     "ec_GFp_simple_point_get_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_POINT_SET_AFFINE_COORDINATES),
     "ec_GFp_simple_point_set_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_GFP_SIMPLE_SET_COMPRESSED_COORDINATES),
     "ec_GFp_simple_set_compressed_coordinates"},
    {ERR_FUNC(EC_F_EC_GROUP_CHECK), "EC_GROUP_check"},
    {ERR_FUNC(EC_F_EC_GROUP_CHECK_DISCRIMINANT),
     "EC_GROUP_check_discriminant"},
    {ERR_FUNC(EC_F_EC_GROUP_COPY), "EC_GROUP_copy"},
    {ERR_FUNC(EC_F_EC_GROUP_GENERATE_TYPE1CURVE),
     "EC_GROUP_generate_type1curve"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_CURVE_GF2M), "EC_GROUP_get_curve_GF2m"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_CURVE_GFP), "EC_GROUP_get_curve_GFp"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_DEGREE), "EC_GROUP_get_degree"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_ECPARAMETERS), "EC_GROUP_get_ecparameters"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_ECPKPARAMETERS),
     "EC_GROUP_get_ecpkparameters"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_PENTANOMIAL_BASIS),
     "EC_GROUP_get_pentanomial_basis"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_TRINOMIAL_BASIS),
     "EC_GROUP_get_trinomial_basis"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_TYPE1CURVE_ETA),
     "EC_GROUP_get_type1curve_eta"},
    {ERR_FUNC(EC_F_EC_GROUP_GET_TYPE1CURVE_ZETA),
     "EC_GROUP_get_type1curve_zeta"},
    {ERR_FUNC(EC_F_EC_GROUP_IS_TYPE1CURVE), "EC_GROUP_is_type1curve"},
    {ERR_FUNC(EC_F_EC_GROUP_NEW), "EC_GROUP_new"},
    {ERR_FUNC(EC_F_EC_GROUP_NEW_BY_CURVE_NAME), "EC_GROUP_new_by_curve_name"},
    {ERR_FUNC(EC_F_EC_GROUP_NEW_FROM_DATA), "ec_group_new_from_data"},
    {ERR_FUNC(EC_F_EC_GROUP_NEW_FROM_ECPARAMETERS),
     "EC_GROUP_new_from_ecparameters"},
    {ERR_FUNC(EC_F_EC_GROUP_NEW_FROM_ECPKPARAMETERS),
     "EC_GROUP_new_from_ecpkparameters"},
    {ERR_FUNC(EC_F_EC_GROUP_NEW_TYPE1CURVE), "EC_GROUP_new_type1curve"},
    {ERR_FUNC(EC_F_EC_GROUP_SET_CURVE_GF2M), "EC_GROUP_set_curve_GF2m"},
    {ERR_FUNC(EC_F_EC_GROUP_SET_CURVE_GFP), "EC_GROUP_set_curve_GFp"},
    {ERR_FUNC(EC_F_EC_GROUP_SET_GENERATOR), "EC_GROUP_set_generator"},
    {ERR_FUNC(EC_F_EC_KEY_CHECK_KEY), "EC_KEY_check_key"},
    {ERR_FUNC(EC_F_EC_KEY_COPY), "EC_KEY_copy"},
    {ERR_FUNC(EC_F_EC_KEY_GENERATE_KEY), "EC_KEY_generate_key"},
    {ERR_FUNC(EC_F_EC_KEY_NEW_METHOD), "EC_KEY_new_method"},
    {ERR_FUNC(EC_F_EC_KEY_OCT2PRIV), "EC_KEY_oct2priv"},
    {ERR_FUNC(EC_F_EC_KEY_PRINT_FP), "EC_KEY_print_fp"},
    {ERR_FUNC(EC_F_EC_KEY_PRIV2OCT), "EC_KEY_priv2oct"},
    {ERR_FUNC(EC_F_EC_KEY_SET_PUBLIC_KEY_AFFINE_COORDINATES),
     "EC_KEY_set_public_key_affine_coordinates"},
    {ERR_FUNC(EC_F_EC_KEY_SIMPLE_CHECK_KEY), "ec_key_simple_check_key"},
    {ERR_FUNC(EC_F_EC_KEY_SIMPLE_OCT2PRIV), "ec_key_simple_oct2priv"},
    {ERR_FUNC(EC_F_EC_KEY_SIMPLE_PRIV2OCT), "ec_key_simple_priv2oct"},
    {ERR_FUNC(EC_F_EC_POINTS_MAKE_AFFINE), "EC_POINTs_make_affine"},
    {ERR_FUNC(EC_F_EC_POINT_ADD), "EC_POINT_add"},
    {ERR_FUNC(EC_F_EC_POINT_CMP), "EC_POINT_cmp"},
    {ERR_FUNC(EC_F_EC_POINT_CMP_FPPOINT), "EC_POINT_cmp_fppoint"},
    {ERR_FUNC(EC_F_EC_POINT_COPY), "EC_POINT_copy"},
    {ERR_FUNC(EC_F_EC_POINT_DBL), "EC_POINT_dbl"},
    {ERR_FUNC(EC_F_EC_POINT_GET_AFFINE_COORDINATES_GF2M),
     "EC_POINT_get_affine_coordinates_GF2m"},
    {ERR_FUNC(EC_F_EC_POINT_GET_AFFINE_COORDINATES_GFP),
     "EC_POINT_get_affine_coordinates_GFp"},
    {ERR_FUNC(EC_F_EC_POINT_GET_JPROJECTIVE_COORDINATES_GFP),
     "EC_POINT_get_Jprojective_coordinates_GFp"},
    {ERR_FUNC(EC_F_EC_POINT_HASH2POINT), "EC_POINT_hash2point"},
    {ERR_FUNC(EC_F_EC_POINT_INVERT), "EC_POINT_invert"},
    {ERR_FUNC(EC_F_EC_POINT_IS_AT_INFINITY), "EC_POINT_is_at_infinity"},
    {ERR_FUNC(EC_F_EC_POINT_IS_ON_CURVE), "EC_POINT_is_on_curve"},
    {ERR_FUNC(EC_F_EC_POINT_MAKE_AFFINE), "EC_POINT_make_affine"},
    {ERR_FUNC(EC_F_EC_POINT_NEW), "EC_POINT_new"},
    {ERR_FUNC(EC_F_EC_POINT_OCT2POINT), "EC_POINT_oct2point"},
    {ERR_FUNC(EC_F_EC_POINT_POINT2OCT), "EC_POINT_point2oct"},
    {ERR_FUNC(EC_F_EC_POINT_SET_AFFINE_COORDINATES_GF2M),
     "EC_POINT_set_affine_coordinates_GF2m"},
    {ERR_FUNC(EC_F_EC_POINT_SET_AFFINE_COORDINATES_GFP),
     "EC_POINT_set_affine_coordinates_GFp"},
    {ERR_FUNC(EC_F_EC_POINT_SET_COMPRESSED_COORDINATES_GF2M),
     "EC_POINT_set_compressed_coordinates_GF2m"},
    {ERR_FUNC(EC_F_EC_POINT_SET_COMPRESSED_COORDINATES_GFP),
     "EC_POINT_set_compressed_coordinates_GFp"},
    {ERR_FUNC(EC_F_EC_POINT_SET_JPROJECTIVE_COORDINATES_GFP),
     "EC_POINT_set_Jprojective_coordinates_GFp"},
    {ERR_FUNC(EC_F_EC_POINT_SET_TO_INFINITY), "EC_POINT_set_to_infinity"},
    {ERR_FUNC(EC_F_EC_PRE_COMP_NEW), "ec_pre_comp_new"},
    {ERR_FUNC(EC_F_EC_TYPE1CURVE_TATE), "EC_type1curve_tate"},
    {ERR_FUNC(EC_F_EC_WNAF_MUL), "ec_wNAF_mul"},
    {ERR_FUNC(EC_F_EC_WNAF_PRECOMPUTE_MULT), "ec_wNAF_precompute_mult"},
    {ERR_FUNC(EC_F_I2D_ECIESPARAMETERS), "i2d_ECIESParameters"},
    {ERR_FUNC(EC_F_I2D_ECPARAMETERS), "i2d_ECParameters"},
    {ERR_FUNC(EC_F_I2D_ECPKPARAMETERS), "i2d_ECPKParameters"},
    {ERR_FUNC(EC_F_I2D_ECPRIVATEKEY), "i2d_ECPrivateKey"},
    {ERR_FUNC(EC_F_I2O_ECPUBLICKEY), "i2o_ECPublicKey"},
    {ERR_FUNC(EC_F_NISTP224_PRE_COMP_NEW), "nistp224_pre_comp_new"},
    {ERR_FUNC(EC_F_NISTP256_PRE_COMP_NEW), "nistp256_pre_comp_new"},
    {ERR_FUNC(EC_F_NISTP521_PRE_COMP_NEW), "nistp521_pre_comp_new"},
    {ERR_FUNC(EC_F_O2I_ECPUBLICKEY), "o2i_ECPublicKey"},
    {ERR_FUNC(EC_F_OLD_EC_PRIV_DECODE), "old_ec_priv_decode"},
    {ERR_FUNC(EC_F_OSSL_ECDH_COMPUTE_KEY), "ossl_ecdh_compute_key"},
    {ERR_FUNC(EC_F_OSSL_ECDSA_SIGN_SIG), "ossl_ecdsa_sign_sig"},
    {ERR_FUNC(EC_F_OSSL_ECDSA_VERIFY_SIG), "ossl_ecdsa_verify_sig"},
    {ERR_FUNC(EC_F_PKEY_ECX_DERIVE), "pkey_ecx_derive"},
    {ERR_FUNC(EC_F_PKEY_EC_CTRL), "pkey_ec_ctrl"},
    {ERR_FUNC(EC_F_PKEY_EC_CTRL_STR), "pkey_ec_ctrl_str"},
    {ERR_FUNC(EC_F_PKEY_EC_DECRYPT), "pkey_ec_decrypt"},
    {ERR_FUNC(EC_F_PKEY_EC_DERIVE), "pkey_ec_derive"},
    {ERR_FUNC(EC_F_PKEY_EC_ENCRYPT), "pkey_ec_encrypt"},
    {ERR_FUNC(EC_F_PKEY_EC_KEYGEN), "pkey_ec_keygen"},
    {ERR_FUNC(EC_F_PKEY_EC_PARAMGEN), "pkey_ec_paramgen"},
    {ERR_FUNC(EC_F_PKEY_EC_SIGN), "pkey_ec_sign"},
    {ERR_FUNC(EC_F_SM2_COMPUTE_ID_DIGEST), "SM2_compute_id_digest"},
    {ERR_FUNC(EC_F_SM2_COMPUTE_MESSAGE_DIGEST), "SM2_compute_message_digest"},
    {ERR_FUNC(EC_F_SM2_DO_ENCRYPT), "SM2_do_encrypt"},
    {ERR_FUNC(EC_F_SM2_GET_PUBLIC_KEY_DATA), "SM2_get_public_key_data"},
    {ERR_FUNC(EC_F_SM2_KAP_COMPUTE_KEY), "SM2_KAP_compute_key"},
    {ERR_FUNC(EC_F_SM2_KAP_CTX_INIT), "SM2_KAP_CTX_init"},
    {ERR_FUNC(EC_F_SM2_KAP_FINAL_CHECK), "SM2_KAP_final_check"},
    {ERR_FUNC(EC_F_SM2_KAP_PREPARE), "SM2_KAP_prepare"},
    {ERR_FUNC(EC_F_TYPE1CURVE_EVAL_LINE_TEXTBOOK),
     "type1curve_eval_line_textbook"},
    {ERR_FUNC(EC_F_TYPE1CURVE_EVAL_MILLER_TEXTBOOK),
     "type1curve_eval_miller_textbook"},
    {ERR_FUNC(EC_F_TYPE1CURVE_PHI), "type1curve_phi"},
    {0, NULL}
};

static ERR_STRING_DATA EC_str_reasons[] = {
    {ERR_REASON(EC_R_ASN1_ERROR), "asn1 error"},
    {ERR_REASON(EC_R_BAD_SIGNATURE), "bad signature"},
    {ERR_REASON(EC_R_BIGNUM_OUT_OF_RANGE), "bignum out of range"},
    {ERR_REASON(EC_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(EC_R_CMAC_FINAL_FAILURE), "cmac final failure"},
    {ERR_REASON(EC_R_CMAC_INIT_FAILURE), "cmac init failure"},
    {ERR_REASON(EC_R_CMAC_UPDATE_FAILURE), "cmac update failure"},
    {ERR_REASON(EC_R_COORDINATES_OUT_OF_RANGE), "coordinates out of range"},
    {ERR_REASON(EC_R_CURVE_DOES_NOT_SUPPORT_ECDH),
     "curve does not support ecdh"},
    {ERR_REASON(EC_R_CURVE_DOES_NOT_SUPPORT_SIGNING),
     "curve does not support signing"},
    {ERR_REASON(EC_R_D2I_ECPKPARAMETERS_FAILURE),
     "d2i ecpkparameters failure"},
    {ERR_REASON(EC_R_DECODE_ERROR), "decode error"},
    {ERR_REASON(EC_R_DECRYPT_FAILED), "decrypt failed"},
    {ERR_REASON(EC_R_DISCRIMINANT_IS_ZERO), "discriminant is zero"},
    {ERR_REASON(EC_R_ECDH_FAILED), "ecdh failed"},
    {ERR_REASON(EC_R_ECDH_FAILURE), "ecdh failure"},
    {ERR_REASON(EC_R_ECIES_DECRYPT_FAILED), "ecies decrypt failed"},
    {ERR_REASON(EC_R_ECIES_DECRYPT_INIT_FAILURE),
     "ecies decrypt init failure"},
    {ERR_REASON(EC_R_ECIES_ENCRYPT_FAILED), "ecies encrypt failed"},
    {ERR_REASON(EC_R_ECIES_VERIFY_MAC_FAILURE), "ecies verify mac failure"},
    {ERR_REASON(EC_R_EC_GROUP_NEW_BY_NAME_FAILURE),
     "ec group new by name failure"},
    {ERR_REASON(EC_R_ENCODE_ERROR), "encode error"},
    {ERR_REASON(EC_R_ENCRYPT_FAILED), "encrypt failed"},
    {ERR_REASON(EC_R_ENCRYPT_FAILURE), "encrypt failure"},
    {ERR_REASON(EC_R_ERROR), "error"},
    {ERR_REASON(EC_R_FIELD_TOO_LARGE), "field too large"},
    {ERR_REASON(EC_R_GEN_MAC_FAILED), "gen mac failed"},
    {ERR_REASON(EC_R_GET_PUBLIC_KEY_DATA_FAILURE),
     "get public key data failure"},
    {ERR_REASON(EC_R_GET_TYPE1CURVE_ZETA_FAILURE),
     "get type1curve zeta failure"},
    {ERR_REASON(EC_R_GF2M_NOT_SUPPORTED), "gf2m not supported"},
    {ERR_REASON(EC_R_GROUP2PKPARAMETERS_FAILURE),
     "group2pkparameters failure"},
    {ERR_REASON(EC_R_GROUP_MISMATCH), "group mismatch"},
    {ERR_REASON(EC_R_HMAC_FAILURE), "hmac failure"},
    {ERR_REASON(EC_R_I2D_ECPKPARAMETERS_FAILURE),
     "i2d ecpkparameters failure"},
    {ERR_REASON(EC_R_INCOMPATIBLE_OBJECTS), "incompatible objects"},
    {ERR_REASON(EC_R_INVALID_ARGUMENT), "invalid argument"},
    {ERR_REASON(EC_R_INVALID_COMPRESSED_POINT), "invalid compressed point"},
    {ERR_REASON(EC_R_INVALID_COMPRESSION_BIT), "invalid compression bit"},
    {ERR_REASON(EC_R_INVALID_CURVE), "invalid curve"},
    {ERR_REASON(EC_R_INVALID_DIGEST), "invalid digest"},
    {ERR_REASON(EC_R_INVALID_DIGEST_ALGOR), "invalid digest algor"},
    {ERR_REASON(EC_R_INVALID_DIGEST_TYPE), "invalid digest type"},
    {ERR_REASON(EC_R_INVALID_ECIES_CIPHERTEXT), "invalid ecies ciphertext"},
    {ERR_REASON(EC_R_INVALID_ECIES_PARAMETERS), "invalid ecies parameters"},
    {ERR_REASON(EC_R_INVALID_ECIES_PARAMS), "invalid ecies params"},
    {ERR_REASON(EC_R_INVALID_EC_ENCRYPT_PARAM), "invalid ec encrypt param"},
    {ERR_REASON(EC_R_INVALID_EC_SCHEME), "invalid ec scheme"},
    {ERR_REASON(EC_R_INVALID_ENCODING), "invalid encoding"},
    {ERR_REASON(EC_R_INVALID_ENC_PARAM), "invalid enc param"},
    {ERR_REASON(EC_R_INVALID_ENC_TYPE), "invalid enc type"},
    {ERR_REASON(EC_R_INVALID_FIELD), "invalid field"},
    {ERR_REASON(EC_R_INVALID_FORM), "invalid form"},
    {ERR_REASON(EC_R_INVALID_GROUP_ORDER), "invalid group order"},
    {ERR_REASON(EC_R_INVALID_ID_LENGTH), "invalid id length"},
    {ERR_REASON(EC_R_INVALID_INPUT_LENGTH), "invalid input length"},
    {ERR_REASON(EC_R_INVALID_KDF_MD), "invalid kdf md"},
    {ERR_REASON(EC_R_INVALID_KEY), "invalid key"},
    {ERR_REASON(EC_R_INVALID_MD), "invalid md"},
    {ERR_REASON(EC_R_INVALID_OUTPUT_LENGTH), "invalid output length"},
    {ERR_REASON(EC_R_INVALID_PEER_KEY), "invalid peer key"},
    {ERR_REASON(EC_R_INVALID_PENTANOMIAL_BASIS), "invalid pentanomial basis"},
    {ERR_REASON(EC_R_INVALID_PRIVATE_KEY), "invalid private key"},
    {ERR_REASON(EC_R_INVALID_SIGNER_ID), "invalid signer id"},
    {ERR_REASON(EC_R_INVALID_SM2_ID), "invalid sm2 id"},
    {ERR_REASON(EC_R_INVALID_SM2_KAP_CHECKSUM_LENGTH),
     "invalid sm2 kap checksum length"},
    {ERR_REASON(EC_R_INVALID_SM2_KAP_CHECKSUM_VALUE),
     "invalid sm2 kap checksum value"},
    {ERR_REASON(EC_R_INVALID_TRINOMIAL_BASIS), "invalid trinomial basis"},
    {ERR_REASON(EC_R_INVALID_TYPE1CURVE), "invalid type1curve"},
    {ERR_REASON(EC_R_INVALID_TYPE1_CURVE), "invalid type1 curve"},
    {ERR_REASON(EC_R_INVLID_TYPE1CURVE), "invlid type1curve"},
    {ERR_REASON(EC_R_KDF_PARAMETER_ERROR), "kdf parameter error"},
    {ERR_REASON(EC_R_KEYS_NOT_SET), "keys not set"},
    {ERR_REASON(EC_R_MISSING_PARAMETERS), "missing parameters"},
    {ERR_REASON(EC_R_MISSING_PRIVATE_KEY), "missing private key"},
    {ERR_REASON(EC_R_NEED_NEW_SETUP_VALUES), "need new setup values"},
    {ERR_REASON(EC_R_NOT_A_NIST_PRIME), "not a nist prime"},
    {ERR_REASON(EC_R_NOT_IMPLEMENTED), "not implemented"},
    {ERR_REASON(EC_R_NOT_INITIALIZED), "not initialized"},
    {ERR_REASON(EC_R_NO_PARAMETERS_SET), "no parameters set"},
    {ERR_REASON(EC_R_NO_PRIVATE_VALUE), "no private value"},
    {ERR_REASON(EC_R_OPERATION_NOT_SUPPORTED), "operation not supported"},
    {ERR_REASON(EC_R_PASSED_NULL_PARAMETER), "passed null parameter"},
    {ERR_REASON(EC_R_PEER_KEY_ERROR), "peer key error"},
    {ERR_REASON(EC_R_PKPARAMETERS2GROUP_FAILURE),
     "pkparameters2group failure"},
    {ERR_REASON(EC_R_POINT_ARITHMETIC_FAILURE), "point arithmetic failure"},
    {ERR_REASON(EC_R_POINT_AT_INFINITY), "point at infinity"},
    {ERR_REASON(EC_R_POINT_IS_NOT_ON_CURVE), "point is not on curve"},
    {ERR_REASON(EC_R_RANDOM_NUMBER_GENERATION_FAILED),
     "random number generation failed"},
    {ERR_REASON(EC_R_SHARED_INFO_ERROR), "shared info error"},
    {ERR_REASON(EC_R_SLOT_FULL), "slot full"},
    {ERR_REASON(EC_R_SM2_DECRYPT_FAILED), "sm2 decrypt failed"},
    {ERR_REASON(EC_R_SM2_ENCRYPT_FAILED), "sm2 encrypt failed"},
    {ERR_REASON(EC_R_SM2_KAP_NOT_INITED), "sm2 kap not inited"},
    {ERR_REASON(EC_R_UNDEFINED_GENERATOR), "undefined generator"},
    {ERR_REASON(EC_R_UNDEFINED_ORDER), "undefined order"},
    {ERR_REASON(EC_R_UNKNOWN_GROUP), "unknown group"},
    {ERR_REASON(EC_R_UNKNOWN_ORDER), "unknown order"},
    {ERR_REASON(EC_R_UNSUPPORTED_FIELD), "unsupported field"},
    {ERR_REASON(EC_R_WRONG_CURVE_PARAMETERS), "wrong curve parameters"},
    {ERR_REASON(EC_R_WRONG_ORDER), "wrong order"},
    {0, NULL}
};

#endif

int ERR_load_EC_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(EC_str_functs[0].error) == NULL) {
        ERR_load_strings(0, EC_str_functs);
        ERR_load_strings(0, EC_str_reasons);
    }
#endif
    return 1;
}
