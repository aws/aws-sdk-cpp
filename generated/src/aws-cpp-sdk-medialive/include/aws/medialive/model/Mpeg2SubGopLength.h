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
enum class Mpeg2SubGopLength { NOT_SET, DYNAMIC, FIXED };

namespace Mpeg2SubGopLengthMapper {
AWS_MEDIALIVE_API Mpeg2SubGopLength GetMpeg2SubGopLengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2SubGopLength(Mpeg2SubGopLength value);
}  // namespace Mpeg2SubGopLengthMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
