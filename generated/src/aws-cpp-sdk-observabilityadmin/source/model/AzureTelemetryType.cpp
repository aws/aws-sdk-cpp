/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/AzureTelemetryType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace AzureTelemetryTypeMapper {

static const int ResourceLogs_HASH = HashingUtils::HashString("ResourceLogs");
static const int Metrics_HASH = HashingUtils::HashString("Metrics");
static const int FlowLogs_HASH = HashingUtils::HashString("FlowLogs");

AzureTelemetryType GetAzureTelemetryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ResourceLogs_HASH) {
    return AzureTelemetryType::ResourceLogs;
  } else if (hashCode == Metrics_HASH) {
    return AzureTelemetryType::Metrics;
  } else if (hashCode == FlowLogs_HASH) {
    return AzureTelemetryType::FlowLogs;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AzureTelemetryType>(hashCode);
  }

  return AzureTelemetryType::NOT_SET;
}

Aws::String GetNameForAzureTelemetryType(AzureTelemetryType enumValue) {
  switch (enumValue) {
    case AzureTelemetryType::NOT_SET:
      return {};
    case AzureTelemetryType::ResourceLogs:
      return "ResourceLogs";
    case AzureTelemetryType::Metrics:
      return "Metrics";
    case AzureTelemetryType::FlowLogs:
      return "FlowLogs";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AzureTelemetryTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
