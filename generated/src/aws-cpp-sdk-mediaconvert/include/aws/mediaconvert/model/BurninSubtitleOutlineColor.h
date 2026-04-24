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
enum class BurninSubtitleOutlineColor { NOT_SET, BLACK, WHITE, YELLOW, RED, GREEN, BLUE, AUTO };

namespace BurninSubtitleOutlineColorMapper {
AWS_MEDIACONVERT_API BurninSubtitleOutlineColor GetBurninSubtitleOutlineColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleOutlineColor(BurninSubtitleOutlineColor value);
}  // namespace BurninSubtitleOutlineColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
