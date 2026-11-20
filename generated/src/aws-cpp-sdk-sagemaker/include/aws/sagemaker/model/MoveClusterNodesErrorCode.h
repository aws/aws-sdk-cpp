/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class MoveClusterNodesErrorCode { NOT_SET, NodeIdNotFound, InvalidNodeStatus, NodeIdInUse, NodeInstanceTypeMismatch };

namespace MoveClusterNodesErrorCodeMapper {
AWS_SAGEMAKER_API MoveClusterNodesErrorCode GetMoveClusterNodesErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMoveClusterNodesErrorCode(MoveClusterNodesErrorCode value);
}  // namespace MoveClusterNodesErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
