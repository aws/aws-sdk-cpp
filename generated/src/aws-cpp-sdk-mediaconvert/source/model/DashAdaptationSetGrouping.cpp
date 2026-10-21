/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/DashAdaptationSetGrouping.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace DashAdaptationSetGroupingMapper {

static const int CODEC_HASH = HashingUtils::HashString("CODEC");

DashAdaptationSetGrouping GetDashAdaptationSetGroupingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CODEC_HASH) {
    return DashAdaptationSetGrouping::CODEC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DashAdaptationSetGrouping>(hashCode);
  }

  return DashAdaptationSetGrouping::NOT_SET;
}

Aws::String GetNameForDashAdaptationSetGrouping(DashAdaptationSetGrouping enumValue) {
  switch (enumValue) {
    case DashAdaptationSetGrouping::NOT_SET:
      return {};
    case DashAdaptationSetGrouping::CODEC:
      return "CODEC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DashAdaptationSetGroupingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
