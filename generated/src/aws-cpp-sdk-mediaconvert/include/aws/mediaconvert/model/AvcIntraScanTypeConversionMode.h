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
  enum class AvcIntraScanTypeConversionMode
  {
    NOT_SET,
    INTERLACED,
    INTERLACED_OPTIMIZE
  };

namespace AvcIntraScanTypeConversionModeMapper
{
AWS_MEDIACONVERT_API AvcIntraScanTypeConversionMode GetAvcIntraScanTypeConversionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAvcIntraScanTypeConversionMode(AvcIntraScanTypeConversionMode value);
} // namespace AvcIntraScanTypeConversionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
