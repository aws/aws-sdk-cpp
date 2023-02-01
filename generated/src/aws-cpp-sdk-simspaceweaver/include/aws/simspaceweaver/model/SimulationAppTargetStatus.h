/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{
  enum class SimulationAppTargetStatus
  {
    NOT_SET,
    UNKNOWN,
    STARTED,
    STOPPED
  };

namespace SimulationAppTargetStatusMapper
{
AWS_SIMSPACEWEAVER_API SimulationAppTargetStatus GetSimulationAppTargetStatusForName(const Aws::String& name);

AWS_SIMSPACEWEAVER_API Aws::String GetNameForSimulationAppTargetStatus(SimulationAppTargetStatus value);
} // namespace SimulationAppTargetStatusMapper
} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
