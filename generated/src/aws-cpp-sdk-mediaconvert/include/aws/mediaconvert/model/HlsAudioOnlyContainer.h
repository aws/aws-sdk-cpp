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
enum class HlsAudioOnlyContainer { NOT_SET, AUTOMATIC, M2TS };

namespace HlsAudioOnlyContainerMapper {
AWS_MEDIACONVERT_API HlsAudioOnlyContainer GetHlsAudioOnlyContainerForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsAudioOnlyContainer(HlsAudioOnlyContainer value);
}  // namespace HlsAudioOnlyContainerMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
