/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/H264AllowExplicitWeightedPrediction.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace H264AllowExplicitWeightedPredictionMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

H264AllowExplicitWeightedPrediction GetH264AllowExplicitWeightedPredictionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return H264AllowExplicitWeightedPrediction::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return H264AllowExplicitWeightedPrediction::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<H264AllowExplicitWeightedPrediction>(hashCode);
  }

  return H264AllowExplicitWeightedPrediction::NOT_SET;
}

Aws::String GetNameForH264AllowExplicitWeightedPrediction(H264AllowExplicitWeightedPrediction enumValue) {
  switch (enumValue) {
    case H264AllowExplicitWeightedPrediction::NOT_SET:
      return {};
    case H264AllowExplicitWeightedPrediction::DISABLED:
      return "DISABLED";
    case H264AllowExplicitWeightedPrediction::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace H264AllowExplicitWeightedPredictionMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
