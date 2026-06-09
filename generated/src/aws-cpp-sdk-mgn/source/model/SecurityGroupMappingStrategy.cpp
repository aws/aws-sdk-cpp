/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/SecurityGroupMappingStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace SecurityGroupMappingStrategyMapper {

static const int MAP_HASH = HashingUtils::HashString("MAP");
static const int SKIP_HASH = HashingUtils::HashString("SKIP");
static const int MAP_DHCP_HASH = HashingUtils::HashString("MAP_DHCP");

SecurityGroupMappingStrategy GetSecurityGroupMappingStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MAP_HASH) {
    return SecurityGroupMappingStrategy::MAP;
  } else if (hashCode == SKIP_HASH) {
    return SecurityGroupMappingStrategy::SKIP;
  } else if (hashCode == MAP_DHCP_HASH) {
    return SecurityGroupMappingStrategy::MAP_DHCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecurityGroupMappingStrategy>(hashCode);
  }

  return SecurityGroupMappingStrategy::NOT_SET;
}

Aws::String GetNameForSecurityGroupMappingStrategy(SecurityGroupMappingStrategy enumValue) {
  switch (enumValue) {
    case SecurityGroupMappingStrategy::NOT_SET:
      return {};
    case SecurityGroupMappingStrategy::MAP:
      return "MAP";
    case SecurityGroupMappingStrategy::SKIP:
      return "SKIP";
    case SecurityGroupMappingStrategy::MAP_DHCP:
      return "MAP_DHCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecurityGroupMappingStrategyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
