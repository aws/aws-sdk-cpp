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
  enum class SimulationAppStatus
  {
    NOT_SET,
    STARTING,
    STARTED,
    STOPPING,
    STOPPED,
    ERROR_,
    UNKNOWN
  };

namespace SimulationAppStatusMapper
{
AWS_SIMSPACEWEAVER_API SimulationAppStatus GetSimulationAppStatusForName(const Aws::String& name);

AWS_SIMSPACEWEAVER_API Aws::String GetNameForSimulationAppStatus(SimulationAppStatus value);
} // namespace SimulationAppStatusMapper
} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
