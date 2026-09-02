/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/AbWatermarkingProfile.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace AbWatermarkingProfileMapper {

static const int CAMCORDING_HASH = HashingUtils::HashString("CAMCORDING");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int HQ_HASH = HashingUtils::HashString("HQ");
static const int MEZZANINE_HASH = HashingUtils::HashString("MEZZANINE");
static const int ROBUST_HASH = HashingUtils::HashString("ROBUST");

AbWatermarkingProfile GetAbWatermarkingProfileForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CAMCORDING_HASH) {
    return AbWatermarkingProfile::CAMCORDING;
  } else if (hashCode == CUSTOM_HASH) {
    return AbWatermarkingProfile::CUSTOM;
  } else if (hashCode == DEFAULT_HASH) {
    return AbWatermarkingProfile::DEFAULT;
  } else if (hashCode == HQ_HASH) {
    return AbWatermarkingProfile::HQ;
  } else if (hashCode == MEZZANINE_HASH) {
    return AbWatermarkingProfile::MEZZANINE;
  } else if (hashCode == ROBUST_HASH) {
    return AbWatermarkingProfile::ROBUST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AbWatermarkingProfile>(hashCode);
  }

  return AbWatermarkingProfile::NOT_SET;
}

Aws::String GetNameForAbWatermarkingProfile(AbWatermarkingProfile enumValue) {
  switch (enumValue) {
    case AbWatermarkingProfile::NOT_SET:
      return {};
    case AbWatermarkingProfile::CAMCORDING:
      return "CAMCORDING";
    case AbWatermarkingProfile::CUSTOM:
      return "CUSTOM";
    case AbWatermarkingProfile::DEFAULT:
      return "DEFAULT";
    case AbWatermarkingProfile::HQ:
      return "HQ";
    case AbWatermarkingProfile::MEZZANINE:
      return "MEZZANINE";
    case AbWatermarkingProfile::ROBUST:
      return "ROBUST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AbWatermarkingProfileMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
