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
enum class Vp9QualityTuningLevel { NOT_SET, MULTI_PASS, MULTI_PASS_HQ };

namespace Vp9QualityTuningLevelMapper {
AWS_MEDIACONVERT_API Vp9QualityTuningLevel GetVp9QualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp9QualityTuningLevel(Vp9QualityTuningLevel value);
}  // namespace Vp9QualityTuningLevelMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
