/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/AIRecommendationJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace AIRecommendationJobStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Stopping_HASH = HashingUtils::HashString("Stopping");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");

AIRecommendationJobStatus GetAIRecommendationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return AIRecommendationJobStatus::InProgress;
  } else if (hashCode == Completed_HASH) {
    return AIRecommendationJobStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return AIRecommendationJobStatus::Failed;
  } else if (hashCode == Stopping_HASH) {
    return AIRecommendationJobStatus::Stopping;
  } else if (hashCode == Stopped_HASH) {
    return AIRecommendationJobStatus::Stopped;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AIRecommendationJobStatus>(hashCode);
  }

  return AIRecommendationJobStatus::NOT_SET;
}

Aws::String GetNameForAIRecommendationJobStatus(AIRecommendationJobStatus enumValue) {
  switch (enumValue) {
    case AIRecommendationJobStatus::NOT_SET:
      return {};
    case AIRecommendationJobStatus::InProgress:
      return "InProgress";
    case AIRecommendationJobStatus::Completed:
      return "Completed";
    case AIRecommendationJobStatus::Failed:
      return "Failed";
    case AIRecommendationJobStatus::Stopping:
      return "Stopping";
    case AIRecommendationJobStatus::Stopped:
      return "Stopped";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AIRecommendationJobStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
