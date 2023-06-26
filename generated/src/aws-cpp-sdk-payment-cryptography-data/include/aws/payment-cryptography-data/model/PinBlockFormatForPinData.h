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
  enum class PinBlockFormatForPinData
  {
    NOT_SET,
    ISO_FORMAT_0,
    ISO_FORMAT_3
  };

namespace PinBlockFormatForPinDataMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API PinBlockFormatForPinData GetPinBlockFormatForPinDataForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForPinBlockFormatForPinData(PinBlockFormatForPinData value);
} // namespace PinBlockFormatForPinDataMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
