/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-instances/model/BillingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {
namespace BillingModeMapper {

static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");

BillingMode GetBillingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MONTHLY_HASH) {
    return BillingMode::MONTHLY;
  } else if (hashCode == HOURLY_HASH) {
    return BillingMode::HOURLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingMode>(hashCode);
  }

  return BillingMode::NOT_SET;
}

Aws::String GetNameForBillingMode(BillingMode enumValue) {
  switch (enumValue) {
    case BillingMode::NOT_SET:
      return {};
    case BillingMode::MONTHLY:
      return "MONTHLY";
    case BillingMode::HOURLY:
      return "HOURLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingModeMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
