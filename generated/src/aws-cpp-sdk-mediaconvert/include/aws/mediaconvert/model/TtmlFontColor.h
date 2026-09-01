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
enum class TtmlFontColor { NOT_SET, WHITE, BLACK, YELLOW, RED, GREEN, BLUE, AUTO };

namespace TtmlFontColorMapper {
AWS_MEDIACONVERT_API TtmlFontColor GetTtmlFontColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTtmlFontColor(TtmlFontColor value);
}  // namespace TtmlFontColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
