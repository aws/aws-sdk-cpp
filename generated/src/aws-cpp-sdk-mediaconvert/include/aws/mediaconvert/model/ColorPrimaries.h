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
  enum class ColorPrimaries
  {
    NOT_SET,
    ITU_709,
    UNSPECIFIED,
    RESERVED,
    ITU_470M,
    ITU_470BG,
    SMPTE_170M,
    SMPTE_240M,
    GENERIC_FILM,
    ITU_2020,
    SMPTE_428_1,
    SMPTE_431_2,
    SMPTE_EG_432_1,
    IPT,
    SMPTE_2067XYZ,
    EBU_3213_E,
    LAST
  };

namespace ColorPrimariesMapper
{
AWS_MEDIACONVERT_API ColorPrimaries GetColorPrimariesForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForColorPrimaries(ColorPrimaries value);
} // namespace ColorPrimariesMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
