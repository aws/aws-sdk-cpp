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
  enum class H265FlickerAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265FlickerAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API H265FlickerAdaptiveQuantization GetH265FlickerAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265FlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization value);
} // namespace H265FlickerAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
