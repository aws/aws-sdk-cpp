/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/GatewayType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace GatewayTypeMapper {

static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");

GatewayType GetGatewayTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXTERNAL_HASH) {
    return GatewayType::EXTERNAL;
  } else if (hashCode == INTERNAL_HASH) {
    return GatewayType::INTERNAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayType>(hashCode);
  }

  return GatewayType::NOT_SET;
}

Aws::String GetNameForGatewayType(GatewayType enumValue) {
  switch (enumValue) {
    case GatewayType::NOT_SET:
      return {};
    case GatewayType::EXTERNAL:
      return "EXTERNAL";
    case GatewayType::INTERNAL:
      return "INTERNAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
