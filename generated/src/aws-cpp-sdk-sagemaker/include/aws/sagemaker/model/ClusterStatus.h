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
  enum class ClusterStatus
  {
    NOT_SET,
    Creating,
    Deleting,
    Failed,
    InService,
    RollingBack,
    SystemUpdating,
    Updating
  };

namespace ClusterStatusMapper
{
AWS_SAGEMAKER_API ClusterStatus GetClusterStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterStatus(ClusterStatus value);
} // namespace ClusterStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
