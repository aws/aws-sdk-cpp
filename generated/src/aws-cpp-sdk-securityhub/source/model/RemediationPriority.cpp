/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/RemediationPriority.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace RemediationPriorityMapper {

static const int Critical_HASH = HashingUtils::HashString("Critical");
static const int High_HASH = HashingUtils::HashString("High");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int Low_HASH = HashingUtils::HashString("Low");

RemediationPriority GetRemediationPriorityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Critical_HASH) {
    return RemediationPriority::Critical;
  } else if (hashCode == High_HASH) {
    return RemediationPriority::High;
  } else if (hashCode == Medium_HASH) {
    return RemediationPriority::Medium;
  } else if (hashCode == Low_HASH) {
    return RemediationPriority::Low;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemediationPriority>(hashCode);
  }

  return RemediationPriority::NOT_SET;
}

Aws::String GetNameForRemediationPriority(RemediationPriority enumValue) {
  switch (enumValue) {
    case RemediationPriority::NOT_SET:
      return {};
    case RemediationPriority::Critical:
      return "Critical";
    case RemediationPriority::High:
      return "High";
    case RemediationPriority::Medium:
      return "Medium";
    case RemediationPriority::Low:
      return "Low";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemediationPriorityMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
