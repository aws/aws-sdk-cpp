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
  enum class ColorSpaceConversion
  {
    NOT_SET,
    NONE,
    FORCE_601,
    FORCE_709,
    FORCE_HDR10,
    FORCE_HLG_2020,
    FORCE_P3DCI,
    FORCE_P3D65_SDR
  };

namespace ColorSpaceConversionMapper
{
AWS_MEDIACONVERT_API ColorSpaceConversion GetColorSpaceConversionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForColorSpaceConversion(ColorSpaceConversion value);
} // namespace ColorSpaceConversionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
