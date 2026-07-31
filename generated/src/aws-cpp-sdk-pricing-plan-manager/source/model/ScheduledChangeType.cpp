/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pricing-plan-manager/model/ScheduledChangeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PricingPlanManager {
namespace Model {
namespace ScheduledChangeTypeMapper {

static const int DOWNGRADE_HASH = HashingUtils::HashString("DOWNGRADE");
static const int CANCELLATION_HASH = HashingUtils::HashString("CANCELLATION");

ScheduledChangeType GetScheduledChangeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DOWNGRADE_HASH) {
    return ScheduledChangeType::DOWNGRADE;
  } else if (hashCode == CANCELLATION_HASH) {
    return ScheduledChangeType::CANCELLATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScheduledChangeType>(hashCode);
  }

  return ScheduledChangeType::NOT_SET;
}

Aws::String GetNameForScheduledChangeType(ScheduledChangeType enumValue) {
  switch (enumValue) {
    case ScheduledChangeType::NOT_SET:
      return {};
    case ScheduledChangeType::DOWNGRADE:
      return "DOWNGRADE";
    case ScheduledChangeType::CANCELLATION:
      return "CANCELLATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScheduledChangeTypeMapper
}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
