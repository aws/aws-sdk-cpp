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
  enum class SimulationJobStatus
  {
    NOT_SET,
    Pending,
    Preparing,
    Running,
    Restarting,
    Completed,
    Failed,
    RunningFailed,
    Terminating,
    Terminated,
    Canceled
  };

namespace SimulationJobStatusMapper
{
AWS_ROBOMAKER_API SimulationJobStatus GetSimulationJobStatusForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForSimulationJobStatus(SimulationJobStatus value);
} // namespace SimulationJobStatusMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
