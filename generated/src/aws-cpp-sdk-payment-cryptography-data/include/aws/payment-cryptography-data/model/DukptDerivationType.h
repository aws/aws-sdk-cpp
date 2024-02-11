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
  enum class DukptDerivationType
  {
    NOT_SET,
    TDES_2KEY,
    TDES_3KEY,
    AES_128,
    AES_192,
    AES_256
  };

namespace DukptDerivationTypeMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptDerivationType GetDukptDerivationTypeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForDukptDerivationType(DukptDerivationType value);
} // namespace DukptDerivationTypeMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
