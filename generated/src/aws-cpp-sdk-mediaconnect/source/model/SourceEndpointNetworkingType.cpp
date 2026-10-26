/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/SourceEndpointNetworkingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace SourceEndpointNetworkingTypeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int VPC_HASH = HashingUtils::HashString("VPC");

SourceEndpointNetworkingType GetSourceEndpointNetworkingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return SourceEndpointNetworkingType::PUBLIC_;
  } else if (hashCode == VPC_HASH) {
    return SourceEndpointNetworkingType::VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceEndpointNetworkingType>(hashCode);
  }

  return SourceEndpointNetworkingType::NOT_SET;
}

Aws::String GetNameForSourceEndpointNetworkingType(SourceEndpointNetworkingType enumValue) {
  switch (enumValue) {
    case SourceEndpointNetworkingType::NOT_SET:
      return {};
    case SourceEndpointNetworkingType::PUBLIC_:
      return "PUBLIC";
    case SourceEndpointNetworkingType::VPC:
      return "VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceEndpointNetworkingTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
