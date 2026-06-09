/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/RuleStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace RuleStatusMapper {

static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
static const int DELETION_IN_PROGRESS_HASH = HashingUtils::HashString("DELETION_IN_PROGRESS");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

RuleStatus GetRuleStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATION_IN_PROGRESS_HASH) {
    return RuleStatus::CREATION_IN_PROGRESS;
  } else if (hashCode == ACTIVE_HASH) {
    return RuleStatus::ACTIVE;
  } else if (hashCode == UPDATE_IN_PROGRESS_HASH) {
    return RuleStatus::UPDATE_IN_PROGRESS;
  } else if (hashCode == DELETION_IN_PROGRESS_HASH) {
    return RuleStatus::DELETION_IN_PROGRESS;
  } else if (hashCode == DELETED_HASH) {
    return RuleStatus::DELETED;
  } else if (hashCode == FAILED_HASH) {
    return RuleStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleStatus>(hashCode);
  }

  return RuleStatus::NOT_SET;
}

Aws::String GetNameForRuleStatus(RuleStatus enumValue) {
  switch (enumValue) {
    case RuleStatus::NOT_SET:
      return {};
    case RuleStatus::CREATION_IN_PROGRESS:
      return "CREATION_IN_PROGRESS";
    case RuleStatus::ACTIVE:
      return "ACTIVE";
    case RuleStatus::UPDATE_IN_PROGRESS:
      return "UPDATE_IN_PROGRESS";
    case RuleStatus::DELETION_IN_PROGRESS:
      return "DELETION_IN_PROGRESS";
    case RuleStatus::DELETED:
      return "DELETED";
    case RuleStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
