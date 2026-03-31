/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AutomationJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AutomationJobStatusMapper {

static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

AutomationJobStatus GetAutomationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILED_HASH) {
    return AutomationJobStatus::FAILED;
  } else if (hashCode == RUNNING_HASH) {
    return AutomationJobStatus::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return AutomationJobStatus::SUCCEEDED;
  } else if (hashCode == QUEUED_HASH) {
    return AutomationJobStatus::QUEUED;
  } else if (hashCode == STOPPED_HASH) {
    return AutomationJobStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutomationJobStatus>(hashCode);
  }

  return AutomationJobStatus::NOT_SET;
}

Aws::String GetNameForAutomationJobStatus(AutomationJobStatus enumValue) {
  switch (enumValue) {
    case AutomationJobStatus::NOT_SET:
      return {};
    case AutomationJobStatus::FAILED:
      return "FAILED";
    case AutomationJobStatus::RUNNING:
      return "RUNNING";
    case AutomationJobStatus::SUCCEEDED:
      return "SUCCEEDED";
    case AutomationJobStatus::QUEUED:
      return "QUEUED";
    case AutomationJobStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutomationJobStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
