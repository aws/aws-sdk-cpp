/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/ApsRegion.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace ApsRegionMapper {

static const int AMERICAS_HASH = HashingUtils::HashString("AMERICAS");
static const int EUROPE_HASH = HashingUtils::HashString("EUROPE");
static const int ASIA_PACIFIC_HASH = HashingUtils::HashString("ASIA_PACIFIC");

ApsRegion GetApsRegionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AMERICAS_HASH) {
    return ApsRegion::AMERICAS;
  } else if (hashCode == EUROPE_HASH) {
    return ApsRegion::EUROPE;
  } else if (hashCode == ASIA_PACIFIC_HASH) {
    return ApsRegion::ASIA_PACIFIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApsRegion>(hashCode);
  }

  return ApsRegion::NOT_SET;
}

Aws::String GetNameForApsRegion(ApsRegion enumValue) {
  switch (enumValue) {
    case ApsRegion::NOT_SET:
      return {};
    case ApsRegion::AMERICAS:
      return "AMERICAS";
    case ApsRegion::EUROPE:
      return "EUROPE";
    case ApsRegion::ASIA_PACIFIC:
      return "ASIA_PACIFIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApsRegionMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
