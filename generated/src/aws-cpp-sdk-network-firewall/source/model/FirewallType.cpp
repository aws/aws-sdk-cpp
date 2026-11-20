/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/FirewallType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace FirewallTypeMapper {

static const int FIREWALL_HASH = HashingUtils::HashString("FIREWALL");
static const int IGW_FIREWALL_HASH = HashingUtils::HashString("IGW_FIREWALL");

FirewallType GetFirewallTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIREWALL_HASH) {
    return FirewallType::FIREWALL;
  } else if (hashCode == IGW_FIREWALL_HASH) {
    return FirewallType::IGW_FIREWALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallType>(hashCode);
  }

  return FirewallType::NOT_SET;
}

Aws::String GetNameForFirewallType(FirewallType enumValue) {
  switch (enumValue) {
    case FirewallType::NOT_SET:
      return {};
    case FirewallType::FIREWALL:
      return "FIREWALL";
    case FirewallType::IGW_FIREWALL:
      return "IGW_FIREWALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
