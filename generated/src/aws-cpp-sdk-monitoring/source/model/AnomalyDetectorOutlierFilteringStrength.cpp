/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/model/AnomalyDetectorOutlierFilteringStrength.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {
namespace AnomalyDetectorOutlierFilteringStrengthMapper {

static const int MINIMAL_HASH = HashingUtils::HashString("MINIMAL");
static const int MODERATE_HASH = HashingUtils::HashString("MODERATE");
static const int STRICT_HASH = HashingUtils::HashString("STRICT");

AnomalyDetectorOutlierFilteringStrength GetAnomalyDetectorOutlierFilteringStrengthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MINIMAL_HASH) {
    return AnomalyDetectorOutlierFilteringStrength::MINIMAL;
  } else if (hashCode == MODERATE_HASH) {
    return AnomalyDetectorOutlierFilteringStrength::MODERATE;
  } else if (hashCode == STRICT_HASH) {
    return AnomalyDetectorOutlierFilteringStrength::STRICT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnomalyDetectorOutlierFilteringStrength>(hashCode);
  }

  return AnomalyDetectorOutlierFilteringStrength::NOT_SET;
}

Aws::String GetNameForAnomalyDetectorOutlierFilteringStrength(AnomalyDetectorOutlierFilteringStrength enumValue) {
  switch (enumValue) {
    case AnomalyDetectorOutlierFilteringStrength::NOT_SET:
      return {};
    case AnomalyDetectorOutlierFilteringStrength::MINIMAL:
      return "MINIMAL";
    case AnomalyDetectorOutlierFilteringStrength::MODERATE:
      return "MODERATE";
    case AnomalyDetectorOutlierFilteringStrength::STRICT:
      return "STRICT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnomalyDetectorOutlierFilteringStrengthMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
