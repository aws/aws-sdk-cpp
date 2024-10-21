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
  enum class PinBlockFormatForEmvPinChange
  {
    NOT_SET,
    ISO_FORMAT_0,
    ISO_FORMAT_1,
    ISO_FORMAT_3
  };

namespace PinBlockFormatForEmvPinChangeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API PinBlockFormatForEmvPinChange GetPinBlockFormatForEmvPinChangeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForPinBlockFormatForEmvPinChange(PinBlockFormatForEmvPinChange value);
} // namespace PinBlockFormatForEmvPinChangeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
