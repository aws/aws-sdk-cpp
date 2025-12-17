/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payment-cryptography-data/model/RandomKeySendVariantMask.h>

using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {
namespace RandomKeySendVariantMaskMapper {

static const int VARIANT_MASK_82C0_HASH = HashingUtils::HashString("VARIANT_MASK_82C0");
static const int VARIANT_MASK_82_HASH = HashingUtils::HashString("VARIANT_MASK_82");

RandomKeySendVariantMask GetRandomKeySendVariantMaskForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VARIANT_MASK_82C0_HASH) {
    return RandomKeySendVariantMask::VARIANT_MASK_82C0;
  } else if (hashCode == VARIANT_MASK_82_HASH) {
    return RandomKeySendVariantMask::VARIANT_MASK_82;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RandomKeySendVariantMask>(hashCode);
  }

  return RandomKeySendVariantMask::NOT_SET;
}

Aws::String GetNameForRandomKeySendVariantMask(RandomKeySendVariantMask enumValue) {
  switch (enumValue) {
    case RandomKeySendVariantMask::NOT_SET:
      return {};
    case RandomKeySendVariantMask::VARIANT_MASK_82C0:
      return "VARIANT_MASK_82C0";
    case RandomKeySendVariantMask::VARIANT_MASK_82:
      return "VARIANT_MASK_82";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RandomKeySendVariantMaskMapper
}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
