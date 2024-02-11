/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PaymentCryptography
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
AWS_PAYMENTCRYPTOGRAPHY_API WrappedKeyMaterialFormat GetWrappedKeyMaterialFormatForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForWrappedKeyMaterialFormat(WrappedKeyMaterialFormat value);
} // namespace WrappedKeyMaterialFormatMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
