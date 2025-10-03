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
  enum class WrappedKeyMaterialFormat
  {
    NOT_SET,
    KEY_CRYPTOGRAM,
    TR31_KEY_BLOCK,
    TR34_KEY_BLOCK
  };

namespace WrappedKeyMaterialFormatMapper
{
AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKeyMaterialFormat GetWrappedKeyMaterialFormatForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForWrappedKeyMaterialFormat(WrappedKeyMaterialFormat value);
} // namespace WrappedKeyMaterialFormatMapper
} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
