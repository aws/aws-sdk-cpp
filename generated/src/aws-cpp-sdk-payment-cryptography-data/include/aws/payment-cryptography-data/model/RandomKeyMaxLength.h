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
enum class RandomKeyMaxLength { NOT_SET, BYTES_8, BYTES_16, BYTES_24 };

namespace RandomKeyMaxLengthMapper {
AWS_PAYMENTCRYPTOGRAPHYDATA_API RandomKeyMaxLength GetRandomKeyMaxLengthForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForRandomKeyMaxLength(RandomKeyMaxLength value);
}  // namespace RandomKeyMaxLengthMapper
}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
