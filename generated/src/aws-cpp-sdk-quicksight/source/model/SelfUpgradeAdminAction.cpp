/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SelfUpgradeAdminAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SelfUpgradeAdminActionMapper {

static const int APPROVE_HASH = HashingUtils::HashString("APPROVE");
static const int DENY_HASH = HashingUtils::HashString("DENY");
static const int VERIFY_HASH = HashingUtils::HashString("VERIFY");

SelfUpgradeAdminAction GetSelfUpgradeAdminActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVE_HASH) {
    return SelfUpgradeAdminAction::APPROVE;
  } else if (hashCode == DENY_HASH) {
    return SelfUpgradeAdminAction::DENY;
  } else if (hashCode == VERIFY_HASH) {
    return SelfUpgradeAdminAction::VERIFY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SelfUpgradeAdminAction>(hashCode);
  }

  return SelfUpgradeAdminAction::NOT_SET;
}

Aws::String GetNameForSelfUpgradeAdminAction(SelfUpgradeAdminAction enumValue) {
  switch (enumValue) {
    case SelfUpgradeAdminAction::NOT_SET:
      return {};
    case SelfUpgradeAdminAction::APPROVE:
      return "APPROVE";
    case SelfUpgradeAdminAction::DENY:
      return "DENY";
    case SelfUpgradeAdminAction::VERIFY:
      return "VERIFY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SelfUpgradeAdminActionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
