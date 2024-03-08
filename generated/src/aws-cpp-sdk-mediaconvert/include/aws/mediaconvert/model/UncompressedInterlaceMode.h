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
  enum class UncompressedInterlaceMode
  {
    NOT_SET,
    INTERLACED,
    PROGRESSIVE
  };

namespace UncompressedInterlaceModeMapper
{
AWS_MEDIACONVERT_API UncompressedInterlaceMode GetUncompressedInterlaceModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForUncompressedInterlaceMode(UncompressedInterlaceMode value);
} // namespace UncompressedInterlaceModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
