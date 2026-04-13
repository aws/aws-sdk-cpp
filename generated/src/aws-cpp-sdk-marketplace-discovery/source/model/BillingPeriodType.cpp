/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/BillingPeriodType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace BillingPeriodTypeMapper {

static const int Monthly_HASH = HashingUtils::HashString("Monthly");

BillingPeriodType GetBillingPeriodTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Monthly_HASH) {
    return BillingPeriodType::Monthly;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingPeriodType>(hashCode);
  }

  return BillingPeriodType::NOT_SET;
}

Aws::String GetNameForBillingPeriodType(BillingPeriodType enumValue) {
  switch (enumValue) {
    case BillingPeriodType::NOT_SET:
      return {};
    case BillingPeriodType::Monthly:
      return "Monthly";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingPeriodTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
