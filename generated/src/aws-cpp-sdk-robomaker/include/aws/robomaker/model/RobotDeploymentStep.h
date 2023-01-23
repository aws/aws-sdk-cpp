/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class RobotDeploymentStep
  {
    NOT_SET,
    Validating,
    DownloadingExtracting,
    ExecutingDownloadCondition,
    ExecutingPreLaunch,
    Launching,
    ExecutingPostLaunch,
    Finished
  };

namespace RobotDeploymentStepMapper
{
AWS_ROBOMAKER_API RobotDeploymentStep GetRobotDeploymentStepForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForRobotDeploymentStep(RobotDeploymentStep value);
} // namespace RobotDeploymentStepMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
