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
  enum class SimulationTargetStatus
  {
    NOT_SET,
    UNKNOWN,
    STARTED,
    STOPPED,
    DELETED
  };

namespace SimulationTargetStatusMapper
{
AWS_SIMSPACEWEAVER_API SimulationTargetStatus GetSimulationTargetStatusForName(const Aws::String& name);

AWS_SIMSPACEWEAVER_API Aws::String GetNameForSimulationTargetStatus(SimulationTargetStatus value);
} // namespace SimulationTargetStatusMapper
} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
