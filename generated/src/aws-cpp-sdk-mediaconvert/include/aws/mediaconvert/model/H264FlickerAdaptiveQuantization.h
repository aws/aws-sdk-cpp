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
  enum class H264FlickerAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264FlickerAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API H264FlickerAdaptiveQuantization GetH264FlickerAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264FlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization value);
} // namespace H264FlickerAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
