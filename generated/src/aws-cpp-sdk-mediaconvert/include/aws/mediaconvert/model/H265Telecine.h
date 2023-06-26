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
  enum class H265Telecine
  {
    NOT_SET,
    NONE,
    SOFT,
    HARD
  };

namespace H265TelecineMapper
{
AWS_MEDIACONVERT_API H265Telecine GetH265TelecineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265Telecine(H265Telecine value);
} // namespace H265TelecineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
