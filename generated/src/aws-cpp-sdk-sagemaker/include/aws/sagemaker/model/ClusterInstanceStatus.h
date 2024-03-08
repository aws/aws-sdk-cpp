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
  enum class ClusterInstanceStatus
  {
    NOT_SET,
    Running,
    Failure,
    Pending,
    ShuttingDown,
    SystemUpdating
  };

namespace ClusterInstanceStatusMapper
{
AWS_SAGEMAKER_API ClusterInstanceStatus GetClusterInstanceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterInstanceStatus(ClusterInstanceStatus value);
} // namespace ClusterInstanceStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
