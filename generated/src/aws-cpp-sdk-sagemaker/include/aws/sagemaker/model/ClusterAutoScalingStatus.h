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
  enum class ClusterAutoScalingStatus
  {
    NOT_SET,
    InService,
    Failed,
    Creating,
    Deleting
  };

namespace ClusterAutoScalingStatusMapper
{
AWS_SAGEMAKER_API ClusterAutoScalingStatus GetClusterAutoScalingStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterAutoScalingStatus(ClusterAutoScalingStatus value);
} // namespace ClusterAutoScalingStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
