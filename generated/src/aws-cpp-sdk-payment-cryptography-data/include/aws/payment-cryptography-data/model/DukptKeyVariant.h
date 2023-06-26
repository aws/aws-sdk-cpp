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
  enum class DukptKeyVariant
  {
    NOT_SET,
    BIDIRECTIONAL,
    REQUEST,
    RESPONSE
  };

namespace DukptKeyVariantMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptKeyVariant GetDukptKeyVariantForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForDukptKeyVariant(DukptKeyVariant value);
} // namespace DukptKeyVariantMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
