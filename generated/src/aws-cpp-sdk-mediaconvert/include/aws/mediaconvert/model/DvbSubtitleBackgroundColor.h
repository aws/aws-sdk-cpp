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
enum class DvbSubtitleBackgroundColor { NOT_SET, NONE, BLACK, WHITE, AUTO };

namespace DvbSubtitleBackgroundColorMapper {
AWS_MEDIACONVERT_API DvbSubtitleBackgroundColor GetDvbSubtitleBackgroundColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleBackgroundColor(DvbSubtitleBackgroundColor value);
}  // namespace DvbSubtitleBackgroundColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
