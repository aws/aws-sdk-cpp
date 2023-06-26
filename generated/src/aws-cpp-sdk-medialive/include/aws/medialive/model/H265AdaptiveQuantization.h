﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class H265AdaptiveQuantization
  {
    NOT_SET,
    AUTO,
    HIGH,
    HIGHER,
    LOW,
    MAX,
    MEDIUM,
    OFF
  };

namespace H265AdaptiveQuantizationMapper
{
AWS_MEDIALIVE_API H265AdaptiveQuantization GetH265AdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265AdaptiveQuantization(H265AdaptiveQuantization value);
} // namespace H265AdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
