/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/H265MvOverPictureBoundaries.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace H265MvOverPictureBoundariesMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

H265MvOverPictureBoundaries GetH265MvOverPictureBoundariesForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return H265MvOverPictureBoundaries::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return H265MvOverPictureBoundaries::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<H265MvOverPictureBoundaries>(hashCode);
  }

  return H265MvOverPictureBoundaries::NOT_SET;
}

Aws::String GetNameForH265MvOverPictureBoundaries(H265MvOverPictureBoundaries enumValue) {
  switch (enumValue) {
    case H265MvOverPictureBoundaries::NOT_SET:
      return {};
    case H265MvOverPictureBoundaries::ENABLED:
      return "ENABLED";
    case H265MvOverPictureBoundaries::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace H265MvOverPictureBoundariesMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
