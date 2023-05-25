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
  enum class BandwidthReductionFilterSharpening
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH,
    OFF
  };

namespace BandwidthReductionFilterSharpeningMapper
{
AWS_MEDIACONVERT_API BandwidthReductionFilterSharpening GetBandwidthReductionFilterSharpeningForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBandwidthReductionFilterSharpening(BandwidthReductionFilterSharpening value);
} // namespace BandwidthReductionFilterSharpeningMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
