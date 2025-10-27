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
enum class AudioTypeControl { NOT_SET, FOLLOW_INPUT, USE_CONFIGURED };

namespace AudioTypeControlMapper {
AWS_MEDIACONVERT_API AudioTypeControl GetAudioTypeControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioTypeControl(AudioTypeControl value);
}  // namespace AudioTypeControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
