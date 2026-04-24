/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/model/WorkflowRunStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {
namespace WorkflowRunStatusMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return WorkflowRunStatus::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return WorkflowRunStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return WorkflowRunStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return WorkflowRunStatus::TIMED_OUT;
  } else if (hashCode == DELETING_HASH) {
    return WorkflowRunStatus::DELETING;
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
    case WorkflowRunStatus::RUNNING:
      return "RUNNING";
    case WorkflowRunStatus::SUCCEEDED:
      return "SUCCEEDED";
    case WorkflowRunStatus::FAILED:
      return "FAILED";
    case WorkflowRunStatus::TIMED_OUT:
      return "TIMED_OUT";
    case WorkflowRunStatus::DELETING:
      return "DELETING";
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
}  // namespace NovaAct
}  // namespace Aws
