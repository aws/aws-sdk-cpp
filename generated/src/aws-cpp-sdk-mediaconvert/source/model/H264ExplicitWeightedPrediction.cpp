/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/H264ExplicitWeightedPrediction.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace H264ExplicitWeightedPredictionMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

H264ExplicitWeightedPrediction GetH264ExplicitWeightedPredictionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return H264ExplicitWeightedPrediction::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return H264ExplicitWeightedPrediction::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<H264ExplicitWeightedPrediction>(hashCode);
  }

  return H264ExplicitWeightedPrediction::NOT_SET;
}

Aws::String GetNameForH264ExplicitWeightedPrediction(H264ExplicitWeightedPrediction enumValue) {
  switch (enumValue) {
    case H264ExplicitWeightedPrediction::NOT_SET:
      return {};
    case H264ExplicitWeightedPrediction::DISABLED:
      return "DISABLED";
    case H264ExplicitWeightedPrediction::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace H264ExplicitWeightedPredictionMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
