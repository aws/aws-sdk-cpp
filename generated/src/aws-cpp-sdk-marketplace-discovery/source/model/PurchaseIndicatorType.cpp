/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/PurchaseIndicatorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace PurchaseIndicatorTypeMapper {

static const int NOT_AVAILABLE_FOR_SUBSCRIPTION_HASH = HashingUtils::HashString("NOT_AVAILABLE_FOR_SUBSCRIPTION");
static const int AVAILABLE_FOR_USE_WITHOUT_SUBSCRIPTION_HASH = HashingUtils::HashString("AVAILABLE_FOR_USE_WITHOUT_SUBSCRIPTION");

PurchaseIndicatorType GetPurchaseIndicatorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_AVAILABLE_FOR_SUBSCRIPTION_HASH) {
    return PurchaseIndicatorType::NOT_AVAILABLE_FOR_SUBSCRIPTION;
  } else if (hashCode == AVAILABLE_FOR_USE_WITHOUT_SUBSCRIPTION_HASH) {
    return PurchaseIndicatorType::AVAILABLE_FOR_USE_WITHOUT_SUBSCRIPTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PurchaseIndicatorType>(hashCode);
  }

  return PurchaseIndicatorType::NOT_SET;
}

Aws::String GetNameForPurchaseIndicatorType(PurchaseIndicatorType enumValue) {
  switch (enumValue) {
    case PurchaseIndicatorType::NOT_SET:
      return {};
    case PurchaseIndicatorType::NOT_AVAILABLE_FOR_SUBSCRIPTION:
      return "NOT_AVAILABLE_FOR_SUBSCRIPTION";
    case PurchaseIndicatorType::AVAILABLE_FOR_USE_WITHOUT_SUBSCRIPTION:
      return "AVAILABLE_FOR_USE_WITHOUT_SUBSCRIPTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PurchaseIndicatorTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
