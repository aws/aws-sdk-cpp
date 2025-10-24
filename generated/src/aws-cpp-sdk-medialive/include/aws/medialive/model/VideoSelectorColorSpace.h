/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class VideoSelectorColorSpace { NOT_SET, FOLLOW, HDR10, HLG_2020, REC_601, REC_709 };

namespace VideoSelectorColorSpaceMapper {
AWS_MEDIALIVE_API VideoSelectorColorSpace GetVideoSelectorColorSpaceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForVideoSelectorColorSpace(VideoSelectorColorSpace value);
}  // namespace VideoSelectorColorSpaceMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
