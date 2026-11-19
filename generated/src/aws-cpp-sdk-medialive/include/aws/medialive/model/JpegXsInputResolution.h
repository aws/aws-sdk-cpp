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
enum class JpegXsInputResolution { NOT_SET, HD };

namespace JpegXsInputResolutionMapper {
AWS_MEDIALIVE_API JpegXsInputResolution GetJpegXsInputResolutionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForJpegXsInputResolution(JpegXsInputResolution value);
}  // namespace JpegXsInputResolutionMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
