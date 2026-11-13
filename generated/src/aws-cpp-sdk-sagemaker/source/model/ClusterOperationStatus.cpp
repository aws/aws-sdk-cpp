/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterOperationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterOperationStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Superseded_HASH = HashingUtils::HashString("Superseded");
static const int Done_HASH = HashingUtils::HashString("Done");

ClusterOperationStatus GetClusterOperationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return ClusterOperationStatus::InProgress;
  } else if (hashCode == Superseded_HASH) {
    return ClusterOperationStatus::Superseded;
  } else if (hashCode == Done_HASH) {
    return ClusterOperationStatus::Done;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterOperationStatus>(hashCode);
  }

  return ClusterOperationStatus::NOT_SET;
}

Aws::String GetNameForClusterOperationStatus(ClusterOperationStatus enumValue) {
  switch (enumValue) {
    case ClusterOperationStatus::NOT_SET:
      return {};
    case ClusterOperationStatus::InProgress:
      return "InProgress";
    case ClusterOperationStatus::Superseded:
      return "Superseded";
    case ClusterOperationStatus::Done:
      return "Done";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterOperationStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
