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
  enum class ProresScanTypeConversionMode
  {
    NOT_SET,
    INTERLACED,
    INTERLACED_OPTIMIZE
  };

namespace ProresScanTypeConversionModeMapper
{
AWS_MEDIACONVERT_API ProresScanTypeConversionMode GetProresScanTypeConversionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForProresScanTypeConversionMode(ProresScanTypeConversionMode value);
} // namespace ProresScanTypeConversionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
