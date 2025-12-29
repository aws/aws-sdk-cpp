/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SelfUpgradeRequestStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SelfUpgradeRequestStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int DENIED_HASH = HashingUtils::HashString("DENIED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int VERIFY_FAILED_HASH = HashingUtils::HashString("VERIFY_FAILED");

SelfUpgradeRequestStatus GetSelfUpgradeRequestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return SelfUpgradeRequestStatus::PENDING;
  } else if (hashCode == APPROVED_HASH) {
    return SelfUpgradeRequestStatus::APPROVED;
  } else if (hashCode == DENIED_HASH) {
    return SelfUpgradeRequestStatus::DENIED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return SelfUpgradeRequestStatus::UPDATE_FAILED;
  } else if (hashCode == VERIFY_FAILED_HASH) {
    return SelfUpgradeRequestStatus::VERIFY_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SelfUpgradeRequestStatus>(hashCode);
  }

  return SelfUpgradeRequestStatus::NOT_SET;
}

Aws::String GetNameForSelfUpgradeRequestStatus(SelfUpgradeRequestStatus enumValue) {
  switch (enumValue) {
    case SelfUpgradeRequestStatus::NOT_SET:
      return {};
    case SelfUpgradeRequestStatus::PENDING:
      return "PENDING";
    case SelfUpgradeRequestStatus::APPROVED:
      return "APPROVED";
    case SelfUpgradeRequestStatus::DENIED:
      return "DENIED";
    case SelfUpgradeRequestStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case SelfUpgradeRequestStatus::VERIFY_FAILED:
      return "VERIFY_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SelfUpgradeRequestStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
