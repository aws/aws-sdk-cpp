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
  enum class DukptEncryptionMode
  {
    NOT_SET,
    ECB,
    CBC
  };

namespace DukptEncryptionModeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptEncryptionMode GetDukptEncryptionModeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForDukptEncryptionMode(DukptEncryptionMode value);
} // namespace DukptEncryptionModeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
