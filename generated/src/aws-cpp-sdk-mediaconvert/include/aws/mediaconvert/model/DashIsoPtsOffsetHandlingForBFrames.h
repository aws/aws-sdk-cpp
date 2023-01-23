/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DashIsoPtsOffsetHandlingForBFrames
  {
    NOT_SET,
    ZERO_BASED,
    MATCH_INITIAL_PTS
  };

namespace DashIsoPtsOffsetHandlingForBFramesMapper
{
AWS_MEDIACONVERT_API DashIsoPtsOffsetHandlingForBFrames GetDashIsoPtsOffsetHandlingForBFramesForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoPtsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames value);
} // namespace DashIsoPtsOffsetHandlingForBFramesMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
