/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/AutoscalingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace AutoscalingStatusMapper {

static const int ACTION_SCALING_UP_HASH = HashingUtils::HashString("ACTION_SCALING_UP");
static const int ACTION_SCALING_DOWN_HASH = HashingUtils::HashString("ACTION_SCALING_DOWN");
static const int NO_ACTION_HASH = HashingUtils::HashString("NO_ACTION");

AutoscalingStatus GetAutoscalingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTION_SCALING_UP_HASH) {
    return AutoscalingStatus::ACTION_SCALING_UP;
  } else if (hashCode == ACTION_SCALING_DOWN_HASH) {
    return AutoscalingStatus::ACTION_SCALING_DOWN;
  } else if (hashCode == NO_ACTION_HASH) {
    return AutoscalingStatus::NO_ACTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoscalingStatus>(hashCode);
  }

  return AutoscalingStatus::NOT_SET;
}

Aws::String GetNameForAutoscalingStatus(AutoscalingStatus enumValue) {
  switch (enumValue) {
    case AutoscalingStatus::NOT_SET:
      return {};
    case AutoscalingStatus::ACTION_SCALING_UP:
      return "ACTION_SCALING_UP";
    case AutoscalingStatus::ACTION_SCALING_DOWN:
      return "ACTION_SCALING_DOWN";
    case AutoscalingStatus::NO_ACTION:
      return "NO_ACTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoscalingStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
