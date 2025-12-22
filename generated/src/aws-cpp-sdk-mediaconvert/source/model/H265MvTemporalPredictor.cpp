/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/H265MvTemporalPredictor.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace H265MvTemporalPredictorMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

H265MvTemporalPredictor GetH265MvTemporalPredictorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return H265MvTemporalPredictor::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return H265MvTemporalPredictor::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<H265MvTemporalPredictor>(hashCode);
  }

  return H265MvTemporalPredictor::NOT_SET;
}

Aws::String GetNameForH265MvTemporalPredictor(H265MvTemporalPredictor enumValue) {
  switch (enumValue) {
    case H265MvTemporalPredictor::NOT_SET:
      return {};
    case H265MvTemporalPredictor::ENABLED:
      return "ENABLED";
    case H265MvTemporalPredictor::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace H265MvTemporalPredictorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
