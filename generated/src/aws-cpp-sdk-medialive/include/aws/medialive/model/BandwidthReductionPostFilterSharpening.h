/**
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
  enum class BandwidthReductionPostFilterSharpening
  {
    NOT_SET,
    DISABLED,
    SHARPENING_1,
    SHARPENING_2,
    SHARPENING_3
  };

namespace BandwidthReductionPostFilterSharpeningMapper
{
AWS_MEDIALIVE_API BandwidthReductionPostFilterSharpening GetBandwidthReductionPostFilterSharpeningForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBandwidthReductionPostFilterSharpening(BandwidthReductionPostFilterSharpening value);
} // namespace BandwidthReductionPostFilterSharpeningMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
