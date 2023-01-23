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
  enum class Mpeg2Telecine
  {
    NOT_SET,
    NONE,
    SOFT,
    HARD
  };

namespace Mpeg2TelecineMapper
{
AWS_MEDIACONVERT_API Mpeg2Telecine GetMpeg2TelecineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2Telecine(Mpeg2Telecine value);
} // namespace Mpeg2TelecineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
