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
enum class H265MvOverPictureBoundaries { NOT_SET, ENABLED, DISABLED };

namespace H265MvOverPictureBoundariesMapper {
AWS_MEDIACONVERT_API H265MvOverPictureBoundaries GetH265MvOverPictureBoundariesForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265MvOverPictureBoundaries(H265MvOverPictureBoundaries value);
}  // namespace H265MvOverPictureBoundariesMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
