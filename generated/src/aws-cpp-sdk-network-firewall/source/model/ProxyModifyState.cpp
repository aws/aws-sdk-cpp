/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ProxyModifyState.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ProxyModifyStateMapper {

static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ProxyModifyState GetProxyModifyStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MODIFYING_HASH) {
    return ProxyModifyState::MODIFYING;
  } else if (hashCode == COMPLETED_HASH) {
    return ProxyModifyState::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ProxyModifyState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyModifyState>(hashCode);
  }

  return ProxyModifyState::NOT_SET;
}

Aws::String GetNameForProxyModifyState(ProxyModifyState enumValue) {
  switch (enumValue) {
    case ProxyModifyState::NOT_SET:
      return {};
    case ProxyModifyState::MODIFYING:
      return "MODIFYING";
    case ProxyModifyState::COMPLETED:
      return "COMPLETED";
    case ProxyModifyState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyModifyStateMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
