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
  enum class PinBlockLengthPosition
  {
    NOT_SET,
    NONE,
    FRONT_OF_PIN_BLOCK
  };

namespace PinBlockLengthPositionMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API PinBlockLengthPosition GetPinBlockLengthPositionForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForPinBlockLengthPosition(PinBlockLengthPosition value);
} // namespace PinBlockLengthPositionMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
