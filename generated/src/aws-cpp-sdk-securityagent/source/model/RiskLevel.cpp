/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/RiskLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace RiskLevelMapper {

static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");

RiskLevel GetRiskLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNKNOWN_HASH) {
    return RiskLevel::UNKNOWN;
  } else if (hashCode == INFORMATIONAL_HASH) {
    return RiskLevel::INFORMATIONAL;
  } else if (hashCode == LOW_HASH) {
    return RiskLevel::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return RiskLevel::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return RiskLevel::HIGH;
  } else if (hashCode == CRITICAL_HASH) {
    return RiskLevel::CRITICAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RiskLevel>(hashCode);
  }

  return RiskLevel::NOT_SET;
}

Aws::String GetNameForRiskLevel(RiskLevel enumValue) {
  switch (enumValue) {
    case RiskLevel::NOT_SET:
      return {};
    case RiskLevel::UNKNOWN:
      return "UNKNOWN";
    case RiskLevel::INFORMATIONAL:
      return "INFORMATIONAL";
    case RiskLevel::LOW:
      return "LOW";
    case RiskLevel::MEDIUM:
      return "MEDIUM";
    case RiskLevel::HIGH:
      return "HIGH";
    case RiskLevel::CRITICAL:
      return "CRITICAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RiskLevelMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
