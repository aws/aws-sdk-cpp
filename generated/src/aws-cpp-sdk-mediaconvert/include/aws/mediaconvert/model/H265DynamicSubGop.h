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
  enum class H265DynamicSubGop
  {
    NOT_SET,
    ADAPTIVE,
    STATIC_
  };

namespace H265DynamicSubGopMapper
{
AWS_MEDIACONVERT_API H265DynamicSubGop GetH265DynamicSubGopForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265DynamicSubGop(H265DynamicSubGop value);
} // namespace H265DynamicSubGopMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
