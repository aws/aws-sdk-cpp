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
  enum class Ac3DynamicRangeCompressionRf
  {
    NOT_SET,
    FILM_STANDARD,
    FILM_LIGHT,
    MUSIC_STANDARD,
    MUSIC_LIGHT,
    SPEECH,
    NONE
  };

namespace Ac3DynamicRangeCompressionRfMapper
{
AWS_MEDIACONVERT_API Ac3DynamicRangeCompressionRf GetAc3DynamicRangeCompressionRfForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc3DynamicRangeCompressionRf(Ac3DynamicRangeCompressionRf value);
} // namespace Ac3DynamicRangeCompressionRfMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
