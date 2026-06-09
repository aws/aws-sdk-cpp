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
enum class CaptionSynchronizationMode { NOT_SET, NO_VIDEO_DELAY, VIDEO_ALIGNED_CAPTIONS };

namespace CaptionSynchronizationModeMapper {
AWS_MEDIALIVE_API CaptionSynchronizationMode GetCaptionSynchronizationModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCaptionSynchronizationMode(CaptionSynchronizationMode value);
}  // namespace CaptionSynchronizationModeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
