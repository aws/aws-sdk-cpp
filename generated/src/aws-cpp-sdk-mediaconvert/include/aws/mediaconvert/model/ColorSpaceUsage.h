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
enum class ColorSpaceUsage { NOT_SET, FORCE, FALLBACK };

namespace ColorSpaceUsageMapper {
AWS_MEDIACONVERT_API ColorSpaceUsage GetColorSpaceUsageForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForColorSpaceUsage(ColorSpaceUsage value);
}  // namespace ColorSpaceUsageMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
