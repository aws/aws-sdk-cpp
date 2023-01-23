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
  enum class Av1AdaptiveQuantization
  {
    NOT_SET,
    OFF,
    LOW,
    MEDIUM,
    HIGH,
    HIGHER,
    MAX
  };

namespace Av1AdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API Av1AdaptiveQuantization GetAv1AdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1AdaptiveQuantization(Av1AdaptiveQuantization value);
} // namespace Av1AdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
