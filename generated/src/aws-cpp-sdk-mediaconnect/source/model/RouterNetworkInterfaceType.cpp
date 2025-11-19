/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterNetworkInterfaceTypeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int VPC_HASH = HashingUtils::HashString("VPC");

RouterNetworkInterfaceType GetRouterNetworkInterfaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return RouterNetworkInterfaceType::PUBLIC_;
  } else if (hashCode == VPC_HASH) {
    return RouterNetworkInterfaceType::VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterNetworkInterfaceType>(hashCode);
  }

  return RouterNetworkInterfaceType::NOT_SET;
}

Aws::String GetNameForRouterNetworkInterfaceType(RouterNetworkInterfaceType enumValue) {
  switch (enumValue) {
    case RouterNetworkInterfaceType::NOT_SET:
      return {};
    case RouterNetworkInterfaceType::PUBLIC_:
      return "PUBLIC";
    case RouterNetworkInterfaceType::VPC:
      return "VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterNetworkInterfaceTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
