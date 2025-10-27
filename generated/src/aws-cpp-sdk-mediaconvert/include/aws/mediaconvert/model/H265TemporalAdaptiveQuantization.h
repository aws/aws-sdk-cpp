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
enum class H265TemporalAdaptiveQuantization { NOT_SET, DISABLED, ENABLED };

namespace H265TemporalAdaptiveQuantizationMapper {
AWS_MEDIACONVERT_API H265TemporalAdaptiveQuantization GetH265TemporalAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265TemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization value);
}  // namespace H265TemporalAdaptiveQuantizationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
