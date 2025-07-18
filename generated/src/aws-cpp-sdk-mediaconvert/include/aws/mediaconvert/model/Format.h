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
  enum class Format
  {
    NOT_SET,
    mp4,
    quicktime,
    matroska,
    webm,
    mxf
  };

namespace FormatMapper
{
AWS_MEDIACONVERT_API Format GetFormatForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
