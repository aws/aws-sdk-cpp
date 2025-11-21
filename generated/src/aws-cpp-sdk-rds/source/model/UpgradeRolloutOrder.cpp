/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rds/model/UpgradeRolloutOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {
namespace UpgradeRolloutOrderMapper {

static const int first_HASH = HashingUtils::HashString("first");
static const int second_HASH = HashingUtils::HashString("second");
static const int last_HASH = HashingUtils::HashString("last");

UpgradeRolloutOrder GetUpgradeRolloutOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == first_HASH) {
    return UpgradeRolloutOrder::first;
  } else if (hashCode == second_HASH) {
    return UpgradeRolloutOrder::second;
  } else if (hashCode == last_HASH) {
    return UpgradeRolloutOrder::last;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpgradeRolloutOrder>(hashCode);
  }

  return UpgradeRolloutOrder::NOT_SET;
}

Aws::String GetNameForUpgradeRolloutOrder(UpgradeRolloutOrder enumValue) {
  switch (enumValue) {
    case UpgradeRolloutOrder::NOT_SET:
      return {};
    case UpgradeRolloutOrder::first:
      return "first";
    case UpgradeRolloutOrder::second:
      return "second";
    case UpgradeRolloutOrder::last:
      return "last";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpgradeRolloutOrderMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
