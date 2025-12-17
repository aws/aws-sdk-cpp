/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>

namespace Aws {
namespace PaymentCryptography {
namespace Model {
enum class As2805KeyVariant {
  NOT_SET,
  TERMINAL_MAJOR_KEY_VARIANT_00,
  PIN_ENCRYPTION_KEY_VARIANT_28,
  MESSAGE_AUTHENTICATION_KEY_VARIANT_24,
  DATA_ENCRYPTION_KEY_VARIANT_22
};

namespace As2805KeyVariantMapper {
AWS_PAYMENTCRYPTOGRAPHY_API As2805KeyVariant GetAs2805KeyVariantForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForAs2805KeyVariant(As2805KeyVariant value);
}  // namespace As2805KeyVariantMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
