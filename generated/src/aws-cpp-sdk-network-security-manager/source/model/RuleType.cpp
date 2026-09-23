/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/RuleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace RuleTypeMapper {

static const int CONFIGURATION_HASH = HashingUtils::HashString("CONFIGURATION");
static const int INSPECTION_HASH = HashingUtils::HashString("INSPECTION");

RuleType GetRuleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFIGURATION_HASH) {
    return RuleType::CONFIGURATION;
  } else if (hashCode == INSPECTION_HASH) {
    return RuleType::INSPECTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleType>(hashCode);
  }

  return RuleType::NOT_SET;
}

Aws::String GetNameForRuleType(RuleType enumValue) {
  switch (enumValue) {
    case RuleType::NOT_SET:
      return {};
    case RuleType::CONFIGURATION:
      return "CONFIGURATION";
    case RuleType::INSPECTION:
      return "INSPECTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
