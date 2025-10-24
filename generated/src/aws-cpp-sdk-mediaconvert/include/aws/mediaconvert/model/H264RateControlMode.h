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
enum class H264RateControlMode { NOT_SET, VBR, CBR, QVBR };

namespace H264RateControlModeMapper {
AWS_MEDIACONVERT_API H264RateControlMode GetH264RateControlModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264RateControlMode(H264RateControlMode value);
}  // namespace H264RateControlModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
