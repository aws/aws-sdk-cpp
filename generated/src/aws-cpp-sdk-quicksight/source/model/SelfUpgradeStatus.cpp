/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SelfUpgradeStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SelfUpgradeStatusMapper {

static const int AUTO_APPROVAL_HASH = HashingUtils::HashString("AUTO_APPROVAL");
static const int ADMIN_APPROVAL_HASH = HashingUtils::HashString("ADMIN_APPROVAL");

SelfUpgradeStatus GetSelfUpgradeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_APPROVAL_HASH) {
    return SelfUpgradeStatus::AUTO_APPROVAL;
  } else if (hashCode == ADMIN_APPROVAL_HASH) {
    return SelfUpgradeStatus::ADMIN_APPROVAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SelfUpgradeStatus>(hashCode);
  }

  return SelfUpgradeStatus::NOT_SET;
}

Aws::String GetNameForSelfUpgradeStatus(SelfUpgradeStatus enumValue) {
  switch (enumValue) {
    case SelfUpgradeStatus::NOT_SET:
      return {};
    case SelfUpgradeStatus::AUTO_APPROVAL:
      return "AUTO_APPROVAL";
    case SelfUpgradeStatus::ADMIN_APPROVAL:
      return "ADMIN_APPROVAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SelfUpgradeStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
