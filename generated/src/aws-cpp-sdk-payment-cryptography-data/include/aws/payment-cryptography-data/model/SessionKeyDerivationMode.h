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
  enum class SessionKeyDerivationMode
  {
    NOT_SET,
    EMV_COMMON_SESSION_KEY,
    EMV2000,
    AMEX,
    MASTERCARD_SESSION_KEY,
    VISA
  };

namespace SessionKeyDerivationModeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivationMode GetSessionKeyDerivationModeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForSessionKeyDerivationMode(SessionKeyDerivationMode value);
} // namespace SessionKeyDerivationModeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
