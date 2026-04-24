/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/Ac4DynamicRangeCompressionDrcProfile.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace Ac4DynamicRangeCompressionDrcProfileMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
static const int FILM_LIGHT_HASH = HashingUtils::HashString("FILM_LIGHT");
static const int MUSIC_STANDARD_HASH = HashingUtils::HashString("MUSIC_STANDARD");
static const int MUSIC_LIGHT_HASH = HashingUtils::HashString("MUSIC_LIGHT");
static const int SPEECH_HASH = HashingUtils::HashString("SPEECH");

Ac4DynamicRangeCompressionDrcProfile GetAc4DynamicRangeCompressionDrcProfileForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return Ac4DynamicRangeCompressionDrcProfile::NONE;
  } else if (hashCode == FILM_STANDARD_HASH) {
    return Ac4DynamicRangeCompressionDrcProfile::FILM_STANDARD;
  } else if (hashCode == FILM_LIGHT_HASH) {
    return Ac4DynamicRangeCompressionDrcProfile::FILM_LIGHT;
  } else if (hashCode == MUSIC_STANDARD_HASH) {
    return Ac4DynamicRangeCompressionDrcProfile::MUSIC_STANDARD;
  } else if (hashCode == MUSIC_LIGHT_HASH) {
    return Ac4DynamicRangeCompressionDrcProfile::MUSIC_LIGHT;
  } else if (hashCode == SPEECH_HASH) {
    return Ac4DynamicRangeCompressionDrcProfile::SPEECH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Ac4DynamicRangeCompressionDrcProfile>(hashCode);
  }

  return Ac4DynamicRangeCompressionDrcProfile::NOT_SET;
}

Aws::String GetNameForAc4DynamicRangeCompressionDrcProfile(Ac4DynamicRangeCompressionDrcProfile enumValue) {
  switch (enumValue) {
    case Ac4DynamicRangeCompressionDrcProfile::NOT_SET:
      return {};
    case Ac4DynamicRangeCompressionDrcProfile::NONE:
      return "NONE";
    case Ac4DynamicRangeCompressionDrcProfile::FILM_STANDARD:
      return "FILM_STANDARD";
    case Ac4DynamicRangeCompressionDrcProfile::FILM_LIGHT:
      return "FILM_LIGHT";
    case Ac4DynamicRangeCompressionDrcProfile::MUSIC_STANDARD:
      return "MUSIC_STANDARD";
    case Ac4DynamicRangeCompressionDrcProfile::MUSIC_LIGHT:
      return "MUSIC_LIGHT";
    case Ac4DynamicRangeCompressionDrcProfile::SPEECH:
      return "SPEECH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Ac4DynamicRangeCompressionDrcProfileMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
