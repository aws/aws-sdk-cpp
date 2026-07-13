/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace RevenueAttributionAllocationActionMapper {

static const int CREATE_HASH = HashingUtils::HashString("CREATE");
static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");

RevenueAttributionAllocationAction GetRevenueAttributionAllocationActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_HASH) {
    return RevenueAttributionAllocationAction::CREATE;
  } else if (hashCode == UPDATE_HASH) {
    return RevenueAttributionAllocationAction::UPDATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevenueAttributionAllocationAction>(hashCode);
  }

  return RevenueAttributionAllocationAction::NOT_SET;
}

Aws::String GetNameForRevenueAttributionAllocationAction(RevenueAttributionAllocationAction enumValue) {
  switch (enumValue) {
    case RevenueAttributionAllocationAction::NOT_SET:
      return {};
    case RevenueAttributionAllocationAction::CREATE:
      return "CREATE";
    case RevenueAttributionAllocationAction::UPDATE:
      return "UPDATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevenueAttributionAllocationActionMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
