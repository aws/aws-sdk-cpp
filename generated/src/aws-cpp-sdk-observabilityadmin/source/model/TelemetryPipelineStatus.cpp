/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/TelemetryPipelineStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace TelemetryPipelineStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");

TelemetryPipelineStatus GetTelemetryPipelineStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return TelemetryPipelineStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return TelemetryPipelineStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return TelemetryPipelineStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return TelemetryPipelineStatus::DELETING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return TelemetryPipelineStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return TelemetryPipelineStatus::UPDATE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TelemetryPipelineStatus>(hashCode);
  }

  return TelemetryPipelineStatus::NOT_SET;
}

Aws::String GetNameForTelemetryPipelineStatus(TelemetryPipelineStatus enumValue) {
  switch (enumValue) {
    case TelemetryPipelineStatus::NOT_SET:
      return {};
    case TelemetryPipelineStatus::CREATING:
      return "CREATING";
    case TelemetryPipelineStatus::ACTIVE:
      return "ACTIVE";
    case TelemetryPipelineStatus::UPDATING:
      return "UPDATING";
    case TelemetryPipelineStatus::DELETING:
      return "DELETING";
    case TelemetryPipelineStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case TelemetryPipelineStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TelemetryPipelineStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
