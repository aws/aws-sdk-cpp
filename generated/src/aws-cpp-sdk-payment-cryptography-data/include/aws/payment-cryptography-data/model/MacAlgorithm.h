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
  enum class MacAlgorithm
  {
    NOT_SET,
    ISO9797_ALGORITHM1,
    ISO9797_ALGORITHM3,
    CMAC,
    HMAC_SHA224,
    HMAC_SHA256,
    HMAC_SHA384,
    HMAC_SHA512
  };

namespace MacAlgorithmMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithm GetMacAlgorithmForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForMacAlgorithm(MacAlgorithm value);
} // namespace MacAlgorithmMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
