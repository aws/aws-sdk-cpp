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
  enum class Vp8QualityTuningLevel
  {
    NOT_SET,
    MULTI_PASS,
    MULTI_PASS_HQ
  };

namespace Vp8QualityTuningLevelMapper
{
AWS_MEDIACONVERT_API Vp8QualityTuningLevel GetVp8QualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp8QualityTuningLevel(Vp8QualityTuningLevel value);
} // namespace Vp8QualityTuningLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
