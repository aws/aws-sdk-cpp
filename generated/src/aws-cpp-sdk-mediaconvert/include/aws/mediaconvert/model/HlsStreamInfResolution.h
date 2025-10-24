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
enum class HlsStreamInfResolution { NOT_SET, INCLUDE, EXCLUDE };

namespace HlsStreamInfResolutionMapper {
AWS_MEDIACONVERT_API HlsStreamInfResolution GetHlsStreamInfResolutionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsStreamInfResolution(HlsStreamInfResolution value);
}  // namespace HlsStreamInfResolutionMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
