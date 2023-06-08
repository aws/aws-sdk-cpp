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
  enum class VerificationFailedReason
  {
    NOT_SET,
    INVALID_MAC,
    INVALID_PIN,
    INVALID_VALIDATION_DATA,
    INVALID_AUTH_REQUEST_CRYPTOGRAM
  };

namespace VerificationFailedReasonMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API VerificationFailedReason GetVerificationFailedReasonForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForVerificationFailedReason(VerificationFailedReason value);
} // namespace VerificationFailedReasonMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
