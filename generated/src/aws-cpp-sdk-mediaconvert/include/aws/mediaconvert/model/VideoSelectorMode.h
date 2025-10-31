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
enum class VideoSelectorMode { NOT_SET, AUTO, REMUX_ALL };

namespace VideoSelectorModeMapper {
AWS_MEDIACONVERT_API VideoSelectorMode GetVideoSelectorModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVideoSelectorMode(VideoSelectorMode value);
}  // namespace VideoSelectorModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
