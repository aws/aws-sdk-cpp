/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/DestinationEndpointNetworkingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace DestinationEndpointNetworkingTypeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int VPC_HASH = HashingUtils::HashString("VPC");

DestinationEndpointNetworkingType GetDestinationEndpointNetworkingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return DestinationEndpointNetworkingType::PUBLIC_;
  } else if (hashCode == VPC_HASH) {
    return DestinationEndpointNetworkingType::VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DestinationEndpointNetworkingType>(hashCode);
  }

  return DestinationEndpointNetworkingType::NOT_SET;
}

Aws::String GetNameForDestinationEndpointNetworkingType(DestinationEndpointNetworkingType enumValue) {
  switch (enumValue) {
    case DestinationEndpointNetworkingType::NOT_SET:
      return {};
    case DestinationEndpointNetworkingType::PUBLIC_:
      return "PUBLIC";
    case DestinationEndpointNetworkingType::VPC:
      return "VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DestinationEndpointNetworkingTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
