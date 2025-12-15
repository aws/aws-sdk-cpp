/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/utils/Array.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>

#include <cstddef>

namespace Aws
{
    namespace S3Encryption
    {
        constexpr size_t MESSAGE_ID_BYTES = 28;
        constexpr size_t COMMITMENT_KEY_BYTES = 28;
        constexpr size_t ENCRYPTION_KEY_BYTES = 32;

        extern const char *ENCRYPTION_KEY_INFO;
        extern const char *COMMITMENT_KEY_INFO;
        extern const size_t ENCRYPTION_KEY_INFO_LEN;
        extern const size_t COMMITMENT_KEY_INFO_LEN;

        /**
        Derive an encryption key from a given data key and message ID using HKDF-SHA512.
        @param data_key Input data key (symmetric key material).
        @param message_id Unique per-message identifier.
        @param output Output buffer to receive the derived key. Must be pre-sized appropriately.
        @return true on success, false on failure.
        */
        AWS_S3ENCRYPTION_API bool derive_encryption_key(const Aws::Utils::CryptoBuffer &data_key, const Aws::Utils::CryptoBuffer &message_id,
                           Aws::Utils::CryptoBuffer &output);


        /**
        Derive an encryption key from a given data key and message ID using HKDF-SHA512.
        @param data_key Input data key (symmetric key material).
        @param message_id Unique per-message identifier.
        @param output Output buffer to receive the derived key. Must be pre-sized appropriately.
        @return true on success, false on failure.
        */
        AWS_S3ENCRYPTION_API bool derive_commitment_key(const Aws::Utils::CryptoBuffer &data_key, const Aws::Utils::CryptoBuffer &message_id,
                           Aws::Utils::CryptoBuffer &output);

        // Compare bytes for equality, in time O(len) regardless of the contents of x and y
        // Returns false if the buffers have different lengths
        AWS_S3ENCRYPTION_API bool constant_time_equal(const Aws::Utils::CryptoBuffer& x, const Aws::Utils::CryptoBuffer& y);
    }
}
