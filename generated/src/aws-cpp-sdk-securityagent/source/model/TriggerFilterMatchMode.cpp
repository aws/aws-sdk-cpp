/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/TriggerFilterMatchMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace TriggerFilterMatchModeMapper {

static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

TriggerFilterMatchMode GetTriggerFilterMatchModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCLUDE_HASH) {
    return TriggerFilterMatchMode::INCLUDE;
  } else if (hashCode == EXCLUDE_HASH) {
    return TriggerFilterMatchMode::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TriggerFilterMatchMode>(hashCode);
  }

  return TriggerFilterMatchMode::NOT_SET;
}

Aws::String GetNameForTriggerFilterMatchMode(TriggerFilterMatchMode enumValue) {
  switch (enumValue) {
    case TriggerFilterMatchMode::NOT_SET:
      return {};
    case TriggerFilterMatchMode::INCLUDE:
      return "INCLUDE";
    case TriggerFilterMatchMode::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TriggerFilterMatchModeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
