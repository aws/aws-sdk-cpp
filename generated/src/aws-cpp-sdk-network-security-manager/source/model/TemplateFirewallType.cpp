/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/TemplateFirewallType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace TemplateFirewallTypeMapper {

static const int WAF_HASH = HashingUtils::HashString("WAF");

TemplateFirewallType GetTemplateFirewallTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WAF_HASH) {
    return TemplateFirewallType::WAF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TemplateFirewallType>(hashCode);
  }

  return TemplateFirewallType::NOT_SET;
}

Aws::String GetNameForTemplateFirewallType(TemplateFirewallType enumValue) {
  switch (enumValue) {
    case TemplateFirewallType::NOT_SET:
      return {};
    case TemplateFirewallType::WAF:
      return "WAF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TemplateFirewallTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
