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
  enum class H265ScanTypeConversionMode
  {
    NOT_SET,
    INTERLACED,
    INTERLACED_OPTIMIZE
  };

namespace H265ScanTypeConversionModeMapper
{
AWS_MEDIACONVERT_API H265ScanTypeConversionMode GetH265ScanTypeConversionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265ScanTypeConversionMode(H265ScanTypeConversionMode value);
} // namespace H265ScanTypeConversionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
