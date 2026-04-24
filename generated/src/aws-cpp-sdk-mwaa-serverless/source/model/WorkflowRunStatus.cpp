/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mwaa-serverless/model/WorkflowRunStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {
namespace WorkflowRunStatusMapper {

static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTING_HASH) {
    return WorkflowRunStatus::STARTING;
  } else if (hashCode == QUEUED_HASH) {
    return WorkflowRunStatus::QUEUED;
  } else if (hashCode == RUNNING_HASH) {
    return WorkflowRunStatus::RUNNING;
  } else if (hashCode == SUCCESS_HASH) {
    return WorkflowRunStatus::SUCCESS;
  } else if (hashCode == FAILED_HASH) {
    return WorkflowRunStatus::FAILED;
  } else if (hashCode == TIMEOUT_HASH) {
    return WorkflowRunStatus::TIMEOUT;
  } else if (hashCode == STOPPING_HASH) {
    return WorkflowRunStatus::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return WorkflowRunStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WorkflowRunStatus>(hashCode);
  }

  return WorkflowRunStatus::NOT_SET;
}

Aws::String GetNameForWorkflowRunStatus(WorkflowRunStatus enumValue) {
  switch (enumValue) {
    case WorkflowRunStatus::NOT_SET:
      return {};
    case WorkflowRunStatus::STARTING:
      return "STARTING";
    case WorkflowRunStatus::QUEUED:
      return "QUEUED";
    case WorkflowRunStatus::RUNNING:
      return "RUNNING";
    case WorkflowRunStatus::SUCCESS:
      return "SUCCESS";
    case WorkflowRunStatus::FAILED:
      return "FAILED";
    case WorkflowRunStatus::TIMEOUT:
      return "TIMEOUT";
    case WorkflowRunStatus::STOPPING:
      return "STOPPING";
    case WorkflowRunStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkflowRunStatusMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
