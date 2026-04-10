/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/BatchAddClusterNodesErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace BatchAddClusterNodesErrorCodeMapper {

static const int InstanceGroupNotFound_HASH = HashingUtils::HashString("InstanceGroupNotFound");
static const int InvalidInstanceGroupStatus_HASH = HashingUtils::HashString("InvalidInstanceGroupStatus");
static const int IncompatibleAvailabilityZones_HASH = HashingUtils::HashString("IncompatibleAvailabilityZones");
static const int IncompatibleInstanceTypes_HASH = HashingUtils::HashString("IncompatibleInstanceTypes");

BatchAddClusterNodesErrorCode GetBatchAddClusterNodesErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InstanceGroupNotFound_HASH) {
    return BatchAddClusterNodesErrorCode::InstanceGroupNotFound;
  } else if (hashCode == InvalidInstanceGroupStatus_HASH) {
    return BatchAddClusterNodesErrorCode::InvalidInstanceGroupStatus;
  } else if (hashCode == IncompatibleAvailabilityZones_HASH) {
    return BatchAddClusterNodesErrorCode::IncompatibleAvailabilityZones;
  } else if (hashCode == IncompatibleInstanceTypes_HASH) {
    return BatchAddClusterNodesErrorCode::IncompatibleInstanceTypes;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchAddClusterNodesErrorCode>(hashCode);
  }

  return BatchAddClusterNodesErrorCode::NOT_SET;
}

Aws::String GetNameForBatchAddClusterNodesErrorCode(BatchAddClusterNodesErrorCode enumValue) {
  switch (enumValue) {
    case BatchAddClusterNodesErrorCode::NOT_SET:
      return {};
    case BatchAddClusterNodesErrorCode::InstanceGroupNotFound:
      return "InstanceGroupNotFound";
    case BatchAddClusterNodesErrorCode::InvalidInstanceGroupStatus:
      return "InvalidInstanceGroupStatus";
    case BatchAddClusterNodesErrorCode::IncompatibleAvailabilityZones:
      return "IncompatibleAvailabilityZones";
    case BatchAddClusterNodesErrorCode::IncompatibleInstanceTypes:
      return "IncompatibleInstanceTypes";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchAddClusterNodesErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
