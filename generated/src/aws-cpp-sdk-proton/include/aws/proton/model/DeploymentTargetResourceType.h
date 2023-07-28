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
  enum class DeploymentTargetResourceType
  {
    NOT_SET,
    ENVIRONMENT,
    SERVICE_PIPELINE,
    SERVICE_INSTANCE,
    COMPONENT
  };

namespace DeploymentTargetResourceTypeMapper
{
AWS_PROTON_API DeploymentTargetResourceType GetDeploymentTargetResourceTypeForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForDeploymentTargetResourceType(DeploymentTargetResourceType value);
} // namespace DeploymentTargetResourceTypeMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
