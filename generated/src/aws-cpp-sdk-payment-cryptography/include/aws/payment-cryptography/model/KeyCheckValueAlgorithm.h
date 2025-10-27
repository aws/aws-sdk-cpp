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
enum class KeyCheckValueAlgorithm { NOT_SET, CMAC, ANSI_X9_24, HMAC, SHA_1 };

namespace KeyCheckValueAlgorithmMapper {
AWS_PAYMENTCRYPTOGRAPHY_API KeyCheckValueAlgorithm GetKeyCheckValueAlgorithmForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value);
}  // namespace KeyCheckValueAlgorithmMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
