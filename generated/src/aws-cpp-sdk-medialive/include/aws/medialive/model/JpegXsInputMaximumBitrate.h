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
enum class JpegXsInputMaximumBitrate { NOT_SET, MAX_500_MBPS };

namespace JpegXsInputMaximumBitrateMapper {
AWS_MEDIALIVE_API JpegXsInputMaximumBitrate GetJpegXsInputMaximumBitrateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForJpegXsInputMaximumBitrate(JpegXsInputMaximumBitrate value);
}  // namespace JpegXsInputMaximumBitrateMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
