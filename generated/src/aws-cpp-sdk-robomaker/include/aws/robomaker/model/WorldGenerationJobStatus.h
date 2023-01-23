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
  enum class WorldGenerationJobStatus
  {
    NOT_SET,
    Pending,
    Running,
    Completed,
    Failed,
    PartialFailed,
    Canceling,
    Canceled
  };

namespace WorldGenerationJobStatusMapper
{
AWS_ROBOMAKER_API WorldGenerationJobStatus GetWorldGenerationJobStatusForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForWorldGenerationJobStatus(WorldGenerationJobStatus value);
} // namespace WorldGenerationJobStatusMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
