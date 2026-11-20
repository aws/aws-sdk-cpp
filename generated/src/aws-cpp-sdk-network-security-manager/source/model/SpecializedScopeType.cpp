/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/SpecializedScopeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace SpecializedScopeTypeMapper {

static const int IGW_FIREWALL_SUBNET_CONNECTIVITY_OVERRIDE_HASH = HashingUtils::HashString("IGW_FIREWALL_SUBNET_CONNECTIVITY_OVERRIDE");

SpecializedScopeType GetSpecializedScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IGW_FIREWALL_SUBNET_CONNECTIVITY_OVERRIDE_HASH) {
    return SpecializedScopeType::IGW_FIREWALL_SUBNET_CONNECTIVITY_OVERRIDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpecializedScopeType>(hashCode);
  }

  return SpecializedScopeType::NOT_SET;
}

Aws::String GetNameForSpecializedScopeType(SpecializedScopeType enumValue) {
  switch (enumValue) {
    case SpecializedScopeType::NOT_SET:
      return {};
    case SpecializedScopeType::IGW_FIREWALL_SUBNET_CONNECTIVITY_OVERRIDE:
      return "IGW_FIREWALL_SUBNET_CONNECTIVITY_OVERRIDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpecializedScopeTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
