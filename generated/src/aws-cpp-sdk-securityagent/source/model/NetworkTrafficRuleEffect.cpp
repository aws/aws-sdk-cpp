/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/NetworkTrafficRuleEffect.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace NetworkTrafficRuleEffectMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int DENY_HASH = HashingUtils::HashString("DENY");

NetworkTrafficRuleEffect GetNetworkTrafficRuleEffectForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return NetworkTrafficRuleEffect::ALLOW;
  } else if (hashCode == DENY_HASH) {
    return NetworkTrafficRuleEffect::DENY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkTrafficRuleEffect>(hashCode);
  }

  return NetworkTrafficRuleEffect::NOT_SET;
}

Aws::String GetNameForNetworkTrafficRuleEffect(NetworkTrafficRuleEffect enumValue) {
  switch (enumValue) {
    case NetworkTrafficRuleEffect::NOT_SET:
      return {};
    case NetworkTrafficRuleEffect::ALLOW:
      return "ALLOW";
    case NetworkTrafficRuleEffect::DENY:
      return "DENY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkTrafficRuleEffectMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
