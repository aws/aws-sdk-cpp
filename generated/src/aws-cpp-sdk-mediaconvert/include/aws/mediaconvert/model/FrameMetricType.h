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
enum class FrameMetricType { NOT_SET, PSNR, SSIM, MS_SSIM, PSNR_HVS, VMAF, QVBR, SHOT_CHANGE };

namespace FrameMetricTypeMapper {
AWS_MEDIACONVERT_API FrameMetricType GetFrameMetricTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForFrameMetricType(FrameMetricType value);
}  // namespace FrameMetricTypeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
