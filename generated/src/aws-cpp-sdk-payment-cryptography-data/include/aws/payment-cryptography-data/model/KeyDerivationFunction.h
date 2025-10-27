/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {
enum class KeyDerivationFunction { NOT_SET, NIST_SP800, ANSI_X963 };

namespace KeyDerivationFunctionMapper {
AWS_PAYMENTCRYPTOGRAPHYDATA_API KeyDerivationFunction GetKeyDerivationFunctionForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForKeyDerivationFunction(KeyDerivationFunction value);
}  // namespace KeyDerivationFunctionMapper
}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
