﻿/**
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
  enum class H265AdaptiveQuantization
  {
    NOT_SET,
    OFF,
    LOW,
    MEDIUM,
    HIGH,
    HIGHER,
    MAX,
    AUTO
  };

namespace H265AdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API H265AdaptiveQuantization GetH265AdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265AdaptiveQuantization(H265AdaptiveQuantization value);
} // namespace H265AdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
