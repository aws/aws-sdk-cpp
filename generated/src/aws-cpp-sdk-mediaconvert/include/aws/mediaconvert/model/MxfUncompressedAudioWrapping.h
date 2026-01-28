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
enum class MxfUncompressedAudioWrapping { NOT_SET, AUTO, AES3 };

namespace MxfUncompressedAudioWrappingMapper {
AWS_MEDIACONVERT_API MxfUncompressedAudioWrapping GetMxfUncompressedAudioWrappingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMxfUncompressedAudioWrapping(MxfUncompressedAudioWrapping value);
}  // namespace MxfUncompressedAudioWrappingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
