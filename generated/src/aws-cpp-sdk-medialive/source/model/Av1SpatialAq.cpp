/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/Av1SpatialAq.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace Av1SpatialAqMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

Av1SpatialAq GetAv1SpatialAqForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return Av1SpatialAq::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return Av1SpatialAq::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Av1SpatialAq>(hashCode);
  }

  return Av1SpatialAq::NOT_SET;
}

Aws::String GetNameForAv1SpatialAq(Av1SpatialAq enumValue) {
  switch (enumValue) {
    case Av1SpatialAq::NOT_SET:
      return {};
    case Av1SpatialAq::DISABLED:
      return "DISABLED";
    case Av1SpatialAq::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Av1SpatialAqMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
