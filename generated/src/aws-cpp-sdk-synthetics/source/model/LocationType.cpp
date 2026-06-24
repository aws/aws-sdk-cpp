/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/synthetics/model/LocationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Synthetics {
namespace Model {
namespace LocationTypeMapper {

static const int Primary_HASH = HashingUtils::HashString("Primary");
static const int Replica_HASH = HashingUtils::HashString("Replica");

LocationType GetLocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Primary_HASH) {
    return LocationType::Primary;
  } else if (hashCode == Replica_HASH) {
    return LocationType::Replica;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LocationType>(hashCode);
  }

  return LocationType::NOT_SET;
}

Aws::String GetNameForLocationType(LocationType enumValue) {
  switch (enumValue) {
    case LocationType::NOT_SET:
      return {};
    case LocationType::Primary:
      return "Primary";
    case LocationType::Replica:
      return "Replica";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LocationTypeMapper
}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
