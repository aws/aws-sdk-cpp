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
enum class AbWatermarkingProfile { NOT_SET, CAMCORDING, CUSTOM, DEFAULT, HQ, MEZZANINE, ROBUST };

namespace AbWatermarkingProfileMapper {
AWS_MEDIALIVE_API AbWatermarkingProfile GetAbWatermarkingProfileForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAbWatermarkingProfile(AbWatermarkingProfile value);
}  // namespace AbWatermarkingProfileMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
