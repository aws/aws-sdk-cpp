/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/SoftwareUpdateStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace SoftwareUpdateStatusMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int RollbackInProgress_HASH = HashingUtils::HashString("RollbackInProgress");
static const int RollbackComplete_HASH = HashingUtils::HashString("RollbackComplete");

SoftwareUpdateStatus GetSoftwareUpdateStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return SoftwareUpdateStatus::Pending;
  } else if (hashCode == InProgress_HASH) {
    return SoftwareUpdateStatus::InProgress;
  } else if (hashCode == Succeeded_HASH) {
    return SoftwareUpdateStatus::Succeeded;
  } else if (hashCode == Failed_HASH) {
    return SoftwareUpdateStatus::Failed;
  } else if (hashCode == RollbackInProgress_HASH) {
    return SoftwareUpdateStatus::RollbackInProgress;
  } else if (hashCode == RollbackComplete_HASH) {
    return SoftwareUpdateStatus::RollbackComplete;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SoftwareUpdateStatus>(hashCode);
  }

  return SoftwareUpdateStatus::NOT_SET;
}

Aws::String GetNameForSoftwareUpdateStatus(SoftwareUpdateStatus enumValue) {
  switch (enumValue) {
    case SoftwareUpdateStatus::NOT_SET:
      return {};
    case SoftwareUpdateStatus::Pending:
      return "Pending";
    case SoftwareUpdateStatus::InProgress:
      return "InProgress";
    case SoftwareUpdateStatus::Succeeded:
      return "Succeeded";
    case SoftwareUpdateStatus::Failed:
      return "Failed";
    case SoftwareUpdateStatus::RollbackInProgress:
      return "RollbackInProgress";
    case SoftwareUpdateStatus::RollbackComplete:
      return "RollbackComplete";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SoftwareUpdateStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
