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
  enum class KeyExportability
  {
    NOT_SET,
    EXPORTABLE,
    NON_EXPORTABLE,
    SENSITIVE
  };

namespace KeyExportabilityMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyExportability GetKeyExportabilityForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyExportability(KeyExportability value);
} // namespace KeyExportabilityMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
