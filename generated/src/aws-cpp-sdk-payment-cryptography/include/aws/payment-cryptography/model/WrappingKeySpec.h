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
  enum class WrappingKeySpec
  {
    NOT_SET,
    RSA_OAEP_SHA_256,
    RSA_OAEP_SHA_512
  };

namespace WrappingKeySpecMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API WrappingKeySpec GetWrappingKeySpecForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForWrappingKeySpec(WrappingKeySpec value);
} // namespace WrappingKeySpecMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
