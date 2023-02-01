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
  enum class WorldExportJobStatus
  {
    NOT_SET,
    Pending,
    Running,
    Completed,
    Failed,
    Canceling,
    Canceled
  };

namespace WorldExportJobStatusMapper
{
AWS_ROBOMAKER_API WorldExportJobStatus GetWorldExportJobStatusForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForWorldExportJobStatus(WorldExportJobStatus value);
} // namespace WorldExportJobStatusMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
