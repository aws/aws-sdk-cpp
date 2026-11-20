/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/SubnetConnectivity.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace SubnetConnectivityMapper {

static const int flexible_HASH = HashingUtils::HashString("flexible");
static const int bidirectional_HASH = HashingUtils::HashString("bidirectional");
static const int outbound_only_HASH = HashingUtils::HashString("outbound-only");
static const int exclude_HASH = HashingUtils::HashString("exclude");

SubnetConnectivity GetSubnetConnectivityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == flexible_HASH) {
    return SubnetConnectivity::flexible;
  } else if (hashCode == bidirectional_HASH) {
    return SubnetConnectivity::bidirectional;
  } else if (hashCode == outbound_only_HASH) {
    return SubnetConnectivity::outbound_only;
  } else if (hashCode == exclude_HASH) {
    return SubnetConnectivity::exclude;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubnetConnectivity>(hashCode);
  }

  return SubnetConnectivity::NOT_SET;
}

Aws::String GetNameForSubnetConnectivity(SubnetConnectivity enumValue) {
  switch (enumValue) {
    case SubnetConnectivity::NOT_SET:
      return {};
    case SubnetConnectivity::flexible:
      return "flexible";
    case SubnetConnectivity::bidirectional:
      return "bidirectional";
    case SubnetConnectivity::outbound_only:
      return "outbound-only";
    case SubnetConnectivity::exclude:
      return "exclude";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubnetConnectivityMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
