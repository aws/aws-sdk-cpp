/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ProxyState.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ProxyStateMapper {

static const int ATTACHING_HASH = HashingUtils::HashString("ATTACHING");
static const int ATTACHED_HASH = HashingUtils::HashString("ATTACHED");
static const int DETACHING_HASH = HashingUtils::HashString("DETACHING");
static const int DETACHED_HASH = HashingUtils::HashString("DETACHED");
static const int ATTACH_FAILED_HASH = HashingUtils::HashString("ATTACH_FAILED");
static const int DETACH_FAILED_HASH = HashingUtils::HashString("DETACH_FAILED");

ProxyState GetProxyStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ATTACHING_HASH) {
    return ProxyState::ATTACHING;
  } else if (hashCode == ATTACHED_HASH) {
    return ProxyState::ATTACHED;
  } else if (hashCode == DETACHING_HASH) {
    return ProxyState::DETACHING;
  } else if (hashCode == DETACHED_HASH) {
    return ProxyState::DETACHED;
  } else if (hashCode == ATTACH_FAILED_HASH) {
    return ProxyState::ATTACH_FAILED;
  } else if (hashCode == DETACH_FAILED_HASH) {
    return ProxyState::DETACH_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyState>(hashCode);
  }

  return ProxyState::NOT_SET;
}

Aws::String GetNameForProxyState(ProxyState enumValue) {
  switch (enumValue) {
    case ProxyState::NOT_SET:
      return {};
    case ProxyState::ATTACHING:
      return "ATTACHING";
    case ProxyState::ATTACHED:
      return "ATTACHED";
    case ProxyState::DETACHING:
      return "DETACHING";
    case ProxyState::DETACHED:
      return "DETACHED";
    case ProxyState::ATTACH_FAILED:
      return "ATTACH_FAILED";
    case ProxyState::DETACH_FAILED:
      return "DETACH_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyStateMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
