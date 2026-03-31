/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/JobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace JobStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

JobStatus GetJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return JobStatus::IN_PROGRESS;
  } else if (hashCode == STOPPING_HASH) {
    return JobStatus::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return JobStatus::STOPPED;
  } else if (hashCode == FAILED_HASH) {
    return JobStatus::FAILED;
  } else if (hashCode == COMPLETED_HASH) {
    return JobStatus::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobStatus>(hashCode);
  }

  return JobStatus::NOT_SET;
}

Aws::String GetNameForJobStatus(JobStatus enumValue) {
  switch (enumValue) {
    case JobStatus::NOT_SET:
      return {};
    case JobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case JobStatus::STOPPING:
      return "STOPPING";
    case JobStatus::STOPPED:
      return "STOPPED";
    case JobStatus::FAILED:
      return "FAILED";
    case JobStatus::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
