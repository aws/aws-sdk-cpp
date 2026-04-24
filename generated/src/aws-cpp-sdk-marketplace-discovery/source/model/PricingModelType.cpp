/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/PricingModelType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace PricingModelTypeMapper {

static const int USAGE_HASH = HashingUtils::HashString("USAGE");
static const int CONTRACT_HASH = HashingUtils::HashString("CONTRACT");
static const int BYOL_HASH = HashingUtils::HashString("BYOL");
static const int FREE_HASH = HashingUtils::HashString("FREE");

PricingModelType GetPricingModelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USAGE_HASH) {
    return PricingModelType::USAGE;
  } else if (hashCode == CONTRACT_HASH) {
    return PricingModelType::CONTRACT;
  } else if (hashCode == BYOL_HASH) {
    return PricingModelType::BYOL;
  } else if (hashCode == FREE_HASH) {
    return PricingModelType::FREE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PricingModelType>(hashCode);
  }

  return PricingModelType::NOT_SET;
}

Aws::String GetNameForPricingModelType(PricingModelType enumValue) {
  switch (enumValue) {
    case PricingModelType::NOT_SET:
      return {};
    case PricingModelType::USAGE:
      return "USAGE";
    case PricingModelType::CONTRACT:
      return "CONTRACT";
    case PricingModelType::BYOL:
      return "BYOL";
    case PricingModelType::FREE:
      return "FREE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PricingModelTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
