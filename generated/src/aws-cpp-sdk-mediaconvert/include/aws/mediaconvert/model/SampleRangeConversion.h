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
enum class SampleRangeConversion { NOT_SET, LIMITED_RANGE_SQUEEZE, NONE, LIMITED_RANGE_CLIP };

namespace SampleRangeConversionMapper {
AWS_MEDIACONVERT_API SampleRangeConversion GetSampleRangeConversionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForSampleRangeConversion(SampleRangeConversion value);
}  // namespace SampleRangeConversionMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
