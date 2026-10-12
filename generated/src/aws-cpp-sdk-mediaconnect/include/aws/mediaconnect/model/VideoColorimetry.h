/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class VideoColorimetry { NOT_SET, BT709, BT470M, BT470BG, BT601, SMPTE240M, GENERIC_FILM, BT2020, SMPTE428, SMPTE431, SMPTE432 };

namespace VideoColorimetryMapper {
AWS_MEDIACONNECT_API VideoColorimetry GetVideoColorimetryForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForVideoColorimetry(VideoColorimetry value);
}  // namespace VideoColorimetryMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
