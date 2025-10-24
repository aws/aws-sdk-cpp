﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/RouteTableType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace RouteTableTypeMapper {

static const int TRANSIT_GATEWAY_ROUTE_TABLE_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_ROUTE_TABLE");
static const int CORE_NETWORK_SEGMENT_HASH = HashingUtils::HashString("CORE_NETWORK_SEGMENT");
static const int NETWORK_FUNCTION_GROUP_HASH = HashingUtils::HashString("NETWORK_FUNCTION_GROUP");

RouteTableType GetRouteTableTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRANSIT_GATEWAY_ROUTE_TABLE_HASH) {
    return RouteTableType::TRANSIT_GATEWAY_ROUTE_TABLE;
  } else if (hashCode == CORE_NETWORK_SEGMENT_HASH) {
    return RouteTableType::CORE_NETWORK_SEGMENT;
  } else if (hashCode == NETWORK_FUNCTION_GROUP_HASH) {
    return RouteTableType::NETWORK_FUNCTION_GROUP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTableType>(hashCode);
  }

  return RouteTableType::NOT_SET;
}

Aws::String GetNameForRouteTableType(RouteTableType enumValue) {
  switch (enumValue) {
    case RouteTableType::NOT_SET:
      return {};
    case RouteTableType::TRANSIT_GATEWAY_ROUTE_TABLE:
      return "TRANSIT_GATEWAY_ROUTE_TABLE";
    case RouteTableType::CORE_NETWORK_SEGMENT:
      return "CORE_NETWORK_SEGMENT";
    case RouteTableType::NETWORK_FUNCTION_GROUP:
      return "NETWORK_FUNCTION_GROUP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTableTypeMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
