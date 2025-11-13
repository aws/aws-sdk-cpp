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
enum class FrameControl { NOT_SET, NEAREST_IDRFRAME, NEAREST_IFRAME };

namespace FrameControlMapper {
AWS_MEDIACONVERT_API FrameControl GetFrameControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForFrameControl(FrameControl value);
}  // namespace FrameControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
