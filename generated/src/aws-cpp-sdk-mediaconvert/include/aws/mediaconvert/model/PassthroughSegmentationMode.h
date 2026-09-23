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
enum class PassthroughSegmentationMode { NOT_SET, AUTO, DURATION_BASED, GOP_COUNT };

namespace PassthroughSegmentationModeMapper {
AWS_MEDIACONVERT_API PassthroughSegmentationMode GetPassthroughSegmentationModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForPassthroughSegmentationMode(PassthroughSegmentationMode value);
}  // namespace PassthroughSegmentationModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
