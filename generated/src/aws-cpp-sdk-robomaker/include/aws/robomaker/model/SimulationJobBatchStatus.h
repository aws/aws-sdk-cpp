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
  enum class SimulationJobBatchStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Failed,
    Completed,
    Canceled,
    Canceling,
    Completing,
    TimingOut,
    TimedOut
  };

namespace SimulationJobBatchStatusMapper
{
AWS_ROBOMAKER_API SimulationJobBatchStatus GetSimulationJobBatchStatusForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForSimulationJobBatchStatus(SimulationJobBatchStatus value);
} // namespace SimulationJobBatchStatusMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
