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
enum class DvbSubtitleTeletextSpacing { NOT_SET, FIXED_GRID, PROPORTIONAL, AUTO };

namespace DvbSubtitleTeletextSpacingMapper {
AWS_MEDIACONVERT_API DvbSubtitleTeletextSpacing GetDvbSubtitleTeletextSpacingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleTeletextSpacing(DvbSubtitleTeletextSpacing value);
}  // namespace DvbSubtitleTeletextSpacingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
