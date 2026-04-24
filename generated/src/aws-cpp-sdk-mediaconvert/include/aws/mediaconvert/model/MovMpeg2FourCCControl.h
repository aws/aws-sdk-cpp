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
enum class MovMpeg2FourCCControl { NOT_SET, XDCAM, MPEG };

namespace MovMpeg2FourCCControlMapper {
AWS_MEDIACONVERT_API MovMpeg2FourCCControl GetMovMpeg2FourCCControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMovMpeg2FourCCControl(MovMpeg2FourCCControl value);
}  // namespace MovMpeg2FourCCControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
