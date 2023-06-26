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
  enum class MajorKeyDerivationMode
  {
    NOT_SET,
    EMV_OPTION_A,
    EMV_OPTION_B
  };

namespace MajorKeyDerivationModeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API MajorKeyDerivationMode GetMajorKeyDerivationModeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForMajorKeyDerivationMode(MajorKeyDerivationMode value);
} // namespace MajorKeyDerivationModeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
