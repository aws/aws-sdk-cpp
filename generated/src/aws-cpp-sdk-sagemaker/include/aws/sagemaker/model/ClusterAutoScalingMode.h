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
  enum class ClusterAutoScalingMode
  {
    NOT_SET,
    Enable,
    Disable
  };

namespace ClusterAutoScalingModeMapper
{
AWS_SAGEMAKER_API ClusterAutoScalingMode GetClusterAutoScalingModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterAutoScalingMode(ClusterAutoScalingMode value);
} // namespace ClusterAutoScalingModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
