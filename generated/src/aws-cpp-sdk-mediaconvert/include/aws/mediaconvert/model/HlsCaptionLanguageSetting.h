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
enum class HlsCaptionLanguageSetting { NOT_SET, INSERT, OMIT, NONE };

namespace HlsCaptionLanguageSettingMapper {
AWS_MEDIACONVERT_API HlsCaptionLanguageSetting GetHlsCaptionLanguageSettingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsCaptionLanguageSetting(HlsCaptionLanguageSetting value);
}  // namespace HlsCaptionLanguageSettingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
