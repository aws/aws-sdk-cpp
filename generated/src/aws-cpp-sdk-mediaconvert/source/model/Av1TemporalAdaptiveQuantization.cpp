/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/Av1TemporalAdaptiveQuantization.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace Av1TemporalAdaptiveQuantizationMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

Av1TemporalAdaptiveQuantization GetAv1TemporalAdaptiveQuantizationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return Av1TemporalAdaptiveQuantization::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return Av1TemporalAdaptiveQuantization::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Av1TemporalAdaptiveQuantization>(hashCode);
  }

  return Av1TemporalAdaptiveQuantization::NOT_SET;
}

Aws::String GetNameForAv1TemporalAdaptiveQuantization(Av1TemporalAdaptiveQuantization enumValue) {
  switch (enumValue) {
    case Av1TemporalAdaptiveQuantization::NOT_SET:
      return {};
    case Av1TemporalAdaptiveQuantization::DISABLED:
      return "DISABLED";
    case Av1TemporalAdaptiveQuantization::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Av1TemporalAdaptiveQuantizationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
