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
  enum class Mpeg2CodecLevel
  {
    NOT_SET,
    AUTO,
    LOW,
    MAIN,
    HIGH1440,
    HIGH
  };

namespace Mpeg2CodecLevelMapper
{
AWS_MEDIACONVERT_API Mpeg2CodecLevel GetMpeg2CodecLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2CodecLevel(Mpeg2CodecLevel value);
} // namespace Mpeg2CodecLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
