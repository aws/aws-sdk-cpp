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
  enum class Eac3DynamicRangeCompressionRf
  {
    NOT_SET,
    NONE,
    FILM_STANDARD,
    FILM_LIGHT,
    MUSIC_STANDARD,
    MUSIC_LIGHT,
    SPEECH
  };

namespace Eac3DynamicRangeCompressionRfMapper
{
AWS_MEDIACONVERT_API Eac3DynamicRangeCompressionRf GetEac3DynamicRangeCompressionRfForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3DynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf value);
} // namespace Eac3DynamicRangeCompressionRfMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
