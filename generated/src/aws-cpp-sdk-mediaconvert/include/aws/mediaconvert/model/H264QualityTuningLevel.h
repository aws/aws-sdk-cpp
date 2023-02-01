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
  enum class H264QualityTuningLevel
  {
    NOT_SET,
    SINGLE_PASS,
    SINGLE_PASS_HQ,
    MULTI_PASS_HQ
  };

namespace H264QualityTuningLevelMapper
{
AWS_MEDIACONVERT_API H264QualityTuningLevel GetH264QualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264QualityTuningLevel(H264QualityTuningLevel value);
} // namespace H264QualityTuningLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
