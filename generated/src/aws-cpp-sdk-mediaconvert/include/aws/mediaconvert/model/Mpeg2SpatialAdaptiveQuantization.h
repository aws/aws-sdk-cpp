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
  enum class Mpeg2SpatialAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Mpeg2SpatialAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API Mpeg2SpatialAdaptiveQuantization GetMpeg2SpatialAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2SpatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization value);
} // namespace Mpeg2SpatialAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
