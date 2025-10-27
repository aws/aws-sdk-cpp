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
enum class MotionImagePlayback { NOT_SET, ONCE, REPEAT };

namespace MotionImagePlaybackMapper {
AWS_MEDIACONVERT_API MotionImagePlayback GetMotionImagePlaybackForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMotionImagePlayback(MotionImagePlayback value);
}  // namespace MotionImagePlaybackMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
