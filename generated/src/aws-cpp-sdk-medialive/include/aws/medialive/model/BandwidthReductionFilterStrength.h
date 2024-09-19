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
  enum class BandwidthReductionFilterStrength
  {
    NOT_SET,
    AUTO,
    STRENGTH_1,
    STRENGTH_2,
    STRENGTH_3,
    STRENGTH_4
  };

namespace BandwidthReductionFilterStrengthMapper
{
AWS_MEDIALIVE_API BandwidthReductionFilterStrength GetBandwidthReductionFilterStrengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBandwidthReductionFilterStrength(BandwidthReductionFilterStrength value);
} // namespace BandwidthReductionFilterStrengthMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
