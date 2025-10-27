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
enum class MultiRegionKeyType { NOT_SET, PRIMARY, REPLICA };

namespace MultiRegionKeyTypeMapper {
AWS_PAYMENTCRYPTOGRAPHY_API MultiRegionKeyType GetMultiRegionKeyTypeForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForMultiRegionKeyType(MultiRegionKeyType value);
}  // namespace MultiRegionKeyTypeMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
