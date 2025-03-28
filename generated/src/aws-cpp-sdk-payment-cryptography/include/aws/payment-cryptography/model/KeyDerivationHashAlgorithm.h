/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{
  enum class KeyDerivationHashAlgorithm
  {
    NOT_SET,
    SHA_256,
    SHA_384,
    SHA_512
  };

namespace KeyDerivationHashAlgorithmMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyDerivationHashAlgorithm GetKeyDerivationHashAlgorithmForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value);
} // namespace KeyDerivationHashAlgorithmMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
