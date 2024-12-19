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
  enum class TimecodeTrack
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace TimecodeTrackMapper
{
AWS_MEDIACONVERT_API TimecodeTrack GetTimecodeTrackForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTimecodeTrack(TimecodeTrack value);
} // namespace TimecodeTrackMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
