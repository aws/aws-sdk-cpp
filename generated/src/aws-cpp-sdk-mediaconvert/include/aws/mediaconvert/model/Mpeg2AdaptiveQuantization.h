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
enum class Mpeg2AdaptiveQuantization { NOT_SET, OFF, LOW, MEDIUM, HIGH };

namespace Mpeg2AdaptiveQuantizationMapper {
AWS_MEDIACONVERT_API Mpeg2AdaptiveQuantization GetMpeg2AdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2AdaptiveQuantization(Mpeg2AdaptiveQuantization value);
}  // namespace Mpeg2AdaptiveQuantizationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
