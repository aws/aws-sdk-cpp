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
  enum class BandwidthReductionFilterStrength
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH,
    AUTO,
    OFF
  };

namespace BandwidthReductionFilterStrengthMapper
{
AWS_MEDIACONVERT_API BandwidthReductionFilterStrength GetBandwidthReductionFilterStrengthForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBandwidthReductionFilterStrength(BandwidthReductionFilterStrength value);
} // namespace BandwidthReductionFilterStrengthMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
