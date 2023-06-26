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
  enum class Mpeg2DynamicSubGop
  {
    NOT_SET,
    ADAPTIVE,
    STATIC_
  };

namespace Mpeg2DynamicSubGopMapper
{
AWS_MEDIACONVERT_API Mpeg2DynamicSubGop GetMpeg2DynamicSubGopForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2DynamicSubGop(Mpeg2DynamicSubGop value);
} // namespace Mpeg2DynamicSubGopMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
