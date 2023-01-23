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
  enum class H264DynamicSubGop
  {
    NOT_SET,
    ADAPTIVE,
    STATIC_
  };

namespace H264DynamicSubGopMapper
{
AWS_MEDIACONVERT_API H264DynamicSubGop GetH264DynamicSubGopForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264DynamicSubGop(H264DynamicSubGop value);
} // namespace H264DynamicSubGopMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
