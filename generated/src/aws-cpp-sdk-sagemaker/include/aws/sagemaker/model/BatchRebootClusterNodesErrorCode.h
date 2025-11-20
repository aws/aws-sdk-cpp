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
enum class BatchRebootClusterNodesErrorCode { NOT_SET, InstanceIdNotFound, InvalidInstanceStatus, InstanceIdInUse, InternalServerError };

namespace BatchRebootClusterNodesErrorCodeMapper {
AWS_SAGEMAKER_API BatchRebootClusterNodesErrorCode GetBatchRebootClusterNodesErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForBatchRebootClusterNodesErrorCode(BatchRebootClusterNodesErrorCode value);
}  // namespace BatchRebootClusterNodesErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
