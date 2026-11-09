/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/DestinationEndpointType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace DestinationEndpointTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int ROUTER_INPUT_HASH = HashingUtils::HashString("ROUTER_INPUT");

DestinationEndpointType GetDestinationEndpointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return DestinationEndpointType::STANDARD;
  } else if (hashCode == ROUTER_INPUT_HASH) {
    return DestinationEndpointType::ROUTER_INPUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DestinationEndpointType>(hashCode);
  }

  return DestinationEndpointType::NOT_SET;
}

Aws::String GetNameForDestinationEndpointType(DestinationEndpointType enumValue) {
  switch (enumValue) {
    case DestinationEndpointType::NOT_SET:
      return {};
    case DestinationEndpointType::STANDARD:
      return "STANDARD";
    case DestinationEndpointType::ROUTER_INPUT:
      return "ROUTER_INPUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DestinationEndpointTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
