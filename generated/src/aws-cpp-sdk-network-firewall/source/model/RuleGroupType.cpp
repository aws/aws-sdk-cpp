/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/RuleGroupType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace RuleGroupTypeMapper {

static const int STATELESS_HASH = HashingUtils::HashString("STATELESS");
static const int STATEFUL_HASH = HashingUtils::HashString("STATEFUL");
static const int STATEFUL_DOMAIN_HASH = HashingUtils::HashString("STATEFUL_DOMAIN");

RuleGroupType GetRuleGroupTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STATELESS_HASH) {
    return RuleGroupType::STATELESS;
  } else if (hashCode == STATEFUL_HASH) {
    return RuleGroupType::STATEFUL;
  } else if (hashCode == STATEFUL_DOMAIN_HASH) {
    return RuleGroupType::STATEFUL_DOMAIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleGroupType>(hashCode);
  }

  return RuleGroupType::NOT_SET;
}

Aws::String GetNameForRuleGroupType(RuleGroupType enumValue) {
  switch (enumValue) {
    case RuleGroupType::NOT_SET:
      return {};
    case RuleGroupType::STATELESS:
      return "STATELESS";
    case RuleGroupType::STATEFUL:
      return "STATEFUL";
    case RuleGroupType::STATEFUL_DOMAIN:
      return "STATEFUL_DOMAIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleGroupTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
