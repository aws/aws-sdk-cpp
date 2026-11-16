/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/JobSecondaryStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace JobSecondaryStatusMapper {

static const int Starting_HASH = HashingUtils::HashString("Starting");
static const int Downloading_HASH = HashingUtils::HashString("Downloading");
static const int Training_HASH = HashingUtils::HashString("Training");
static const int Uploading_HASH = HashingUtils::HashString("Uploading");
static const int Stopping_HASH = HashingUtils::HashString("Stopping");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");
static const int MaxRuntimeExceeded_HASH = HashingUtils::HashString("MaxRuntimeExceeded");
static const int Interrupted_HASH = HashingUtils::HashString("Interrupted");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Restarting_HASH = HashingUtils::HashString("Restarting");
static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Generating_HASH = HashingUtils::HashString("Generating");
static const int PartialGeneration_HASH = HashingUtils::HashString("PartialGeneration");
static const int Evaluating_HASH = HashingUtils::HashString("Evaluating");
static const int Validating_HASH = HashingUtils::HashString("Validating");
static const int Preparing_HASH = HashingUtils::HashString("Preparing");
static const int Executing_HASH = HashingUtils::HashString("Executing");
static const int Publishing_HASH = HashingUtils::HashString("Publishing");
static const int Finalizing_HASH = HashingUtils::HashString("Finalizing");
static const int Transforming_HASH = HashingUtils::HashString("Transforming");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");
static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");

JobSecondaryStatus GetJobSecondaryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Starting_HASH) {
    return JobSecondaryStatus::Starting;
  } else if (hashCode == Downloading_HASH) {
    return JobSecondaryStatus::Downloading;
  } else if (hashCode == Training_HASH) {
    return JobSecondaryStatus::Training;
  } else if (hashCode == Uploading_HASH) {
    return JobSecondaryStatus::Uploading;
  } else if (hashCode == Stopping_HASH) {
    return JobSecondaryStatus::Stopping;
  } else if (hashCode == Stopped_HASH) {
    return JobSecondaryStatus::Stopped;
  } else if (hashCode == MaxRuntimeExceeded_HASH) {
    return JobSecondaryStatus::MaxRuntimeExceeded;
  } else if (hashCode == Interrupted_HASH) {
    return JobSecondaryStatus::Interrupted;
  } else if (hashCode == Failed_HASH) {
    return JobSecondaryStatus::Failed;
  } else if (hashCode == Completed_HASH) {
    return JobSecondaryStatus::Completed;
  } else if (hashCode == Restarting_HASH) {
    return JobSecondaryStatus::Restarting;
  } else if (hashCode == Pending_HASH) {
    return JobSecondaryStatus::Pending;
  } else if (hashCode == Generating_HASH) {
    return JobSecondaryStatus::Generating;
  } else if (hashCode == PartialGeneration_HASH) {
    return JobSecondaryStatus::PartialGeneration;
  } else if (hashCode == Evaluating_HASH) {
    return JobSecondaryStatus::Evaluating;
  } else if (hashCode == Validating_HASH) {
    return JobSecondaryStatus::Validating;
  } else if (hashCode == Preparing_HASH) {
    return JobSecondaryStatus::Preparing;
  } else if (hashCode == Executing_HASH) {
    return JobSecondaryStatus::Executing;
  } else if (hashCode == Publishing_HASH) {
    return JobSecondaryStatus::Publishing;
  } else if (hashCode == Finalizing_HASH) {
    return JobSecondaryStatus::Finalizing;
  } else if (hashCode == Transforming_HASH) {
    return JobSecondaryStatus::Transforming;
  } else if (hashCode == Deleting_HASH) {
    return JobSecondaryStatus::Deleting;
  } else if (hashCode == DeleteFailed_HASH) {
    return JobSecondaryStatus::DeleteFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobSecondaryStatus>(hashCode);
  }

  return JobSecondaryStatus::NOT_SET;
}

Aws::String GetNameForJobSecondaryStatus(JobSecondaryStatus enumValue) {
  switch (enumValue) {
    case JobSecondaryStatus::NOT_SET:
      return {};
    case JobSecondaryStatus::Starting:
      return "Starting";
    case JobSecondaryStatus::Downloading:
      return "Downloading";
    case JobSecondaryStatus::Training:
      return "Training";
    case JobSecondaryStatus::Uploading:
      return "Uploading";
    case JobSecondaryStatus::Stopping:
      return "Stopping";
    case JobSecondaryStatus::Stopped:
      return "Stopped";
    case JobSecondaryStatus::MaxRuntimeExceeded:
      return "MaxRuntimeExceeded";
    case JobSecondaryStatus::Interrupted:
      return "Interrupted";
    case JobSecondaryStatus::Failed:
      return "Failed";
    case JobSecondaryStatus::Completed:
      return "Completed";
    case JobSecondaryStatus::Restarting:
      return "Restarting";
    case JobSecondaryStatus::Pending:
      return "Pending";
    case JobSecondaryStatus::Generating:
      return "Generating";
    case JobSecondaryStatus::PartialGeneration:
      return "PartialGeneration";
    case JobSecondaryStatus::Evaluating:
      return "Evaluating";
    case JobSecondaryStatus::Validating:
      return "Validating";
    case JobSecondaryStatus::Preparing:
      return "Preparing";
    case JobSecondaryStatus::Executing:
      return "Executing";
    case JobSecondaryStatus::Publishing:
      return "Publishing";
    case JobSecondaryStatus::Finalizing:
      return "Finalizing";
    case JobSecondaryStatus::Transforming:
      return "Transforming";
    case JobSecondaryStatus::Deleting:
      return "Deleting";
    case JobSecondaryStatus::DeleteFailed:
      return "DeleteFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobSecondaryStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
