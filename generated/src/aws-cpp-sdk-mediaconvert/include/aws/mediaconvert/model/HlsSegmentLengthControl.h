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
enum class HlsSegmentLengthControl { NOT_SET, EXACT, GOP_MULTIPLE, MATCH };

namespace HlsSegmentLengthControlMapper {
AWS_MEDIACONVERT_API HlsSegmentLengthControl GetHlsSegmentLengthControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsSegmentLengthControl(HlsSegmentLengthControl value);
}  // namespace HlsSegmentLengthControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
