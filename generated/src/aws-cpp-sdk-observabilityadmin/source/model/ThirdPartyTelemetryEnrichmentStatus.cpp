/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetryEnrichmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace ThirdPartyTelemetryEnrichmentStatusMapper {

static const int Initializing_HASH = HashingUtils::HashString("Initializing");
static const int Running_HASH = HashingUtils::HashString("Running");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");
static const int Impaired_HASH = HashingUtils::HashString("Impaired");

ThirdPartyTelemetryEnrichmentStatus GetThirdPartyTelemetryEnrichmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Initializing_HASH) {
    return ThirdPartyTelemetryEnrichmentStatus::Initializing;
  } else if (hashCode == Running_HASH) {
    return ThirdPartyTelemetryEnrichmentStatus::Running;
  } else if (hashCode == Stopped_HASH) {
    return ThirdPartyTelemetryEnrichmentStatus::Stopped;
  } else if (hashCode == Impaired_HASH) {
    return ThirdPartyTelemetryEnrichmentStatus::Impaired;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThirdPartyTelemetryEnrichmentStatus>(hashCode);
  }

  return ThirdPartyTelemetryEnrichmentStatus::NOT_SET;
}

Aws::String GetNameForThirdPartyTelemetryEnrichmentStatus(ThirdPartyTelemetryEnrichmentStatus enumValue) {
  switch (enumValue) {
    case ThirdPartyTelemetryEnrichmentStatus::NOT_SET:
      return {};
    case ThirdPartyTelemetryEnrichmentStatus::Initializing:
      return "Initializing";
    case ThirdPartyTelemetryEnrichmentStatus::Running:
      return "Running";
    case ThirdPartyTelemetryEnrichmentStatus::Stopped:
      return "Stopped";
    case ThirdPartyTelemetryEnrichmentStatus::Impaired:
      return "Impaired";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThirdPartyTelemetryEnrichmentStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
