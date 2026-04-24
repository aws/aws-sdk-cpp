/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/StepStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace StepStatusMapper {

static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

StepStatus GetStepStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_STARTED_HASH) {
    return StepStatus::NOT_STARTED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return StepStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return StepStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return StepStatus::FAILED;
  } else if (hashCode == STOPPED_HASH) {
    return StepStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StepStatus>(hashCode);
  }

  return StepStatus::NOT_SET;
}

Aws::String GetNameForStepStatus(StepStatus enumValue) {
  switch (enumValue) {
    case StepStatus::NOT_SET:
      return {};
    case StepStatus::NOT_STARTED:
      return "NOT_STARTED";
    case StepStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case StepStatus::COMPLETED:
      return "COMPLETED";
    case StepStatus::FAILED:
      return "FAILED";
    case StepStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StepStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
