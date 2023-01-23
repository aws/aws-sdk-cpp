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
  enum class H264Telecine
  {
    NOT_SET,
    NONE,
    SOFT,
    HARD
  };

namespace H264TelecineMapper
{
AWS_MEDIACONVERT_API H264Telecine GetH264TelecineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264Telecine(H264Telecine value);
} // namespace H264TelecineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
