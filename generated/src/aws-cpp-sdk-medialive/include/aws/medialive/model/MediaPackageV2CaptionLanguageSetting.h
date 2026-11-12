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
enum class MediaPackageV2CaptionLanguageSetting { NOT_SET, AUTO, NONE };

namespace MediaPackageV2CaptionLanguageSettingMapper {
AWS_MEDIALIVE_API MediaPackageV2CaptionLanguageSetting GetMediaPackageV2CaptionLanguageSettingForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMediaPackageV2CaptionLanguageSetting(MediaPackageV2CaptionLanguageSetting value);
}  // namespace MediaPackageV2CaptionLanguageSettingMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
