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
enum class BurninSubtitleShadowColor { NOT_SET, NONE, BLACK, WHITE, AUTO };

namespace BurninSubtitleShadowColorMapper {
AWS_MEDIACONVERT_API BurninSubtitleShadowColor GetBurninSubtitleShadowColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleShadowColor(BurninSubtitleShadowColor value);
}  // namespace BurninSubtitleShadowColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
