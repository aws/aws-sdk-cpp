/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ThreatStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ThreatStatusMapper {

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");
static const int DISMISSED_HASH = HashingUtils::HashString("DISMISSED");

ThreatStatus GetThreatStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_HASH) {
    return ThreatStatus::OPEN;
  } else if (hashCode == RESOLVED_HASH) {
    return ThreatStatus::RESOLVED;
  } else if (hashCode == DISMISSED_HASH) {
    return ThreatStatus::DISMISSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThreatStatus>(hashCode);
  }

  return ThreatStatus::NOT_SET;
}

Aws::String GetNameForThreatStatus(ThreatStatus enumValue) {
  switch (enumValue) {
    case ThreatStatus::NOT_SET:
      return {};
    case ThreatStatus::OPEN:
      return "OPEN";
    case ThreatStatus::RESOLVED:
      return "RESOLVED";
    case ThreatStatus::DISMISSED:
      return "DISMISSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThreatStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
