/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/model/AnomalyDetectorAdaptationSpeed.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {
namespace AnomalyDetectorAdaptationSpeedMapper {

static const int FAST_HASH = HashingUtils::HashString("FAST");
static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
static const int SLOW_HASH = HashingUtils::HashString("SLOW");

AnomalyDetectorAdaptationSpeed GetAnomalyDetectorAdaptationSpeedForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAST_HASH) {
    return AnomalyDetectorAdaptationSpeed::FAST;
  } else if (hashCode == NORMAL_HASH) {
    return AnomalyDetectorAdaptationSpeed::NORMAL;
  } else if (hashCode == SLOW_HASH) {
    return AnomalyDetectorAdaptationSpeed::SLOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnomalyDetectorAdaptationSpeed>(hashCode);
  }

  return AnomalyDetectorAdaptationSpeed::NOT_SET;
}

Aws::String GetNameForAnomalyDetectorAdaptationSpeed(AnomalyDetectorAdaptationSpeed enumValue) {
  switch (enumValue) {
    case AnomalyDetectorAdaptationSpeed::NOT_SET:
      return {};
    case AnomalyDetectorAdaptationSpeed::FAST:
      return "FAST";
    case AnomalyDetectorAdaptationSpeed::NORMAL:
      return "NORMAL";
    case AnomalyDetectorAdaptationSpeed::SLOW:
      return "SLOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnomalyDetectorAdaptationSpeedMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
