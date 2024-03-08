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
  enum class KeyMaterialType
  {
    NOT_SET,
    TR34_KEY_BLOCK,
    TR31_KEY_BLOCK,
    ROOT_PUBLIC_KEY_CERTIFICATE,
    TRUSTED_PUBLIC_KEY_CERTIFICATE,
    KEY_CRYPTOGRAM
  };

namespace KeyMaterialTypeMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyMaterialType GetKeyMaterialTypeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyMaterialType(KeyMaterialType value);
} // namespace KeyMaterialTypeMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
