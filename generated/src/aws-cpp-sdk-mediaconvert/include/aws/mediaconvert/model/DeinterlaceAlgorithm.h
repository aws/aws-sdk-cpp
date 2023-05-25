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
  enum class DeinterlaceAlgorithm
  {
    NOT_SET,
    INTERPOLATE,
    INTERPOLATE_TICKER,
    BLEND,
    BLEND_TICKER
  };

namespace DeinterlaceAlgorithmMapper
{
AWS_MEDIACONVERT_API DeinterlaceAlgorithm GetDeinterlaceAlgorithmForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDeinterlaceAlgorithm(DeinterlaceAlgorithm value);
} // namespace DeinterlaceAlgorithmMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
