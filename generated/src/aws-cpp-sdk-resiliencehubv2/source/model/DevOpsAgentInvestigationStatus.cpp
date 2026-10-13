/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DevOpsAgentInvestigationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DevOpsAgentInvestigationStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");

DevOpsAgentInvestigationStatus GetDevOpsAgentInvestigationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return DevOpsAgentInvestigationStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return DevOpsAgentInvestigationStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return DevOpsAgentInvestigationStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return DevOpsAgentInvestigationStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return DevOpsAgentInvestigationStatus::TIMED_OUT;
  } else if (hashCode == CANCELED_HASH) {
    return DevOpsAgentInvestigationStatus::CANCELED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DevOpsAgentInvestigationStatus>(hashCode);
  }

  return DevOpsAgentInvestigationStatus::NOT_SET;
}

Aws::String GetNameForDevOpsAgentInvestigationStatus(DevOpsAgentInvestigationStatus enumValue) {
  switch (enumValue) {
    case DevOpsAgentInvestigationStatus::NOT_SET:
      return {};
    case DevOpsAgentInvestigationStatus::PENDING:
      return "PENDING";
    case DevOpsAgentInvestigationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DevOpsAgentInvestigationStatus::COMPLETED:
      return "COMPLETED";
    case DevOpsAgentInvestigationStatus::FAILED:
      return "FAILED";
    case DevOpsAgentInvestigationStatus::TIMED_OUT:
      return "TIMED_OUT";
    case DevOpsAgentInvestigationStatus::CANCELED:
      return "CANCELED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DevOpsAgentInvestigationStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
