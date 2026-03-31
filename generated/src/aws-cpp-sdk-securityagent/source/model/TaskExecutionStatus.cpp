/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/TaskExecutionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace TaskExecutionStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

TaskExecutionStatus GetTaskExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return TaskExecutionStatus::IN_PROGRESS;
  } else if (hashCode == ABORTED_HASH) {
    return TaskExecutionStatus::ABORTED;
  } else if (hashCode == COMPLETED_HASH) {
    return TaskExecutionStatus::COMPLETED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return TaskExecutionStatus::INTERNAL_ERROR;
  } else if (hashCode == FAILED_HASH) {
    return TaskExecutionStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaskExecutionStatus>(hashCode);
  }

  return TaskExecutionStatus::NOT_SET;
}

Aws::String GetNameForTaskExecutionStatus(TaskExecutionStatus enumValue) {
  switch (enumValue) {
    case TaskExecutionStatus::NOT_SET:
      return {};
    case TaskExecutionStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case TaskExecutionStatus::ABORTED:
      return "ABORTED";
    case TaskExecutionStatus::COMPLETED:
      return "COMPLETED";
    case TaskExecutionStatus::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case TaskExecutionStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaskExecutionStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
