/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/TriggerFilterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace TriggerFilterTypeMapper {

static const int TARGET_BRANCH_HASH = HashingUtils::HashString("TARGET_BRANCH");
static const int LABEL_HASH = HashingUtils::HashString("LABEL");

TriggerFilterType GetTriggerFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TARGET_BRANCH_HASH) {
    return TriggerFilterType::TARGET_BRANCH;
  } else if (hashCode == LABEL_HASH) {
    return TriggerFilterType::LABEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TriggerFilterType>(hashCode);
  }

  return TriggerFilterType::NOT_SET;
}

Aws::String GetNameForTriggerFilterType(TriggerFilterType enumValue) {
  switch (enumValue) {
    case TriggerFilterType::NOT_SET:
      return {};
    case TriggerFilterType::TARGET_BRANCH:
      return "TARGET_BRANCH";
    case TriggerFilterType::LABEL:
      return "LABEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TriggerFilterTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
