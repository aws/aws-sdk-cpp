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
  enum class Mpeg2TemporalAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Mpeg2TemporalAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API Mpeg2TemporalAdaptiveQuantization GetMpeg2TemporalAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2TemporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization value);
} // namespace Mpeg2TemporalAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
