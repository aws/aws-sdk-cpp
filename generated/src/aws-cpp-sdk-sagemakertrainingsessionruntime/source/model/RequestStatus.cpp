/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemakertrainingsessionruntime/model/RequestStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {
namespace RequestStatusMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Skipped_HASH = HashingUtils::HashString("Skipped");

RequestStatus GetRequestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return RequestStatus::Pending;
  } else if (hashCode == InProgress_HASH) {
    return RequestStatus::InProgress;
  } else if (hashCode == Completed_HASH) {
    return RequestStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return RequestStatus::Failed;
  } else if (hashCode == Skipped_HASH) {
    return RequestStatus::Skipped;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RequestStatus>(hashCode);
  }

  return RequestStatus::NOT_SET;
}

Aws::String GetNameForRequestStatus(RequestStatus enumValue) {
  switch (enumValue) {
    case RequestStatus::NOT_SET:
      return {};
    case RequestStatus::Pending:
      return "Pending";
    case RequestStatus::InProgress:
      return "InProgress";
    case RequestStatus::Completed:
      return "Completed";
    case RequestStatus::Failed:
      return "Failed";
    case RequestStatus::Skipped:
      return "Skipped";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RequestStatusMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
