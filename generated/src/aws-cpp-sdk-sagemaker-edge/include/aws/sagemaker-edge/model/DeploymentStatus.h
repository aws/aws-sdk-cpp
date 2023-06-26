/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{
  enum class DeploymentStatus
  {
    NOT_SET,
    SUCCESS,
    FAIL
  };

namespace DeploymentStatusMapper
{
AWS_SAGEMAKEREDGEMANAGER_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_SAGEMAKEREDGEMANAGER_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
