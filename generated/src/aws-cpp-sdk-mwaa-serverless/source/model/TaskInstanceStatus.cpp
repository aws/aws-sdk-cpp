/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mwaa-serverless/model/TaskInstanceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {
namespace TaskInstanceStatusMapper {

static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int UP_FOR_RESCHEDULE_HASH = HashingUtils::HashString("UP_FOR_RESCHEDULE");
static const int UP_FOR_RETRY_HASH = HashingUtils::HashString("UP_FOR_RETRY");
static const int UPSTREAM_FAILED_HASH = HashingUtils::HashString("UPSTREAM_FAILED");
static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");
static const int RESTARTING_HASH = HashingUtils::HashString("RESTARTING");
static const int DEFERRED_HASH = HashingUtils::HashString("DEFERRED");
static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");

TaskInstanceStatus GetTaskInstanceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUEUED_HASH) {
    return TaskInstanceStatus::QUEUED;
  } else if (hashCode == FAILED_HASH) {
    return TaskInstanceStatus::FAILED;
  } else if (hashCode == SCHEDULED_HASH) {
    return TaskInstanceStatus::SCHEDULED;
  } else if (hashCode == RUNNING_HASH) {
    return TaskInstanceStatus::RUNNING;
  } else if (hashCode == SUCCESS_HASH) {
    return TaskInstanceStatus::SUCCESS;
  } else if (hashCode == UP_FOR_RESCHEDULE_HASH) {
    return TaskInstanceStatus::UP_FOR_RESCHEDULE;
  } else if (hashCode == UP_FOR_RETRY_HASH) {
    return TaskInstanceStatus::UP_FOR_RETRY;
  } else if (hashCode == UPSTREAM_FAILED_HASH) {
    return TaskInstanceStatus::UPSTREAM_FAILED;
  } else if (hashCode == REMOVED_HASH) {
    return TaskInstanceStatus::REMOVED;
  } else if (hashCode == RESTARTING_HASH) {
    return TaskInstanceStatus::RESTARTING;
  } else if (hashCode == DEFERRED_HASH) {
    return TaskInstanceStatus::DEFERRED;
  } else if (hashCode == NONE_HASH) {
    return TaskInstanceStatus::NONE;
  } else if (hashCode == CANCELLED_HASH) {
    return TaskInstanceStatus::CANCELLED;
  } else if (hashCode == TIMEOUT_HASH) {
    return TaskInstanceStatus::TIMEOUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaskInstanceStatus>(hashCode);
  }

  return TaskInstanceStatus::NOT_SET;
}

Aws::String GetNameForTaskInstanceStatus(TaskInstanceStatus enumValue) {
  switch (enumValue) {
    case TaskInstanceStatus::NOT_SET:
      return {};
    case TaskInstanceStatus::QUEUED:
      return "QUEUED";
    case TaskInstanceStatus::FAILED:
      return "FAILED";
    case TaskInstanceStatus::SCHEDULED:
      return "SCHEDULED";
    case TaskInstanceStatus::RUNNING:
      return "RUNNING";
    case TaskInstanceStatus::SUCCESS:
      return "SUCCESS";
    case TaskInstanceStatus::UP_FOR_RESCHEDULE:
      return "UP_FOR_RESCHEDULE";
    case TaskInstanceStatus::UP_FOR_RETRY:
      return "UP_FOR_RETRY";
    case TaskInstanceStatus::UPSTREAM_FAILED:
      return "UPSTREAM_FAILED";
    case TaskInstanceStatus::REMOVED:
      return "REMOVED";
    case TaskInstanceStatus::RESTARTING:
      return "RESTARTING";
    case TaskInstanceStatus::DEFERRED:
      return "DEFERRED";
    case TaskInstanceStatus::NONE:
      return "NONE";
    case TaskInstanceStatus::CANCELLED:
      return "CANCELLED";
    case TaskInstanceStatus::TIMEOUT:
      return "TIMEOUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaskInstanceStatusMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
