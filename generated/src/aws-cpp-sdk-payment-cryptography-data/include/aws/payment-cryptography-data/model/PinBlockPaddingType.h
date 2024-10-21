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
  enum class PinBlockPaddingType
  {
    NOT_SET,
    NO_PADDING,
    ISO_IEC_7816_4
  };

namespace PinBlockPaddingTypeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API PinBlockPaddingType GetPinBlockPaddingTypeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForPinBlockPaddingType(PinBlockPaddingType value);
} // namespace PinBlockPaddingTypeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
