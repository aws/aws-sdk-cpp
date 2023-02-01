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
  enum class NoiseFilterPostTemporalSharpeningStrength
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH
  };

namespace NoiseFilterPostTemporalSharpeningStrengthMapper
{
AWS_MEDIACONVERT_API NoiseFilterPostTemporalSharpeningStrength GetNoiseFilterPostTemporalSharpeningStrengthForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForNoiseFilterPostTemporalSharpeningStrength(NoiseFilterPostTemporalSharpeningStrength value);
} // namespace NoiseFilterPostTemporalSharpeningStrengthMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
