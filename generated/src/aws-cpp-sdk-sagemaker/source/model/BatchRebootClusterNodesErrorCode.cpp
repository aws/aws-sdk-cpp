/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/BatchRebootClusterNodesErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace BatchRebootClusterNodesErrorCodeMapper {

static const int InstanceIdNotFound_HASH = HashingUtils::HashString("InstanceIdNotFound");
static const int InvalidInstanceStatus_HASH = HashingUtils::HashString("InvalidInstanceStatus");
static const int InstanceIdInUse_HASH = HashingUtils::HashString("InstanceIdInUse");
static const int InternalServerError_HASH = HashingUtils::HashString("InternalServerError");

BatchRebootClusterNodesErrorCode GetBatchRebootClusterNodesErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InstanceIdNotFound_HASH) {
    return BatchRebootClusterNodesErrorCode::InstanceIdNotFound;
  } else if (hashCode == InvalidInstanceStatus_HASH) {
    return BatchRebootClusterNodesErrorCode::InvalidInstanceStatus;
  } else if (hashCode == InstanceIdInUse_HASH) {
    return BatchRebootClusterNodesErrorCode::InstanceIdInUse;
  } else if (hashCode == InternalServerError_HASH) {
    return BatchRebootClusterNodesErrorCode::InternalServerError;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchRebootClusterNodesErrorCode>(hashCode);
  }

  return BatchRebootClusterNodesErrorCode::NOT_SET;
}

Aws::String GetNameForBatchRebootClusterNodesErrorCode(BatchRebootClusterNodesErrorCode enumValue) {
  switch (enumValue) {
    case BatchRebootClusterNodesErrorCode::NOT_SET:
      return {};
    case BatchRebootClusterNodesErrorCode::InstanceIdNotFound:
      return "InstanceIdNotFound";
    case BatchRebootClusterNodesErrorCode::InvalidInstanceStatus:
      return "InvalidInstanceStatus";
    case BatchRebootClusterNodesErrorCode::InstanceIdInUse:
      return "InstanceIdInUse";
    case BatchRebootClusterNodesErrorCode::InternalServerError:
      return "InternalServerError";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchRebootClusterNodesErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
