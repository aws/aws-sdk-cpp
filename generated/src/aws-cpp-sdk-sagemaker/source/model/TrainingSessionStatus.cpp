/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/TrainingSessionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace TrainingSessionStatusMapper {

static const int Created_HASH = HashingUtils::HashString("Created");
static const int Blocked_HASH = HashingUtils::HashString("Blocked");
static const int Running_HASH = HashingUtils::HashString("Running");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
static const int Stopping_HASH = HashingUtils::HashString("Stopping");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");
static const int Expired_HASH = HashingUtils::HashString("Expired");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");
static const int DeletionFailed_HASH = HashingUtils::HashString("DeletionFailed");

TrainingSessionStatus GetTrainingSessionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Created_HASH) {
    return TrainingSessionStatus::Created;
  } else if (hashCode == Blocked_HASH) {
    return TrainingSessionStatus::Blocked;
  } else if (hashCode == Running_HASH) {
    return TrainingSessionStatus::Running;
  } else if (hashCode == Failed_HASH) {
    return TrainingSessionStatus::Failed;
  } else if (hashCode == Scheduled_HASH) {
    return TrainingSessionStatus::Scheduled;
  } else if (hashCode == Stopping_HASH) {
    return TrainingSessionStatus::Stopping;
  } else if (hashCode == Stopped_HASH) {
    return TrainingSessionStatus::Stopped;
  } else if (hashCode == Expired_HASH) {
    return TrainingSessionStatus::Expired;
  } else if (hashCode == Deleting_HASH) {
    return TrainingSessionStatus::Deleting;
  } else if (hashCode == DeletionFailed_HASH) {
    return TrainingSessionStatus::DeletionFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrainingSessionStatus>(hashCode);
  }

  return TrainingSessionStatus::NOT_SET;
}

Aws::String GetNameForTrainingSessionStatus(TrainingSessionStatus enumValue) {
  switch (enumValue) {
    case TrainingSessionStatus::NOT_SET:
      return {};
    case TrainingSessionStatus::Created:
      return "Created";
    case TrainingSessionStatus::Blocked:
      return "Blocked";
    case TrainingSessionStatus::Running:
      return "Running";
    case TrainingSessionStatus::Failed:
      return "Failed";
    case TrainingSessionStatus::Scheduled:
      return "Scheduled";
    case TrainingSessionStatus::Stopping:
      return "Stopping";
    case TrainingSessionStatus::Stopped:
      return "Stopped";
    case TrainingSessionStatus::Expired:
      return "Expired";
    case TrainingSessionStatus::Deleting:
      return "Deleting";
    case TrainingSessionStatus::DeletionFailed:
      return "DeletionFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrainingSessionStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
