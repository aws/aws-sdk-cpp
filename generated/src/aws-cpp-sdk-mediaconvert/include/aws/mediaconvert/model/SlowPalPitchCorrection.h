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
enum class SlowPalPitchCorrection { NOT_SET, DISABLED, ENABLED };

namespace SlowPalPitchCorrectionMapper {
AWS_MEDIACONVERT_API SlowPalPitchCorrection GetSlowPalPitchCorrectionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForSlowPalPitchCorrection(SlowPalPitchCorrection value);
}  // namespace SlowPalPitchCorrectionMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
