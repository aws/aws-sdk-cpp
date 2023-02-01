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
  enum class H265QualityTuningLevel
  {
    NOT_SET,
    SINGLE_PASS,
    SINGLE_PASS_HQ,
    MULTI_PASS_HQ
  };

namespace H265QualityTuningLevelMapper
{
AWS_MEDIACONVERT_API H265QualityTuningLevel GetH265QualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265QualityTuningLevel(H265QualityTuningLevel value);
} // namespace H265QualityTuningLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
