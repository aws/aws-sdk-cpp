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
enum class VideoSelectorType { NOT_SET, AUTO, STREAM };

namespace VideoSelectorTypeMapper {
AWS_MEDIACONVERT_API VideoSelectorType GetVideoSelectorTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVideoSelectorType(VideoSelectorType value);
}  // namespace VideoSelectorTypeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
