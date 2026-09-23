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
enum class AudioSmpte337Passthrough { NOT_SET, ENABLED, DISABLED };

namespace AudioSmpte337PassthroughMapper {
AWS_MEDIACONVERT_API AudioSmpte337Passthrough GetAudioSmpte337PassthroughForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioSmpte337Passthrough(AudioSmpte337Passthrough value);
}  // namespace AudioSmpte337PassthroughMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
