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
enum class KeyClass { NOT_SET, SYMMETRIC_KEY, ASYMMETRIC_KEY_PAIR, PRIVATE_KEY, PUBLIC_KEY };

namespace KeyClassMapper {
AWS_PAYMENTCRYPTOGRAPHY_API KeyClass GetKeyClassForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyClass(KeyClass value);
}  // namespace KeyClassMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
