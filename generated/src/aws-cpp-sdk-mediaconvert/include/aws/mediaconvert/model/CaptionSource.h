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
enum class CaptionSource { NOT_SET, INPUT_CAPTION_SELECTOR, SMART_SUBTITLE };

namespace CaptionSourceMapper {
AWS_MEDIACONVERT_API CaptionSource GetCaptionSourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCaptionSource(CaptionSource value);
}  // namespace CaptionSourceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
