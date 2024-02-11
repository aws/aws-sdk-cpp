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
  enum class EncryptionMode
  {
    NOT_SET,
    ECB,
    CBC,
    CFB,
    CFB1,
    CFB8,
    CFB64,
    CFB128,
    OFB
  };

namespace EncryptionModeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptionMode GetEncryptionModeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForEncryptionMode(EncryptionMode value);
} // namespace EncryptionModeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
