/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class CdiInputResolution { NOT_SET, SD, HD, FHD, UHD };

namespace CdiInputResolutionMapper {
AWS_MEDIALIVE_API CdiInputResolution GetCdiInputResolutionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCdiInputResolution(CdiInputResolution value);
}  // namespace CdiInputResolutionMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
