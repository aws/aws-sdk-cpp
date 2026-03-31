/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ConfidenceLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ConfidenceLevelMapper {

static const int FALSE_POSITIVE_HASH = HashingUtils::HashString("FALSE_POSITIVE");
static const int UNCONFIRMED_HASH = HashingUtils::HashString("UNCONFIRMED");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");

ConfidenceLevel GetConfidenceLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FALSE_POSITIVE_HASH) {
    return ConfidenceLevel::FALSE_POSITIVE;
  } else if (hashCode == UNCONFIRMED_HASH) {
    return ConfidenceLevel::UNCONFIRMED;
  } else if (hashCode == LOW_HASH) {
    return ConfidenceLevel::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return ConfidenceLevel::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return ConfidenceLevel::HIGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfidenceLevel>(hashCode);
  }

  return ConfidenceLevel::NOT_SET;
}

Aws::String GetNameForConfidenceLevel(ConfidenceLevel enumValue) {
  switch (enumValue) {
    case ConfidenceLevel::NOT_SET:
      return {};
    case ConfidenceLevel::FALSE_POSITIVE:
      return "FALSE_POSITIVE";
    case ConfidenceLevel::UNCONFIRMED:
      return "UNCONFIRMED";
    case ConfidenceLevel::LOW:
      return "LOW";
    case ConfidenceLevel::MEDIUM:
      return "MEDIUM";
    case ConfidenceLevel::HIGH:
      return "HIGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfidenceLevelMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
