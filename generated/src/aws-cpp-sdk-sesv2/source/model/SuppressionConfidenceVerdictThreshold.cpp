/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/SuppressionConfidenceVerdictThreshold.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace SuppressionConfidenceVerdictThresholdMapper {

static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

SuppressionConfidenceVerdictThreshold GetSuppressionConfidenceVerdictThresholdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MEDIUM_HASH) {
    return SuppressionConfidenceVerdictThreshold::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return SuppressionConfidenceVerdictThreshold::HIGH;
  } else if (hashCode == MANAGED_HASH) {
    return SuppressionConfidenceVerdictThreshold::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SuppressionConfidenceVerdictThreshold>(hashCode);
  }

  return SuppressionConfidenceVerdictThreshold::NOT_SET;
}

Aws::String GetNameForSuppressionConfidenceVerdictThreshold(SuppressionConfidenceVerdictThreshold enumValue) {
  switch (enumValue) {
    case SuppressionConfidenceVerdictThreshold::NOT_SET:
      return {};
    case SuppressionConfidenceVerdictThreshold::MEDIUM:
      return "MEDIUM";
    case SuppressionConfidenceVerdictThreshold::HIGH:
      return "HIGH";
    case SuppressionConfidenceVerdictThreshold::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SuppressionConfidenceVerdictThresholdMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
