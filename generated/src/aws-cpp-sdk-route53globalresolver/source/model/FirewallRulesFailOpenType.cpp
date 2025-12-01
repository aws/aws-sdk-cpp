/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/FirewallRulesFailOpenType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace FirewallRulesFailOpenTypeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

FirewallRulesFailOpenType GetFirewallRulesFailOpenTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return FirewallRulesFailOpenType::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return FirewallRulesFailOpenType::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallRulesFailOpenType>(hashCode);
  }

  return FirewallRulesFailOpenType::NOT_SET;
}

Aws::String GetNameForFirewallRulesFailOpenType(FirewallRulesFailOpenType enumValue) {
  switch (enumValue) {
    case FirewallRulesFailOpenType::NOT_SET:
      return {};
    case FirewallRulesFailOpenType::ENABLED:
      return "ENABLED";
    case FirewallRulesFailOpenType::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallRulesFailOpenTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
