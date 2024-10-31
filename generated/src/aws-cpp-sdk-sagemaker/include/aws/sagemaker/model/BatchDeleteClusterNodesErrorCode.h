/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class BatchDeleteClusterNodesErrorCode
  {
    NOT_SET,
    NodeIdNotFound,
    InvalidNodeStatus,
    NodeIdInUse
  };

namespace BatchDeleteClusterNodesErrorCodeMapper
{
AWS_SAGEMAKER_API BatchDeleteClusterNodesErrorCode GetBatchDeleteClusterNodesErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForBatchDeleteClusterNodesErrorCode(BatchDeleteClusterNodesErrorCode value);
} // namespace BatchDeleteClusterNodesErrorCodeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
