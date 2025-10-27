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
enum class BurninSubtitleFontColor { NOT_SET, WHITE, BLACK, YELLOW, RED, GREEN, BLUE, HEX, AUTO };

namespace BurninSubtitleFontColorMapper {
AWS_MEDIACONVERT_API BurninSubtitleFontColor GetBurninSubtitleFontColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleFontColor(BurninSubtitleFontColor value);
}  // namespace BurninSubtitleFontColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
