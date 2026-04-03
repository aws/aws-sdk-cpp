/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/model/OTelEnrichmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {
namespace OTelEnrichmentStatusMapper {

static const int Running_HASH = HashingUtils::HashString("Running");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");

OTelEnrichmentStatus GetOTelEnrichmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Running_HASH) {
    return OTelEnrichmentStatus::Running;
  } else if (hashCode == Stopped_HASH) {
    return OTelEnrichmentStatus::Stopped;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OTelEnrichmentStatus>(hashCode);
  }

  return OTelEnrichmentStatus::NOT_SET;
}

Aws::String GetNameForOTelEnrichmentStatus(OTelEnrichmentStatus enumValue) {
  switch (enumValue) {
    case OTelEnrichmentStatus::NOT_SET:
      return {};
    case OTelEnrichmentStatus::Running:
      return "Running";
    case OTelEnrichmentStatus::Stopped:
      return "Stopped";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OTelEnrichmentStatusMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
