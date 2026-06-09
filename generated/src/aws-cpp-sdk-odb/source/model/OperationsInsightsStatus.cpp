/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/OperationsInsightsStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace OperationsInsightsStatusMapper {

static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int NOT_ENABLED_HASH = HashingUtils::HashString("NOT_ENABLED");
static const int FAILED_ENABLING_HASH = HashingUtils::HashString("FAILED_ENABLING");
static const int FAILED_DISABLING_HASH = HashingUtils::HashString("FAILED_DISABLING");

OperationsInsightsStatus GetOperationsInsightsStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLING_HASH) {
    return OperationsInsightsStatus::ENABLING;
  } else if (hashCode == ENABLED_HASH) {
    return OperationsInsightsStatus::ENABLED;
  } else if (hashCode == DISABLING_HASH) {
    return OperationsInsightsStatus::DISABLING;
  } else if (hashCode == NOT_ENABLED_HASH) {
    return OperationsInsightsStatus::NOT_ENABLED;
  } else if (hashCode == FAILED_ENABLING_HASH) {
    return OperationsInsightsStatus::FAILED_ENABLING;
  } else if (hashCode == FAILED_DISABLING_HASH) {
    return OperationsInsightsStatus::FAILED_DISABLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OperationsInsightsStatus>(hashCode);
  }

  return OperationsInsightsStatus::NOT_SET;
}

Aws::String GetNameForOperationsInsightsStatus(OperationsInsightsStatus enumValue) {
  switch (enumValue) {
    case OperationsInsightsStatus::NOT_SET:
      return {};
    case OperationsInsightsStatus::ENABLING:
      return "ENABLING";
    case OperationsInsightsStatus::ENABLED:
      return "ENABLED";
    case OperationsInsightsStatus::DISABLING:
      return "DISABLING";
    case OperationsInsightsStatus::NOT_ENABLED:
      return "NOT_ENABLED";
    case OperationsInsightsStatus::FAILED_ENABLING:
      return "FAILED_ENABLING";
    case OperationsInsightsStatus::FAILED_DISABLING:
      return "FAILED_DISABLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OperationsInsightsStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
