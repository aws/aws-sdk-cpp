/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/MaintenanceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace MaintenanceStatusMapper {

static const int MaintenanceInProgress_HASH = HashingUtils::HashString("MaintenanceInProgress");
static const int MaintenanceComplete_HASH = HashingUtils::HashString("MaintenanceComplete");
static const int MaintenanceFailed_HASH = HashingUtils::HashString("MaintenanceFailed");

MaintenanceStatus GetMaintenanceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MaintenanceInProgress_HASH) {
    return MaintenanceStatus::MaintenanceInProgress;
  } else if (hashCode == MaintenanceComplete_HASH) {
    return MaintenanceStatus::MaintenanceComplete;
  } else if (hashCode == MaintenanceFailed_HASH) {
    return MaintenanceStatus::MaintenanceFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaintenanceStatus>(hashCode);
  }

  return MaintenanceStatus::NOT_SET;
}

Aws::String GetNameForMaintenanceStatus(MaintenanceStatus enumValue) {
  switch (enumValue) {
    case MaintenanceStatus::NOT_SET:
      return {};
    case MaintenanceStatus::MaintenanceInProgress:
      return "MaintenanceInProgress";
    case MaintenanceStatus::MaintenanceComplete:
      return "MaintenanceComplete";
    case MaintenanceStatus::MaintenanceFailed:
      return "MaintenanceFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaintenanceStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
