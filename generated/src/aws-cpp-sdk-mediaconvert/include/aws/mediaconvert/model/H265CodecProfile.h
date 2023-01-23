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
  enum class H265CodecProfile
  {
    NOT_SET,
    MAIN_MAIN,
    MAIN_HIGH,
    MAIN10_MAIN,
    MAIN10_HIGH,
    MAIN_422_8BIT_MAIN,
    MAIN_422_8BIT_HIGH,
    MAIN_422_10BIT_MAIN,
    MAIN_422_10BIT_HIGH
  };

namespace H265CodecProfileMapper
{
AWS_MEDIACONVERT_API H265CodecProfile GetH265CodecProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265CodecProfile(H265CodecProfile value);
} // namespace H265CodecProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
