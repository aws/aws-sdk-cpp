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
  enum class KeyDerivationFunction
  {
    NOT_SET,
    NIST_SP800,
    ANSI_X963
  };

namespace KeyDerivationFunctionMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyDerivationFunction GetKeyDerivationFunctionForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyDerivationFunction(KeyDerivationFunction value);
} // namespace KeyDerivationFunctionMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
