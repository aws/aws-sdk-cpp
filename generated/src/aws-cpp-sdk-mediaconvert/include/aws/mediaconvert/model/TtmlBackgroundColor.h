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
enum class TtmlBackgroundColor { NOT_SET, NONE, BLACK, WHITE, AUTO };

namespace TtmlBackgroundColorMapper {
AWS_MEDIACONVERT_API TtmlBackgroundColor GetTtmlBackgroundColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTtmlBackgroundColor(TtmlBackgroundColor value);
}  // namespace TtmlBackgroundColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
