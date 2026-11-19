/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/EnrichmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace EnrichmentStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ENRICHED_HASH = HashingUtils::HashString("ENRICHED");
static const int NO_MATCH_FOUND_HASH = HashingUtils::HashString("NO_MATCH_FOUND");
static const int ACTION_REQUIRED_HASH = HashingUtils::HashString("ACTION_REQUIRED");

EnrichmentStatus GetEnrichmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return EnrichmentStatus::PENDING;
  } else if (hashCode == ENRICHED_HASH) {
    return EnrichmentStatus::ENRICHED;
  } else if (hashCode == NO_MATCH_FOUND_HASH) {
    return EnrichmentStatus::NO_MATCH_FOUND;
  } else if (hashCode == ACTION_REQUIRED_HASH) {
    return EnrichmentStatus::ACTION_REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnrichmentStatus>(hashCode);
  }

  return EnrichmentStatus::NOT_SET;
}

Aws::String GetNameForEnrichmentStatus(EnrichmentStatus enumValue) {
  switch (enumValue) {
    case EnrichmentStatus::NOT_SET:
      return {};
    case EnrichmentStatus::PENDING:
      return "PENDING";
    case EnrichmentStatus::ENRICHED:
      return "ENRICHED";
    case EnrichmentStatus::NO_MATCH_FOUND:
      return "NO_MATCH_FOUND";
    case EnrichmentStatus::ACTION_REQUIRED:
      return "ACTION_REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnrichmentStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
