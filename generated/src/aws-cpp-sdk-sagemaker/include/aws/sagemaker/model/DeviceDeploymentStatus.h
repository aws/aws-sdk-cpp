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
  enum class DeviceDeploymentStatus
  {
    NOT_SET,
    READYTODEPLOY,
    INPROGRESS,
    DEPLOYED,
    FAILED,
    STOPPING,
    STOPPED
  };

namespace DeviceDeploymentStatusMapper
{
AWS_SAGEMAKER_API DeviceDeploymentStatus GetDeviceDeploymentStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDeviceDeploymentStatus(DeviceDeploymentStatus value);
} // namespace DeviceDeploymentStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
