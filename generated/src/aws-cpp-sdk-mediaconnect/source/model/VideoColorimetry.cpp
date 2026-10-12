/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/VideoColorimetry.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace VideoColorimetryMapper {

static const int BT709_HASH = HashingUtils::HashString("BT709");
static const int BT470M_HASH = HashingUtils::HashString("BT470M");
static const int BT470BG_HASH = HashingUtils::HashString("BT470BG");
static const int BT601_HASH = HashingUtils::HashString("BT601");
static const int SMPTE240M_HASH = HashingUtils::HashString("SMPTE240M");
static const int GENERIC_FILM_HASH = HashingUtils::HashString("GENERIC_FILM");
static const int BT2020_HASH = HashingUtils::HashString("BT2020");
static const int SMPTE428_HASH = HashingUtils::HashString("SMPTE428");
static const int SMPTE431_HASH = HashingUtils::HashString("SMPTE431");
static const int SMPTE432_HASH = HashingUtils::HashString("SMPTE432");

VideoColorimetry GetVideoColorimetryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BT709_HASH) {
    return VideoColorimetry::BT709;
  } else if (hashCode == BT470M_HASH) {
    return VideoColorimetry::BT470M;
  } else if (hashCode == BT470BG_HASH) {
    return VideoColorimetry::BT470BG;
  } else if (hashCode == BT601_HASH) {
    return VideoColorimetry::BT601;
  } else if (hashCode == SMPTE240M_HASH) {
    return VideoColorimetry::SMPTE240M;
  } else if (hashCode == GENERIC_FILM_HASH) {
    return VideoColorimetry::GENERIC_FILM;
  } else if (hashCode == BT2020_HASH) {
    return VideoColorimetry::BT2020;
  } else if (hashCode == SMPTE428_HASH) {
    return VideoColorimetry::SMPTE428;
  } else if (hashCode == SMPTE431_HASH) {
    return VideoColorimetry::SMPTE431;
  } else if (hashCode == SMPTE432_HASH) {
    return VideoColorimetry::SMPTE432;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VideoColorimetry>(hashCode);
  }

  return VideoColorimetry::NOT_SET;
}

Aws::String GetNameForVideoColorimetry(VideoColorimetry enumValue) {
  switch (enumValue) {
    case VideoColorimetry::NOT_SET:
      return {};
    case VideoColorimetry::BT709:
      return "BT709";
    case VideoColorimetry::BT470M:
      return "BT470M";
    case VideoColorimetry::BT470BG:
      return "BT470BG";
    case VideoColorimetry::BT601:
      return "BT601";
    case VideoColorimetry::SMPTE240M:
      return "SMPTE240M";
    case VideoColorimetry::GENERIC_FILM:
      return "GENERIC_FILM";
    case VideoColorimetry::BT2020:
      return "BT2020";
    case VideoColorimetry::SMPTE428:
      return "SMPTE428";
    case VideoColorimetry::SMPTE431:
      return "SMPTE431";
    case VideoColorimetry::SMPTE432:
      return "SMPTE432";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VideoColorimetryMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
