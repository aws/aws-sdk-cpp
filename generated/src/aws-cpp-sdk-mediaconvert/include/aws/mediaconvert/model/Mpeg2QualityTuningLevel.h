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
  enum class Mpeg2QualityTuningLevel
  {
    NOT_SET,
    SINGLE_PASS,
    MULTI_PASS
  };

namespace Mpeg2QualityTuningLevelMapper
{
AWS_MEDIACONVERT_API Mpeg2QualityTuningLevel GetMpeg2QualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2QualityTuningLevel(Mpeg2QualityTuningLevel value);
} // namespace Mpeg2QualityTuningLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
