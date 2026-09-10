/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ClientRoutingPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ClientRoutingPolicyMapper {

static const int AVAILABILITY_ZONE_AFFINITY_HASH = HashingUtils::HashString("AVAILABILITY_ZONE_AFFINITY");
static const int ANY_AVAILABILITY_ZONE_HASH = HashingUtils::HashString("ANY_AVAILABILITY_ZONE");

ClientRoutingPolicy GetClientRoutingPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABILITY_ZONE_AFFINITY_HASH) {
    return ClientRoutingPolicy::AVAILABILITY_ZONE_AFFINITY;
  } else if (hashCode == ANY_AVAILABILITY_ZONE_HASH) {
    return ClientRoutingPolicy::ANY_AVAILABILITY_ZONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientRoutingPolicy>(hashCode);
  }

  return ClientRoutingPolicy::NOT_SET;
}

Aws::String GetNameForClientRoutingPolicy(ClientRoutingPolicy enumValue) {
  switch (enumValue) {
    case ClientRoutingPolicy::NOT_SET:
      return {};
    case ClientRoutingPolicy::AVAILABILITY_ZONE_AFFINITY:
      return "AVAILABILITY_ZONE_AFFINITY";
    case ClientRoutingPolicy::ANY_AVAILABILITY_ZONE:
      return "ANY_AVAILABILITY_ZONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientRoutingPolicyMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
