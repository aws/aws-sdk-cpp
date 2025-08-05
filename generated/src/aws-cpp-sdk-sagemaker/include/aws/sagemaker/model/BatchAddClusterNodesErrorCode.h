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
  enum class BatchAddClusterNodesErrorCode
  {
    NOT_SET,
    InstanceGroupNotFound,
    InvalidInstanceGroupStatus
  };

namespace BatchAddClusterNodesErrorCodeMapper
{
AWS_SAGEMAKER_API BatchAddClusterNodesErrorCode GetBatchAddClusterNodesErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForBatchAddClusterNodesErrorCode(BatchAddClusterNodesErrorCode value);
} // namespace BatchAddClusterNodesErrorCodeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
