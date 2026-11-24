/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/DefaultSubnetConnectivity.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace DefaultSubnetConnectivityMapper {

static const int flexible_HASH = HashingUtils::HashString("flexible");
static const int bidirectional_HASH = HashingUtils::HashString("bidirectional");
static const int outbound_only_HASH = HashingUtils::HashString("outbound-only");

DefaultSubnetConnectivity GetDefaultSubnetConnectivityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == flexible_HASH) {
    return DefaultSubnetConnectivity::flexible;
  } else if (hashCode == bidirectional_HASH) {
    return DefaultSubnetConnectivity::bidirectional;
  } else if (hashCode == outbound_only_HASH) {
    return DefaultSubnetConnectivity::outbound_only;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DefaultSubnetConnectivity>(hashCode);
  }

  return DefaultSubnetConnectivity::NOT_SET;
}

Aws::String GetNameForDefaultSubnetConnectivity(DefaultSubnetConnectivity enumValue) {
  switch (enumValue) {
    case DefaultSubnetConnectivity::NOT_SET:
      return {};
    case DefaultSubnetConnectivity::flexible:
      return "flexible";
    case DefaultSubnetConnectivity::bidirectional:
      return "bidirectional";
    case DefaultSubnetConnectivity::outbound_only:
      return "outbound-only";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DefaultSubnetConnectivityMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
