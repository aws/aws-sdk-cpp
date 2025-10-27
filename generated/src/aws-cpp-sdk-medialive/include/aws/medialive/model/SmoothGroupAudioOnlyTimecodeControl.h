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
enum class SmoothGroupAudioOnlyTimecodeControl { NOT_SET, PASSTHROUGH, USE_CONFIGURED_CLOCK };

namespace SmoothGroupAudioOnlyTimecodeControlMapper {
AWS_MEDIALIVE_API SmoothGroupAudioOnlyTimecodeControl GetSmoothGroupAudioOnlyTimecodeControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupAudioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl value);
}  // namespace SmoothGroupAudioOnlyTimecodeControlMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
