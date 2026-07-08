/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationSortField.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace RevenueAttributionAllocationSortFieldMapper {

static const int EffectiveFrom_HASH = HashingUtils::HashString("EffectiveFrom");

RevenueAttributionAllocationSortField GetRevenueAttributionAllocationSortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EffectiveFrom_HASH) {
    return RevenueAttributionAllocationSortField::EffectiveFrom;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevenueAttributionAllocationSortField>(hashCode);
  }

  return RevenueAttributionAllocationSortField::NOT_SET;
}

Aws::String GetNameForRevenueAttributionAllocationSortField(RevenueAttributionAllocationSortField enumValue) {
  switch (enumValue) {
    case RevenueAttributionAllocationSortField::NOT_SET:
      return {};
    case RevenueAttributionAllocationSortField::EffectiveFrom:
      return "EffectiveFrom";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevenueAttributionAllocationSortFieldMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
