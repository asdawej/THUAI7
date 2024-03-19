/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2023 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_RANDERR_H
#define OPENSSL_RANDERR_H
#pragma once

#include <openssl/opensslconf.h>
#include <openssl/symhacks.h>
#include <openssl/cryptoerr_legacy.h>

/*
 * RAND reason codes.
 */
#define RAND_R_ADDITIONAL_INPUT_TOO_LONG 102
#define RAND_R_ALREADY_INSTANTIATED 103
#define RAND_R_ARGUMENT_OUT_OF_RANGE 105
#define RAND_R_CANNOT_OPEN_FILE 121
#define RAND_R_DRBG_ALREADY_INITIALIZED 129
#define RAND_R_DRBG_NOT_INITIALISED 104
#define RAND_R_ENTROPY_INPUT_TOO_LONG 106
#define RAND_R_ENTROPY_OUT_OF_RANGE 124
#define RAND_R_ERROR_ENTROPY_POOL_WAS_IGNORED 127
#define RAND_R_ERROR_INITIALISING_DRBG 107
#define RAND_R_ERROR_INSTANTIATING_DRBG 108
#define RAND_R_ERROR_RETRIEVING_ADDITIONAL_INPUT 109
#define RAND_R_ERROR_RETRIEVING_ENTROPY 110
#define RAND_R_ERROR_RETRIEVING_NONCE 111
#define RAND_R_FAILED_TO_CREATE_LOCK 126
#define RAND_R_FUNC_NOT_IMPLEMENTED 101
#define RAND_R_FWRITE_ERROR 123
#define RAND_R_GENERATE_ERROR 112
#define RAND_R_INSUFFICIENT_DRBG_STRENGTH 139
#define RAND_R_INTERNAL_ERROR 113
#define RAND_R_INVALID_PROPERTY_QUERY 137
#define RAND_R_IN_ERROR_STATE 114
#define RAND_R_NOT_A_REGULAR_FILE 122
#define RAND_R_NOT_INSTANTIATED 115
#define RAND_R_NO_DRBG_IMPLEMENTATION_SELECTED 128
#define RAND_R_PARENT_LOCKING_NOT_ENABLED 130
#define RAND_R_PARENT_STRENGTH_TOO_WEAK 131
#define RAND_R_PERSONALISATION_STRING_TOO_LONG 116
#define RAND_R_PREDICTION_RESISTANCE_NOT_SUPPORTED 133
#define RAND_R_PRNG_NOT_SEEDED 100
#define RAND_R_RANDOM_POOL_OVERFLOW 125
#define RAND_R_RANDOM_POOL_UNDERFLOW 134
#define RAND_R_REQUEST_TOO_LARGE_FOR_DRBG 117
#define RAND_R_RESEED_ERROR 118
#define RAND_R_SELFTEST_FAILURE 119
#define RAND_R_TOO_LITTLE_NONCE_REQUESTED 135
#define RAND_R_TOO_MUCH_NONCE_REQUESTED 136
#define RAND_R_UNABLE_TO_CREATE_DRBG 143
#define RAND_R_UNABLE_TO_FETCH_DRBG 144
#define RAND_R_UNABLE_TO_GET_PARENT_RESEED_PROP_COUNTER 141
#define RAND_R_UNABLE_TO_GET_PARENT_STRENGTH 138
#define RAND_R_UNABLE_TO_LOCK_PARENT 140
#define RAND_R_UNSUPPORTED_DRBG_FLAGS 132
#define RAND_R_UNSUPPORTED_DRBG_TYPE 120

#endif
