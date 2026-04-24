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
enum class Mpeg2FramerateControl { NOT_SET, INITIALIZE_FROM_SOURCE, SPECIFIED };

namespace Mpeg2FramerateControlMapper {
AWS_MEDIACONVERT_API Mpeg2FramerateControl GetMpeg2FramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2FramerateControl(Mpeg2FramerateControl value);
}  // namespace Mpeg2FramerateControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
