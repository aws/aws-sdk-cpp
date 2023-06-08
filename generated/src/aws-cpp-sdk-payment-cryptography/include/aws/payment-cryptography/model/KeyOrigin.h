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
  enum class KeyOrigin
  {
    NOT_SET,
    EXTERNAL,
    AWS_PAYMENT_CRYPTOGRAPHY
  };

namespace KeyOriginMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyOrigin GetKeyOriginForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyOrigin(KeyOrigin value);
} // namespace KeyOriginMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
