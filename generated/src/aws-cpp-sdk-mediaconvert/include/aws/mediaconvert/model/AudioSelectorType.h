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
enum class AudioSelectorType { NOT_SET, PID, TRACK, LANGUAGE_CODE, HLS_RENDITION_GROUP, ALL_PCM };

namespace AudioSelectorTypeMapper {
AWS_MEDIACONVERT_API AudioSelectorType GetAudioSelectorTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioSelectorType(AudioSelectorType value);
}  // namespace AudioSelectorTypeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
