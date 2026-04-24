/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RoutingScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RoutingScopeMapper {

static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");

RoutingScope GetRoutingScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGIONAL_HASH) {
    return RoutingScope::REGIONAL;
  } else if (hashCode == GLOBAL_HASH) {
    return RoutingScope::GLOBAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RoutingScope>(hashCode);
  }

  return RoutingScope::NOT_SET;
}

Aws::String GetNameForRoutingScope(RoutingScope enumValue) {
  switch (enumValue) {
    case RoutingScope::NOT_SET:
      return {};
    case RoutingScope::REGIONAL:
      return "REGIONAL";
    case RoutingScope::GLOBAL:
      return "GLOBAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RoutingScopeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
