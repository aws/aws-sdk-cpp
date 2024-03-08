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
  enum class ColorSpace
  {
    NOT_SET,
    HDR10,
    HLG_2020,
    REC_601,
    REC_709
  };

namespace ColorSpaceMapper
{
AWS_MEDIALIVE_API ColorSpace GetColorSpaceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForColorSpace(ColorSpace value);
} // namespace ColorSpaceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
