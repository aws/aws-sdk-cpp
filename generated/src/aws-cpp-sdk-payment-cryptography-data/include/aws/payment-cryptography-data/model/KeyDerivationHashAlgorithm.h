/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PaymentCryptographyData
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
AWS_PAYMENTCRYPTOGRAPHYDATA_API KeyDerivationHashAlgorithm GetKeyDerivationHashAlgorithmForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value);
} // namespace KeyDerivationHashAlgorithmMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
