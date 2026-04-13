/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/PricingUnitType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace PricingUnitTypeMapper {

static const int USERS_HASH = HashingUtils::HashString("USERS");
static const int HOSTS_HASH = HashingUtils::HashString("HOSTS");
static const int BANDWIDTH_HASH = HashingUtils::HashString("BANDWIDTH");
static const int DATA_HASH = HashingUtils::HashString("DATA");
static const int TIERS_HASH = HashingUtils::HashString("TIERS");
static const int REQUESTS_HASH = HashingUtils::HashString("REQUESTS");
static const int UNITS_HASH = HashingUtils::HashString("UNITS");

PricingUnitType GetPricingUnitTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USERS_HASH) {
    return PricingUnitType::USERS;
  } else if (hashCode == HOSTS_HASH) {
    return PricingUnitType::HOSTS;
  } else if (hashCode == BANDWIDTH_HASH) {
    return PricingUnitType::BANDWIDTH;
  } else if (hashCode == DATA_HASH) {
    return PricingUnitType::DATA;
  } else if (hashCode == TIERS_HASH) {
    return PricingUnitType::TIERS;
  } else if (hashCode == REQUESTS_HASH) {
    return PricingUnitType::REQUESTS;
  } else if (hashCode == UNITS_HASH) {
    return PricingUnitType::UNITS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PricingUnitType>(hashCode);
  }

  return PricingUnitType::NOT_SET;
}

Aws::String GetNameForPricingUnitType(PricingUnitType enumValue) {
  switch (enumValue) {
    case PricingUnitType::NOT_SET:
      return {};
    case PricingUnitType::USERS:
      return "USERS";
    case PricingUnitType::HOSTS:
      return "HOSTS";
    case PricingUnitType::BANDWIDTH:
      return "BANDWIDTH";
    case PricingUnitType::DATA:
      return "DATA";
    case PricingUnitType::TIERS:
      return "TIERS";
    case PricingUnitType::REQUESTS:
      return "REQUESTS";
    case PricingUnitType::UNITS:
      return "UNITS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PricingUnitTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
