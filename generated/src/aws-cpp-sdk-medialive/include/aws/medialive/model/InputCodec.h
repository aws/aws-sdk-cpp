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
enum class InputCodec { NOT_SET, MPEG2, AVC, HEVC };

namespace InputCodecMapper {
AWS_MEDIALIVE_API InputCodec GetInputCodecForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputCodec(InputCodec value);
}  // namespace InputCodecMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
