/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/TelemetryEnrichmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace TelemetryEnrichmentStatusMapper {

static const int Running_HASH = HashingUtils::HashString("Running");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");
static const int Impaired_HASH = HashingUtils::HashString("Impaired");

TelemetryEnrichmentStatus GetTelemetryEnrichmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Running_HASH) {
    return TelemetryEnrichmentStatus::Running;
  } else if (hashCode == Stopped_HASH) {
    return TelemetryEnrichmentStatus::Stopped;
  } else if (hashCode == Impaired_HASH) {
    return TelemetryEnrichmentStatus::Impaired;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TelemetryEnrichmentStatus>(hashCode);
  }

  return TelemetryEnrichmentStatus::NOT_SET;
}

Aws::String GetNameForTelemetryEnrichmentStatus(TelemetryEnrichmentStatus enumValue) {
  switch (enumValue) {
    case TelemetryEnrichmentStatus::NOT_SET:
      return {};
    case TelemetryEnrichmentStatus::Running:
      return "Running";
    case TelemetryEnrichmentStatus::Stopped:
      return "Stopped";
    case TelemetryEnrichmentStatus::Impaired:
      return "Impaired";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TelemetryEnrichmentStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
