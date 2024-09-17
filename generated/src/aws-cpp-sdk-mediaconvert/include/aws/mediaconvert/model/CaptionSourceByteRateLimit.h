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
  enum class CaptionSourceByteRateLimit
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CaptionSourceByteRateLimitMapper
{
AWS_MEDIACONVERT_API CaptionSourceByteRateLimit GetCaptionSourceByteRateLimitForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCaptionSourceByteRateLimit(CaptionSourceByteRateLimit value);
} // namespace CaptionSourceByteRateLimitMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
