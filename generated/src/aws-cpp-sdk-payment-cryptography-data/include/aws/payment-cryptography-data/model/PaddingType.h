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
  enum class PaddingType
  {
    NOT_SET,
    PKCS1,
    OAEP_SHA1,
    OAEP_SHA256,
    OAEP_SHA512
  };

namespace PaddingTypeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API PaddingType GetPaddingTypeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForPaddingType(PaddingType value);
} // namespace PaddingTypeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
