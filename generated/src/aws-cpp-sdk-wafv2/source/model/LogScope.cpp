/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/LogScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace LogScopeMapper {

static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
static const int SECURITY_LAKE_HASH = HashingUtils::HashString("SECURITY_LAKE");
static const int CLOUDWATCH_TELEMETRY_RULE_MANAGED_HASH = HashingUtils::HashString("CLOUDWATCH_TELEMETRY_RULE_MANAGED");

LogScope GetLogScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_HASH) {
    return LogScope::CUSTOMER;
  } else if (hashCode == SECURITY_LAKE_HASH) {
    return LogScope::SECURITY_LAKE;
  } else if (hashCode == CLOUDWATCH_TELEMETRY_RULE_MANAGED_HASH) {
    return LogScope::CLOUDWATCH_TELEMETRY_RULE_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogScope>(hashCode);
  }

  return LogScope::NOT_SET;
}

Aws::String GetNameForLogScope(LogScope enumValue) {
  switch (enumValue) {
    case LogScope::NOT_SET:
      return {};
    case LogScope::CUSTOMER:
      return "CUSTOMER";
    case LogScope::SECURITY_LAKE:
      return "SECURITY_LAKE";
    case LogScope::CLOUDWATCH_TELEMETRY_RULE_MANAGED:
      return "CLOUDWATCH_TELEMETRY_RULE_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogScopeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
