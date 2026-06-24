/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ThreatSeverity.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ThreatSeverityMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int INFO_HASH = HashingUtils::HashString("INFO");

ThreatSeverity GetThreatSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return ThreatSeverity::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return ThreatSeverity::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return ThreatSeverity::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return ThreatSeverity::LOW;
  } else if (hashCode == INFO_HASH) {
    return ThreatSeverity::INFO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThreatSeverity>(hashCode);
  }

  return ThreatSeverity::NOT_SET;
}

Aws::String GetNameForThreatSeverity(ThreatSeverity enumValue) {
  switch (enumValue) {
    case ThreatSeverity::NOT_SET:
      return {};
    case ThreatSeverity::CRITICAL:
      return "CRITICAL";
    case ThreatSeverity::HIGH:
      return "HIGH";
    case ThreatSeverity::MEDIUM:
      return "MEDIUM";
    case ThreatSeverity::LOW:
      return "LOW";
    case ThreatSeverity::INFO:
      return "INFO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThreatSeverityMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
