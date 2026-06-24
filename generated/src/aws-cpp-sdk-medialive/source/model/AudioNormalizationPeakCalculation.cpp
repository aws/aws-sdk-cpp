/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/AudioNormalizationPeakCalculation.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace AudioNormalizationPeakCalculationMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int TRUE_PEAK_HASH = HashingUtils::HashString("TRUE_PEAK");

AudioNormalizationPeakCalculation GetAudioNormalizationPeakCalculationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return AudioNormalizationPeakCalculation::NONE;
  } else if (hashCode == TRUE_PEAK_HASH) {
    return AudioNormalizationPeakCalculation::TRUE_PEAK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AudioNormalizationPeakCalculation>(hashCode);
  }

  return AudioNormalizationPeakCalculation::NOT_SET;
}

Aws::String GetNameForAudioNormalizationPeakCalculation(AudioNormalizationPeakCalculation enumValue) {
  switch (enumValue) {
    case AudioNormalizationPeakCalculation::NOT_SET:
      return {};
    case AudioNormalizationPeakCalculation::NONE:
      return "NONE";
    case AudioNormalizationPeakCalculation::TRUE_PEAK:
      return "TRUE_PEAK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AudioNormalizationPeakCalculationMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
