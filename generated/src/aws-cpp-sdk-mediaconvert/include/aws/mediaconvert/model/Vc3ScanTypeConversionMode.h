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
  enum class Vc3ScanTypeConversionMode
  {
    NOT_SET,
    INTERLACED,
    INTERLACED_OPTIMIZE
  };

namespace Vc3ScanTypeConversionModeMapper
{
AWS_MEDIACONVERT_API Vc3ScanTypeConversionMode GetVc3ScanTypeConversionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVc3ScanTypeConversionMode(Vc3ScanTypeConversionMode value);
} // namespace Vc3ScanTypeConversionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
