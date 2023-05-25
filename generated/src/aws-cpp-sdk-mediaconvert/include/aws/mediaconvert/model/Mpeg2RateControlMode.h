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
  enum class Mpeg2RateControlMode
  {
    NOT_SET,
    VBR,
    CBR
  };

namespace Mpeg2RateControlModeMapper
{
AWS_MEDIACONVERT_API Mpeg2RateControlMode GetMpeg2RateControlModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2RateControlMode(Mpeg2RateControlMode value);
} // namespace Mpeg2RateControlModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
