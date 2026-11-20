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
enum class Av1TemporalAdaptiveQuantization { NOT_SET, DISABLED, ENABLED };

namespace Av1TemporalAdaptiveQuantizationMapper {
AWS_MEDIACONVERT_API Av1TemporalAdaptiveQuantization GetAv1TemporalAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1TemporalAdaptiveQuantization(Av1TemporalAdaptiveQuantization value);
}  // namespace Av1TemporalAdaptiveQuantizationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
