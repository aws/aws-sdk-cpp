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
  enum class EmvMajorKeyDerivationMode
  {
    NOT_SET,
    EMV_OPTION_A,
    EMV_OPTION_B
  };

namespace EmvMajorKeyDerivationModeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvMajorKeyDerivationMode GetEmvMajorKeyDerivationModeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForEmvMajorKeyDerivationMode(EmvMajorKeyDerivationMode value);
} // namespace EmvMajorKeyDerivationModeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
