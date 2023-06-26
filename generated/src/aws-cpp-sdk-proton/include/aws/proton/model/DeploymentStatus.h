/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class DeploymentStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    SUCCEEDED,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    DELETE_COMPLETE,
    CANCELLING,
    CANCELLED
  };

namespace DeploymentStatusMapper
{
AWS_PROTON_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
