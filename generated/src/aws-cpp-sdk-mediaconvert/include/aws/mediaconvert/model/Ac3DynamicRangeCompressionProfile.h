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
  enum class Ac3DynamicRangeCompressionProfile
  {
    NOT_SET,
    FILM_STANDARD,
    NONE
  };

namespace Ac3DynamicRangeCompressionProfileMapper
{
AWS_MEDIACONVERT_API Ac3DynamicRangeCompressionProfile GetAc3DynamicRangeCompressionProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc3DynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile value);
} // namespace Ac3DynamicRangeCompressionProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
