/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/MediaPackageV2CaptionLanguageSetting.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace MediaPackageV2CaptionLanguageSettingMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int NONE_HASH = HashingUtils::HashString("NONE");

MediaPackageV2CaptionLanguageSetting GetMediaPackageV2CaptionLanguageSettingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return MediaPackageV2CaptionLanguageSetting::AUTO;
  } else if (hashCode == NONE_HASH) {
    return MediaPackageV2CaptionLanguageSetting::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MediaPackageV2CaptionLanguageSetting>(hashCode);
  }

  return MediaPackageV2CaptionLanguageSetting::NOT_SET;
}

Aws::String GetNameForMediaPackageV2CaptionLanguageSetting(MediaPackageV2CaptionLanguageSetting enumValue) {
  switch (enumValue) {
    case MediaPackageV2CaptionLanguageSetting::NOT_SET:
      return {};
    case MediaPackageV2CaptionLanguageSetting::AUTO:
      return "AUTO";
    case MediaPackageV2CaptionLanguageSetting::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MediaPackageV2CaptionLanguageSettingMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
