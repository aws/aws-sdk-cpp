/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/JobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace JobStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Stopping_HASH = HashingUtils::HashString("Stopping");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");
static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");

JobStatus GetJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return JobStatus::InProgress;
  } else if (hashCode == Completed_HASH) {
    return JobStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return JobStatus::Failed;
  } else if (hashCode == Stopping_HASH) {
    return JobStatus::Stopping;
  } else if (hashCode == Stopped_HASH) {
    return JobStatus::Stopped;
  } else if (hashCode == Deleting_HASH) {
    return JobStatus::Deleting;
  } else if (hashCode == DeleteFailed_HASH) {
    return JobStatus::DeleteFailed;
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
    case JobStatus::InProgress:
      return "InProgress";
    case JobStatus::Completed:
      return "Completed";
    case JobStatus::Failed:
      return "Failed";
    case JobStatus::Stopping:
      return "Stopping";
    case JobStatus::Stopped:
      return "Stopped";
    case JobStatus::Deleting:
      return "Deleting";
    case JobStatus::DeleteFailed:
      return "DeleteFailed";
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
}  // namespace SageMaker
}  // namespace Aws
