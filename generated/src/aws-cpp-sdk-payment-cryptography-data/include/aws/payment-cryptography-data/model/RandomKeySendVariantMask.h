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
enum class RandomKeySendVariantMask { NOT_SET, VARIANT_MASK_82C0, VARIANT_MASK_82 };

namespace RandomKeySendVariantMaskMapper {
AWS_PAYMENTCRYPTOGRAPHYDATA_API RandomKeySendVariantMask GetRandomKeySendVariantMaskForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String GetNameForRandomKeySendVariantMask(RandomKeySendVariantMask value);
}  // namespace RandomKeySendVariantMaskMapper
}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
