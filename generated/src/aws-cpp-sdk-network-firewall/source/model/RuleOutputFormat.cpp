/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/RuleOutputFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace RuleOutputFormatMapper {

static const int FIREWALL_RULES_HASH = HashingUtils::HashString("FIREWALL_RULES");
static const int RULES_STRING_HASH = HashingUtils::HashString("RULES_STRING");

RuleOutputFormat GetRuleOutputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIREWALL_RULES_HASH) {
    return RuleOutputFormat::FIREWALL_RULES;
  } else if (hashCode == RULES_STRING_HASH) {
    return RuleOutputFormat::RULES_STRING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleOutputFormat>(hashCode);
  }

  return RuleOutputFormat::NOT_SET;
}

Aws::String GetNameForRuleOutputFormat(RuleOutputFormat enumValue) {
  switch (enumValue) {
    case RuleOutputFormat::NOT_SET:
      return {};
    case RuleOutputFormat::FIREWALL_RULES:
      return "FIREWALL_RULES";
    case RuleOutputFormat::RULES_STRING:
      return "RULES_STRING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleOutputFormatMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
