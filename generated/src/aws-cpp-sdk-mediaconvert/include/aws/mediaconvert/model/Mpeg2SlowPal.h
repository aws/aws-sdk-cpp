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
  enum class Mpeg2SlowPal
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Mpeg2SlowPalMapper
{
AWS_MEDIACONVERT_API Mpeg2SlowPal GetMpeg2SlowPalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2SlowPal(Mpeg2SlowPal value);
} // namespace Mpeg2SlowPalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
