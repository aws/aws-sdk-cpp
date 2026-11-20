/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/MoveClusterNodesErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace MoveClusterNodesErrorCodeMapper {

static const int NodeIdNotFound_HASH = HashingUtils::HashString("NodeIdNotFound");
static const int InvalidNodeStatus_HASH = HashingUtils::HashString("InvalidNodeStatus");
static const int NodeIdInUse_HASH = HashingUtils::HashString("NodeIdInUse");
static const int NodeInstanceTypeMismatch_HASH = HashingUtils::HashString("NodeInstanceTypeMismatch");

MoveClusterNodesErrorCode GetMoveClusterNodesErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NodeIdNotFound_HASH) {
    return MoveClusterNodesErrorCode::NodeIdNotFound;
  } else if (hashCode == InvalidNodeStatus_HASH) {
    return MoveClusterNodesErrorCode::InvalidNodeStatus;
  } else if (hashCode == NodeIdInUse_HASH) {
    return MoveClusterNodesErrorCode::NodeIdInUse;
  } else if (hashCode == NodeInstanceTypeMismatch_HASH) {
    return MoveClusterNodesErrorCode::NodeInstanceTypeMismatch;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MoveClusterNodesErrorCode>(hashCode);
  }

  return MoveClusterNodesErrorCode::NOT_SET;
}

Aws::String GetNameForMoveClusterNodesErrorCode(MoveClusterNodesErrorCode enumValue) {
  switch (enumValue) {
    case MoveClusterNodesErrorCode::NOT_SET:
      return {};
    case MoveClusterNodesErrorCode::NodeIdNotFound:
      return "NodeIdNotFound";
    case MoveClusterNodesErrorCode::InvalidNodeStatus:
      return "InvalidNodeStatus";
    case MoveClusterNodesErrorCode::NodeIdInUse:
      return "NodeIdInUse";
    case MoveClusterNodesErrorCode::NodeInstanceTypeMismatch:
      return "NodeInstanceTypeMismatch";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MoveClusterNodesErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
