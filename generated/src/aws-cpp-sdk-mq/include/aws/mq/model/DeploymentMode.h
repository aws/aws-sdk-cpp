/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MQ
{
namespace Model
{
  enum class DeploymentMode
  {
    NOT_SET,
    SINGLE_INSTANCE,
    ACTIVE_STANDBY_MULTI_AZ,
    CLUSTER_MULTI_AZ
  };

namespace DeploymentModeMapper
{
AWS_MQ_API DeploymentMode GetDeploymentModeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForDeploymentMode(DeploymentMode value);
} // namespace DeploymentModeMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
