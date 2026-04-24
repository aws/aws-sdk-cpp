/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/NetworkTrafficRuleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace NetworkTrafficRuleTypeMapper {

static const int URL_HASH = HashingUtils::HashString("URL");

NetworkTrafficRuleType GetNetworkTrafficRuleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == URL_HASH) {
    return NetworkTrafficRuleType::URL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkTrafficRuleType>(hashCode);
  }

  return NetworkTrafficRuleType::NOT_SET;
}

Aws::String GetNameForNetworkTrafficRuleType(NetworkTrafficRuleType enumValue) {
  switch (enumValue) {
    case NetworkTrafficRuleType::NOT_SET:
      return {};
    case NetworkTrafficRuleType::URL:
      return "URL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkTrafficRuleTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
