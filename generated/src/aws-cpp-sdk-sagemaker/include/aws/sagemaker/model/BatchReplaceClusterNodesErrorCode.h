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
enum class BatchReplaceClusterNodesErrorCode { NOT_SET, InstanceIdNotFound, InvalidInstanceStatus, InstanceIdInUse, InternalServerError };

namespace BatchReplaceClusterNodesErrorCodeMapper {
AWS_SAGEMAKER_API BatchReplaceClusterNodesErrorCode GetBatchReplaceClusterNodesErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForBatchReplaceClusterNodesErrorCode(BatchReplaceClusterNodesErrorCode value);
}  // namespace BatchReplaceClusterNodesErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
