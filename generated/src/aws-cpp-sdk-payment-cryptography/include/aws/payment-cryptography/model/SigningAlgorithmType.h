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
  enum class SigningAlgorithmType
  {
    NOT_SET,
    SHA224,
    SHA256,
    SHA384,
    SHA512
  };

namespace SigningAlgorithmTypeMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API SigningAlgorithmType GetSigningAlgorithmTypeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForSigningAlgorithmType(SigningAlgorithmType value);
} // namespace SigningAlgorithmTypeMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
