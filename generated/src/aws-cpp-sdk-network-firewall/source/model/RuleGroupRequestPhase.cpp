/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/RuleGroupRequestPhase.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace RuleGroupRequestPhaseMapper {

static const int PRE_DNS_HASH = HashingUtils::HashString("PRE_DNS");
static const int PRE_REQ_HASH = HashingUtils::HashString("PRE_REQ");
static const int POST_RES_HASH = HashingUtils::HashString("POST_RES");

RuleGroupRequestPhase GetRuleGroupRequestPhaseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRE_DNS_HASH) {
    return RuleGroupRequestPhase::PRE_DNS;
  } else if (hashCode == PRE_REQ_HASH) {
    return RuleGroupRequestPhase::PRE_REQ;
  } else if (hashCode == POST_RES_HASH) {
    return RuleGroupRequestPhase::POST_RES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleGroupRequestPhase>(hashCode);
  }

  return RuleGroupRequestPhase::NOT_SET;
}

Aws::String GetNameForRuleGroupRequestPhase(RuleGroupRequestPhase enumValue) {
  switch (enumValue) {
    case RuleGroupRequestPhase::NOT_SET:
      return {};
    case RuleGroupRequestPhase::PRE_DNS:
      return "PRE_DNS";
    case RuleGroupRequestPhase::PRE_REQ:
      return "PRE_REQ";
    case RuleGroupRequestPhase::POST_RES:
      return "POST_RES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleGroupRequestPhaseMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
