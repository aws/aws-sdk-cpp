/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/EndpointLifecycle.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace EndpointLifecycleMapper {

static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int UNMANAGED_HASH = HashingUtils::HashString("UNMANAGED");

EndpointLifecycle GetEndpointLifecycleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_HASH) {
    return EndpointLifecycle::MANAGED;
  } else if (hashCode == UNMANAGED_HASH) {
    return EndpointLifecycle::UNMANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndpointLifecycle>(hashCode);
  }

  return EndpointLifecycle::NOT_SET;
}

Aws::String GetNameForEndpointLifecycle(EndpointLifecycle enumValue) {
  switch (enumValue) {
    case EndpointLifecycle::NOT_SET:
      return {};
    case EndpointLifecycle::MANAGED:
      return "MANAGED";
    case EndpointLifecycle::UNMANAGED:
      return "UNMANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndpointLifecycleMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
