/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/TransparentFilteringNatScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace TransparentFilteringNatScopeMapper {

static const int NAT_ALL_HASH = HashingUtils::HashString("NAT_ALL");
static const int NAT_NONE_HASH = HashingUtils::HashString("NAT_NONE");

TransparentFilteringNatScope GetTransparentFilteringNatScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NAT_ALL_HASH) {
    return TransparentFilteringNatScope::NAT_ALL;
  } else if (hashCode == NAT_NONE_HASH) {
    return TransparentFilteringNatScope::NAT_NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransparentFilteringNatScope>(hashCode);
  }

  return TransparentFilteringNatScope::NOT_SET;
}

Aws::String GetNameForTransparentFilteringNatScope(TransparentFilteringNatScope enumValue) {
  switch (enumValue) {
    case TransparentFilteringNatScope::NOT_SET:
      return {};
    case TransparentFilteringNatScope::NAT_ALL:
      return "NAT_ALL";
    case TransparentFilteringNatScope::NAT_NONE:
      return "NAT_NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransparentFilteringNatScopeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
