/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/AIBenchmarkJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace AIBenchmarkJobStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Stopping_HASH = HashingUtils::HashString("Stopping");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");

AIBenchmarkJobStatus GetAIBenchmarkJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return AIBenchmarkJobStatus::InProgress;
  } else if (hashCode == Completed_HASH) {
    return AIBenchmarkJobStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return AIBenchmarkJobStatus::Failed;
  } else if (hashCode == Stopping_HASH) {
    return AIBenchmarkJobStatus::Stopping;
  } else if (hashCode == Stopped_HASH) {
    return AIBenchmarkJobStatus::Stopped;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AIBenchmarkJobStatus>(hashCode);
  }

  return AIBenchmarkJobStatus::NOT_SET;
}

Aws::String GetNameForAIBenchmarkJobStatus(AIBenchmarkJobStatus enumValue) {
  switch (enumValue) {
    case AIBenchmarkJobStatus::NOT_SET:
      return {};
    case AIBenchmarkJobStatus::InProgress:
      return "InProgress";
    case AIBenchmarkJobStatus::Completed:
      return "Completed";
    case AIBenchmarkJobStatus::Failed:
      return "Failed";
    case AIBenchmarkJobStatus::Stopping:
      return "Stopping";
    case AIBenchmarkJobStatus::Stopped:
      return "Stopped";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AIBenchmarkJobStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
