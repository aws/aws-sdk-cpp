/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class Ac4DynamicRangeCompressionDrcProfile { NOT_SET, NONE, FILM_STANDARD, FILM_LIGHT, MUSIC_STANDARD, MUSIC_LIGHT, SPEECH };

namespace Ac4DynamicRangeCompressionDrcProfileMapper {
AWS_MEDIACONVERT_API Ac4DynamicRangeCompressionDrcProfile GetAc4DynamicRangeCompressionDrcProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc4DynamicRangeCompressionDrcProfile(Ac4DynamicRangeCompressionDrcProfile value);
}  // namespace Ac4DynamicRangeCompressionDrcProfileMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
