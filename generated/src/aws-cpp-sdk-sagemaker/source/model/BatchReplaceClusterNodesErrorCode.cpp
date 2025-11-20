/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/BatchReplaceClusterNodesErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace BatchReplaceClusterNodesErrorCodeMapper {

static const int InstanceIdNotFound_HASH = HashingUtils::HashString("InstanceIdNotFound");
static const int InvalidInstanceStatus_HASH = HashingUtils::HashString("InvalidInstanceStatus");
static const int InstanceIdInUse_HASH = HashingUtils::HashString("InstanceIdInUse");
static const int InternalServerError_HASH = HashingUtils::HashString("InternalServerError");

BatchReplaceClusterNodesErrorCode GetBatchReplaceClusterNodesErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InstanceIdNotFound_HASH) {
    return BatchReplaceClusterNodesErrorCode::InstanceIdNotFound;
  } else if (hashCode == InvalidInstanceStatus_HASH) {
    return BatchReplaceClusterNodesErrorCode::InvalidInstanceStatus;
  } else if (hashCode == InstanceIdInUse_HASH) {
    return BatchReplaceClusterNodesErrorCode::InstanceIdInUse;
  } else if (hashCode == InternalServerError_HASH) {
    return BatchReplaceClusterNodesErrorCode::InternalServerError;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchReplaceClusterNodesErrorCode>(hashCode);
  }

  return BatchReplaceClusterNodesErrorCode::NOT_SET;
}

Aws::String GetNameForBatchReplaceClusterNodesErrorCode(BatchReplaceClusterNodesErrorCode enumValue) {
  switch (enumValue) {
    case BatchReplaceClusterNodesErrorCode::NOT_SET:
      return {};
    case BatchReplaceClusterNodesErrorCode::InstanceIdNotFound:
      return "InstanceIdNotFound";
    case BatchReplaceClusterNodesErrorCode::InvalidInstanceStatus:
      return "InvalidInstanceStatus";
    case BatchReplaceClusterNodesErrorCode::InstanceIdInUse:
      return "InstanceIdInUse";
    case BatchReplaceClusterNodesErrorCode::InternalServerError:
      return "InternalServerError";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchReplaceClusterNodesErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
